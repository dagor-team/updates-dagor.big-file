-- define lua functions 
function NoOp(self, source)
end

function kill(self) -- Kill unit self.
    ExecuteAction("NAMED_KILL", self);
end

function RadiatePhialFear( self )
    ObjectBroadcastEventToEnemies( self, "BeAfraidOfPhial", 75 )
end

function RadiateUncontrollableFear( self )
    ObjectBroadcastEventToEnemies( self, "BeUncontrollablyAfraid", 350 )
end

function RadiateGateDamageFear(self)
    ObjectBroadcastEventToAllies(self, "BeAfraidOfGateDamaged", 200)
end

function RadiateBalrogFear(self)
    ObjectBroadcastEventToEnemies(self, "BeAfraidOfBalrog", 180)
end

function OnMumakilCreated(self)
    ObjectHideSubObjectPermanently( self, "Houda", true )
    ObjectHideSubObjectPermanently( self, "Houda01", true )
end

function OnTrollCreated(self)
    ObjectHideSubObjectPermanently( self, "Trunk01", true )
    ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnAngmarFellbeastCreated(self)
    ObjectHideSubObjectPermanently( self, "RIDER", true )
    ObjectHideSubObjectPermanently( self, "NAZGUL_SKIN", true )
    ObjectHideSubObjectPermanently( self, "RIDER2", true )
end

function OnCreepTrollCreated(self)
    ObjectHideSubObjectPermanently( self, "Trunk01", true )
    ObjectHideSubObjectPermanently( self, "ROCK", true )
end

function OnCaptureFlagGenericEvent(self,data)
    local str = ObjectCapturingObjectPlayerSide(self)
    if str == nil then
        str = ObjectPlayerSide(self)
    end

    ObjectHideSubObjectPermanently( self, "FLAG_ISENGARD", true)
    ObjectHideSubObjectPermanently( self, "FLAG_MORDOR", true)
    ObjectHideSubObjectPermanently( self, "FLAG_WILD", true)
    ObjectHideSubObjectPermanently( self, "FLAG_MEN", true)
    ObjectHideSubObjectPermanently( self, "FLAG_ELVES", true)
    ObjectHideSubObjectPermanently( self, "FLAG_DWARVES", true)
    ObjectHideSubObjectPermanently( self, "FLAG_ANGMAR", true)
    ObjectHideSubObjectPermanently( self, "FLAG_EVILMEN", true)
    ObjectHideSubObjectPermanently( self, "FLAG_ARNOR", true)
    ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", true)
    ObjectHideSubObjectPermanently( self, "FLAG_IMLADRIS", true)
    ObjectHideSubObjectPermanently( self, "FLAG_GUNDABAD", true)
    ObjectHideSubObjectPermanently( self, "FLAG_IRONHILLS", true)
    ObjectHideSubObjectPermanently( self, "FLAG_RHUN", true)

    if str == "Isengard" then
        ObjectHideSubObjectPermanently( self, "FLAG_ISENGARD", false)
    elseif str == "Gundabad" then
        ObjectHideSubObjectPermanently( self, "FLAG_GUNDABAD", false)
    elseif str == "Mordor" then
        ObjectHideSubObjectPermanently( self, "FLAG_MORDOR", false)
    elseif str == "EvilMen" then
        ObjectHideSubObjectPermanently( self, "FLAG_EVILMEN", false)
    elseif str == "Men" then
        ObjectHideSubObjectPermanently( self, "FLAG_MEN", false)
    elseif str == "Arnor" then
        ObjectHideSubObjectPermanently( self, "FLAG_ARNOR", false)
    elseif str == "Rohan" then
        ObjectHideSubObjectPermanently( self, "FLAG_ROHAN", false)
    elseif str == "Dwarves" then
        ObjectHideSubObjectPermanently( self, "FLAG_DWARVES", false)
    elseif str == "IronHills" then
        ObjectHideSubObjectPermanently( self, "FLAG_IRONHILLS", false)
    elseif str == "Elves" then
        ObjectHideSubObjectPermanently( self, "FLAG_ELVES", false)
    elseif str == "Imladris" then
        ObjectHideSubObjectPermanently( self, "FLAG_IMLADRIS", false)
    elseif str == "Wild" then
        ObjectHideSubObjectPermanently( self, "FLAG_WILD", false)
    elseif str == "Angmar" then
        ObjectHideSubObjectPermanently( self, "FLAG_ANGMAR", false)
    elseif str == "Rhun" then
        ObjectHideSubObjectPermanently( self, "FLAG_RHUN", false)
    else
        ObjectHideSubObjectPermanently( self, "FLAG_NEUTRAL", false)
    end
end

function OnTrollGenericEvent(self,data)

    local str = tostring( data )

    if str == "show_rock" then
        ObjectHideSubObjectPermanently( self, "ROCK", false )
    elseif str == "hide_rock" then
        ObjectHideSubObjectPermanently( self, "ROCK", true )
    end
end

function OnEntCreated(self)
    --ObjectShowSubObjectPermanently( self, "ROCK", true )
    ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnMountainGiantCreated(self)
    --ObjectHideSubObjectPermanently( self, "ROCK", true )
    ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
    ObjectHideSubObjectPermanently( self, "DAMON01" )
end

function OnMountainGiantGenericEvent(self)
    
    local str = tostring( data )

    if str == "show_rock" then
        ObjectHideSubObjectPermanently( self, "ROCK", false )
    elseif str == "hide_rock" then
        ObjectHideSubObjectPermanently( self, "ROCK", true )
    end
end

function GoIntoRampage(self)
    ObjectEnterRampageState(self)
        
    --Broadcast fear to surrounding unit(if we actually rampaged)
    if ObjectTestModelCondition(self, "WEAPONSET_RAMPAGE") then
        ObjectBroadcastEventToUnits(self, "BeAfraidOfRampage", 250)
    end
end

function MakeMeAlert(self)
    ObjectEnterAlertState(self)
end

function BeEnraged(self)
    --Broadcast enraged to surrounding units.
    ObjectBroadcastEventToAllies(self, "BeingEnraged", 500)
end

function BecomeEnraged(self)
    ObjectSetEnragedState(self, true)
end

function StopEnraged(self)
    ObjectSetEnragedState(self, false)
end

function BecomeUncontrollablyAfraid(self, other)
    if not ObjectTestCanSufferFear(self) then
        return
    end

    ObjectEnterUncontrollableCowerState(self, other)
end

function BecomeAfraidOfRampage(self, other)
    if not ObjectTestCanSufferFear(self) then
        return
    end

    ObjectEnterCowerState(self, other)
end

function BecomeAfraidOfBalrog(self, other)
    if not ObjectTestCanSufferFear(self) then
        return
    end

    ObjectEnterCowerState(self, other)
end

function RadiateTerror(self, other)
    ObjectBroadcastEventToEnemies(self, "BeTerrified", 180)
end
    
function RadiateTerrorEx(self, other, terrorRange)
    ObjectBroadcastEventToEnemies(self, "BeTerrified", terrorRange)
end
    
function BecomeTerrified(self, other)
    ObjectEnterRunAwayPanicState(self, other)
end

function BecomeAfraidOfGateDamaged(self, other)
    if not ObjectTestCanSufferFear(self) then
        return
    end

    ObjectEnterCowerState(self,other)
end


function ChantForUnit(self) -- Used by units to broadcast the chant event to their own side.
    ObjectBroadcastEventToAllies(self, "BeginChanting", 9999)
end

function StopChantForUnit(self) -- Used by units to stop the chant event to their own side.
    ObjectBroadcastEventToAllies(self, "StopChanting", 9999)
end

function BeginCheeringForGrond(self)
    ObjectSetChanting(self, true)
end

function StopCheeringForGrond(self)
    ObjectSetChanting(self, false)
end

function OnMordorArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "ARROWFIRE", true )
end

function MordorFighterBecomeUncontrollablyAfraid(self,other)
    local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

    BecomeUncontrollablyAfraid(self,other)                 -- Call base function appropriate to many unit types
    
    -- Play unit-specific sound, but only when first entering state (not every time troll sends out fear message!)
    -- BecomeAfraidOfTroll may fail, don't play sound if we didn't enter fear state
        if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
        ObjectPlaySound(self, "MordorFighterEntFear") 
    end
end

function MordorFighterBecomeAfraidOfPhial(self,other)
    local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

    BecomeUncontrollablyAfraid(self,other)
    -- BecomeAfraidOfTroll(self,other)                 -- Call base function appropriate to many unit types
    
    -- Play unit-specific sound, but only when first entering state (not every time troll sends out fear message!)
    -- BecomeAfraidOfTroll may fail, don't play sound if we didn't enter fear state
--        if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
--            ObjectPlaySound(self, "MordorFighterEntFear") 
--        end
end

function OnMordorCorsairCreated(self)
    ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
    ObjectHideSubObjectPermanently( self, "Forged_Blade01", true )
end

function WildInfantryBecomeAfraidOfPhial(self,other)
    local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")
    BecomeUncontrollablyAfraid(self,other)
end

function ShelobBecomeAfraidOfPhial(self,other)
    local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

    BecomeUncontrollablyAfraid(self,other)
end

function OnInfantryBannerCreated(self)
    ObjectHideSubObjectPermanently( self, "Glow", true )
end

function OnCavalryCreated(self)
    ObjectHideSubObjectPermanently( self, "Glow", true )
end

function OnGondorFighterCreated(self)
    ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
    ObjectHideSubObjectPermanently( self, "Hammer1", true )
    ObjectHideSubObjectPermanently( self, "Glow", true )
    ObjectHideSubObjectPermanently( self, "Glow1", true )
end

function OnAragornCreated(self)
    ObjectHideSubObjectPermanently( self, "PLANE02", true )
end

function OnGondorArcherCreated(self)
    ObjectHideSubObjectPermanently( self, "FireArowTip", true ) -- This gets hidden because the Fire Arrow upgrade turns it on.
end

function DragonStrikeDragonCreated(self)
    ObjectForbidPlayerCommands( self, true )
end

function OnLegolasCreated(self)
    -- ObjectHideSubObjectPermanently( self, "arrow02", true )        -- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
    -- ObjectHideSubObjectPermanently( self, "arrow", true )        -- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
end

function OnRohanArcherCreated(self)
    ObjectHideSubObjectPermanently( self, "FireArowTip", true ) -- yes, it's a typo in the art.
    -- ObjectHideSubObjectPermanently( self, "ArrowNock", true )
    -- ObjectHideSubObjectPermanently( self, "arrow", true )
end

function GondorFighterBecomeAfraid(self, other)
    local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

    -- An object has a 100% chance to become afraid.
    -- An object has a 66% chance to be feared, 33% chance to run away.
    if GetRandomNumber() <= 0.67 then 
        ObjectEnterFearState(self, other, false) -- become afraid of other.
    else --if GetRandomNumber() > 0.67 then
        ObjectEnterRunAwayPanicState(self, other) -- run away.

    end
    
    if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
        ObjectPlaySound(self, "GondorSoldierScream")    
    end
    
end


function GondorFighterBecomeAfraidOfGateDamaged(self, other)
    local wasAfraid = ObjectTestModelCondition(self, "EMOTION_AFRAID")

    BecomeAfraidOfGateDamaged(self,other)                 -- Call base function appropriate to many unit types
    
    -- Play unit-specific sound, but only when first entering state (not every time troll sends out fear message!)
    -- BecomeAfraidOfGateDamaged may fail, don't play sound if we didn't enter fear state
    
    if ( not wasAfraid ) and ObjectTestModelCondition(self, "EMOTION_AFRAID") then
        ObjectPlaySound(self, "GondorSoldierScream")    
    end
end

function GondorFighterRecoverFromTerror(self)
    -- Add recovery sound
    ObjectPlaySound(self, "GondorSoldierRecoverFromTerror")
end

function SpyMoving(self, other)
    print(ObjectDescription(self).." spying movement of "..ObjectDescription(other));
end

function EcthelionConsiderUsingDefensePower(self, other, delay, amount)
   -- Put up the shield if a big attack is coming and we have time to block it
   if tonumber(delay) > 1 then
       if tonumber(amount) >= 100 then
           ObjectDoSpecialPower(self, "SpecialPowerShieldBubble")
           return
       end
   end
end

function GandalfTriggerWizardBlast(self)
    ObjectCreateAndFireTempWeapon(self, "GandalfWizardBlast")
end

--function SarumanConsiderUsingDefensePower(self, other, delay, amount)
--    -- Put up the shield if a big attack is coming and we have time to block it
--E4    if tonumber(delay) > 1 then
--E4        if tonumber(amount) >= 25 then
--E4            ObjectDoSpecialPower(self, "SpecialPowerShieldBubble")
--E4            return
--E4        end
--E4    end
--    
--    -- Or, if we are being hit and there are alot of guys arround, do our cool pushback power
--    if tonumber(ObjectCountNearbyEnemies(self, 50)) >= 4 then
--        ObjectDoSpecialPower(self, "SpecialPowerTelekeneticPush")
--        return
--    end
--end

function BalrogTriggerBreatheFire(self)
    ObjectCreateAndFireTempWeapon(self, "MordorBalrogBreath")
end

function OnRohirrimCreated(self)
    ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
    ObjectHideSubObjectPermanently( self, "SHIELD", true )
    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
end

function OnSummonedRohirrimCreated(self)
    ObjectGrantUpgrade( self, "Upgrade_RohanHeavyArmorForRohirrim" )
    ObjectGrantUpgrade( self, "Upgrade_RohanHorseShield" )
    ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
end

function OnGondorCavalryCreated(self)
    ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
    ObjectHideSubObjectPermanently( self, "sshield", true )
end

function OnDwarvenBattleWagonCreated(self)
    ObjectHideSubObjectPermanently( self, "dwarfHearth", true )
    ObjectHideSubObjectPermanently( self, "dwarfHearthFire", true )
    ObjectHideSubObjectPermanently( self, "Banner_L", true )
    ObjectHideSubObjectPermanently( self, "Glow", true )
end

function OnEvilMenBlackRiderCreated(self)
    -- @todo place appropriate functionality here
end

function OnBallistaCreated(self)
    ObjectHideSubObjectPermanently( self, "MinedArrow", true )
end

function OnCatapultCreated(self)
    ObjectHideSubObjectPermanently( self, "PROJECTILEROCK", true )
    ObjectHideSubObjectPermanently( self, "FIREPLANE", true )
end

function OnTrebuchetCreated(self)
    ObjectHideSubObjectPermanently( self, "FIREPLANE", true )
end

function OnTrollSlingCreated(self)
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
end

function OnPorterCreated(self)
    ObjectHideSubObjectPermanently( self, "ARROWS", true )
    ObjectHideSubObjectPermanently( self, "BRAZIER", true )
    ObjectHideSubObjectPermanently( self, "BOWS", true )
    -- ObjectHideSubObjectPermanently( self, "TREBUCHET_FIRE", true )
    ObjectHideSubObjectPermanently( self, "SWORDS", true )
    ObjectHideSubObjectPermanently( self, "SHIELDS", true )
    ObjectHideSubObjectPermanently( self, "ARMOR", true )
    -- ObjectHideSubObjectPermanently( self, "BANNERS", true )
end

function OnEvilPorterCreated(self)
    ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "ARROW_UPGRADE", true )
    ObjectHideSubObjectPermanently( self, "ARMOR_UPGRADE", true )
    ObjectHideSubObjectPermanently( self, "GOLD", true )
    ObjectHideSubObjectPermanently( self, "SWORD_UPGRADES", true )
end

function OnPeasantCreated(self)
    ObjectHideSubObjectPermanently( self, "HELMET", true )
    ObjectHideSubObjectPermanently( self, "SWORD", true )
    ObjectHideSubObjectPermanently( self, "HAMMER", false )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "SHIELD", true )
    ObjectHideSubObjectPermanently( self, "Broom", true )
end

function OnMordorSauronCreated(self)
    ObjectHideSubObjectPermanently( self, "SHARD01", true )
    ObjectHideSubObjectPermanently( self, "SHARD02", true )
    ObjectHideSubObjectPermanently( self, "SHARD03", true )
    ObjectHideSubObjectPermanently( self, "SHARD04", true )
    ObjectHideSubObjectPermanently( self, "SHARD05", true )
    ObjectHideSubObjectPermanently( self, "SHARD06", true )
    ObjectHideSubObjectPermanently( self, "SHARD07", true )
    ObjectHideSubObjectPermanently( self, "SHARD08", true )
    ObjectHideSubObjectPermanently( self, "SHARD09", true )
    ObjectHideSubObjectPermanently( self, "SHARD10", true )
    ObjectHideSubObjectPermanently( self, "SHARD11", true )
    ObjectHideSubObjectPermanently( self, "SHARD12", true )
    ObjectHideSubObjectPermanently( self, "SHARD13", true )
    ObjectHideSubObjectPermanently( self, "SHARD14", true )
    ObjectHideSubObjectPermanently( self, "SHARD15", true )
    ObjectHideSubObjectPermanently( self, "SHARD16", true )
    ObjectHideSubObjectPermanently( self, "SHARD17", true )
    ObjectHideSubObjectPermanently( self, "SHARD18", true )
    ObjectHideSubObjectPermanently( self, "SHARD19", true )
    ObjectHideSubObjectPermanently( self, "SHARD20", true )
end

function OnElvenWarriorCreated(self)
    ObjectHideSubObject( self, "ARROW", true )
    ObjectHideSubObject( self, "ARROWNOCK", true )
    ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
    ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
end

function OnIsengardFighterCreated(self)
    ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
    ObjectHideSubObjectPermanently( self, "Glow", true )
end

function OnIsengardWildmanCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Torch", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN1", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN2", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN3", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN4", true )

	ObjectHideSubObjectPermanently( self, "PICK", true )
	ObjectHideSubObjectPermanently( self, "SICKLE", true )
	ObjectHideSubObjectPermanently( self, "AXE", true )
	ObjectHideSubObjectPermanently( self, "ROHANAXE", true )
	ObjectHideSubObjectPermanently( self, "URUKSWORD", true )

	ObjectHideSubObjectPermanently( self, "FORKLEFT", true )
	ObjectHideSubObjectPermanently( self, "SICKLELEFT", true )
	ObjectHideSubObjectPermanently( self, "AXELEFT", true )
	ObjectHideSubObjectPermanently( self, "ROHANAXELEFT", true )
	ObjectHideSubObjectPermanently( self, "URUKSWORDLEFT", true )

    local body         =    GetRandomNumber()
    local weaponleft         =    GetRandomNumber()
    local weaponright         =    GetRandomNumber()

    if body <= 0.25 then
        ObjectHideSubObjectPermanently( self, "WILDMAN1", false )
    elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "WILDMAN2", false )
    elseif body <= 0.75 then
        ObjectHideSubObjectPermanently( self, "WILDMAN3", false )
     else
        ObjectHideSubObjectPermanently( self, "WILDMAN4", false )
    end  

    if weaponright <= 0.20 then
        ObjectHideSubObjectPermanently( self, "PICK", false )
    elseif weaponright <= 0.40 then
        ObjectHideSubObjectPermanently( self, "SICKLE", false )
    elseif weaponright <= 0.60 then
        ObjectHideSubObjectPermanently( self, "AXE", false )
    elseif weaponright <= 0.80 then
        ObjectHideSubObjectPermanently( self, "URUKSWORD", false )
     else
        ObjectHideSubObjectPermanently( self, "ROHANAXE", false )
    end  

    if weaponleft <= 0.20 then
        ObjectHideSubObjectPermanently( self, "FORKLEFT", false )
    elseif weaponleft <= 0.40 then
        ObjectHideSubObjectPermanently( self, "ROHANAXELEFT", false )
    elseif weaponleft <= 0.60 then
        ObjectHideSubObjectPermanently( self, "SICKLELEFT", false )
    elseif weaponleft <= 0.80 then
        ObjectHideSubObjectPermanently( self, "AXELEFT", false )
     else
        ObjectHideSubObjectPermanently( self, "URUKSWORDLEFT", false )
    end  
end

function OnWildSpiderRiderCreated(self)
    ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
    ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
    ObjectHideSubObject( self, "ARROWNOCK", true )
end

function OnHaradrimArcherCreated(self)
    ObjectHideSubObjectPermanently( self, "FireArowTip", true )
    ObjectHideSubObject( self, "ArrowNock", true )
end

function OnIsengardArcherCreated(self)
    ObjectHideSubObject( self, "ARROWNOCK", true )
    ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
end

function OnWildGoblinArcherCreated(self)
    ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
end

function OnGarrisonableCreated(self)
    ObjectHideSubObjectPermanently( self, "GARRISON01", true )
    ObjectHideSubObjectPermanently( self, "GARRISON02", true )
end
function OnDwarvenGuardianCreated(self)
    ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
    ObjectHideSubObjectPermanently( self, "Hammer1", true )
end

function CreateAHeroHideEverything(self)
    ObjectHideSubObjectPermanently( self, "SWORD", true )
    ObjectHideSubObjectPermanently( self, "BOW", true )
    ObjectHideSubObjectPermanently( self, "BOW_03", true )
    ObjectHideSubObjectPermanently( self, "BOW_04", true )
    ObjectHideSubObjectPermanently( self, "BOW_05", true )
    ObjectHideSubObjectPermanently( self, "TRUNK01", true )
    ObjectHideSubObjectPermanently( self, "STAFF_LIGHT", true )
    ObjectHideSubObjectPermanently( self, "OBJECT01", true )
    
    ObjectHideSubObjectPermanently( self, "SHIELD01", true )
    ObjectHideSubObjectPermanently( self, "SHIELD_01", true )
    ObjectHideSubObjectPermanently( self, "SPEAR", true )
    ObjectHideSubObjectPermanently( self, "SHIELD_B", true )
    ObjectHideSubObjectPermanently( self, "SHIELD_C", true )
    ObjectHideSubObjectPermanently( self, "SHIELD_D", true )
    ObjectHideSubObjectPermanently( self, "B_SHIELD", true )
    ObjectHideSubObjectPermanently( self, "WEAPON_A", true )
    ObjectHideSubObjectPermanently( self, "WEAPON_B", true )
    ObjectHideSubObjectPermanently( self, "WEAPON_C", true )
    ObjectHideSubObjectPermanently( self, "WEAPON_D", true )
    
    ObjectHideSubObjectPermanently( self, "AXE02", true )

    ObjectHideSubObjectPermanently( self, "AxeWeapon", true )
    ObjectHideSubObjectPermanently( self, "Belthronding", true )
    -- ObjectHideSubObjectPermanently( self, "Mithlondrecurve", true )
    ObjectHideSubObjectPermanently( self, "Dwarf_Axe01", true )
    ObjectHideSubObjectPermanently( self, "FireBrand", true )
    ObjectHideSubObjectPermanently( self, "FireBrand_SM", true )
    ObjectHideSubObjectPermanently( self, "FireBrand_FX01", true )
    ObjectHideSubObjectPermanently( self, "FireBrand_FX02", true )
    ObjectHideSubObjectPermanently( self, "Gurthang", true )
    ObjectHideSubObjectPermanently( self, "Gurthang_SM", true )
    ObjectHideSubObjectPermanently( self, "HeroOfTheWestShield", true )
    ObjectHideSubObjectPermanently( self, "HeroOfTheWestShield_SM", true )
    ObjectHideSubObjectPermanently( self, "MithlondBow", true )
    ObjectHideSubObjectPermanently( self, "TrollBane", true )
    ObjectHideSubObjectPermanently( self, "TrollBane_SM", true )
    ObjectHideSubObjectPermanently( self, "TrollBane_FX01", true )
    ObjectHideSubObjectPermanently( self, "TrollBane_FX02", true )
    ObjectHideSubObjectPermanently( self, "TrollMace", true )
    ObjectHideSubObjectPermanently( self, "TrollSword", true )
    ObjectHideSubObjectPermanently( self, "WestronSword", true )
    ObjectHideSubObjectPermanently( self, "WestronSword", true )
    ObjectHideSubObjectPermanently( self, "WestronSword_SM", true )
    ObjectHideSubObjectPermanently( self, "WizardStaff01", true )
    ObjectHideSubObjectPermanently( self, "WizStaff01_FX01", true )
    ObjectHideSubObjectPermanently( self, "WizStaff01_FX2", true )
    ObjectHideSubObjectPermanently( self, "WizStaff01_FX3", true )
    ObjectHideSubObjectPermanently( self, "WizStaff01_FX4", true )
    ObjectHideSubObjectPermanently( self, "WizardStaff02", true )
    ObjectHideSubObjectPermanently( self, "WizStaff02_FX1", true )
    ObjectHideSubObjectPermanently( self, "WizardStaff03", true )
    ObjectHideSubObjectPermanently( self, "WizStaff03_FX01", true )
    ObjectHideSubObjectPermanently( self, "WizStaff03_FX02", true )
    ObjectHideSubObjectPermanently( self, "WizardStaff04", true )
    ObjectHideSubObjectPermanently( self, "WizStaff04_FX01", true )
    ObjectHideSubObjectPermanently( self, "WizStaff04_FX02", true )
    ObjectHideSubObjectPermanently( self, "WizStaff04_FX03", true )
    ObjectHideSubObjectPermanently( self, "WizStaff04_FX04", true )
    ObjectHideSubObjectPermanently( self, "WizStaff04_FX05", true )
    ObjectHideSubObjectPermanently( self, "WizStaff04_FX06", true )
    ObjectHideSubObjectPermanently( self, "WizStaff04_FX07", true )
    ObjectHideSubObjectPermanently( self, "WizardSword", true )
    ObjectHideSubObjectPermanently( self, "CMSword01", true )
    ObjectHideSubObjectPermanently( self, "CMSword02", true )
    ObjectHideSubObjectPermanently( self, "CHEST_00", true )    
    ObjectHideSubObjectPermanently( self, "CHEST_01", true )    
    ObjectHideSubObjectPermanently( self, "CHEST_02", true )    
    ObjectHideSubObjectPermanently( self, "BOOT_00", true )
    ObjectHideSubObjectPermanently( self, "BOOT_01", true )
    ObjectHideSubObjectPermanently( self, "BOOT_02", true )
    ObjectHideSubObjectPermanently( self, "BOOT_03", true )
    ObjectHideSubObjectPermanently( self, "BOOT_04", true )
    ObjectHideSubObjectPermanently( self, "BOOT_05", true )
    ObjectHideSubObjectPermanently( self, "BOOT_06", true )
    ObjectHideSubObjectPermanently( self, "SHLD_00", true )
    ObjectHideSubObjectPermanently( self, "SHLD_01", true )
    ObjectHideSubObjectPermanently( self, "SHLD_02", true )
    ObjectHideSubObjectPermanently( self, "SHLD_03", true )
    ObjectHideSubObjectPermanently( self, "SHLD_04", true )
    ObjectHideSubObjectPermanently( self, "SLDR_00", true )
    ObjectHideSubObjectPermanently( self, "SLDR_01", true )
    ObjectHideSubObjectPermanently( self, "SLDR_02", true )
    ObjectHideSubObjectPermanently( self, "SLDR_03", true )
    ObjectHideSubObjectPermanently( self, "SLDR_04", true )
    ObjectHideSubObjectPermanently( self, "SLDR_05", true )
    ObjectHideSubObjectPermanently( self, "SLDR_06", true )
    ObjectHideSubObjectPermanently( self, "Shield_1OG", true )
    ObjectHideSubObjectPermanently( self, "Shield_2OG", true )
    ObjectHideSubObjectPermanently( self, "HAIR_00", true )
    ObjectHideSubObjectPermanently( self, "HAIR_01", true )
    ObjectHideSubObjectPermanently( self, "HLMT_00", true )
    ObjectHideSubObjectPermanently( self, "HLMT_01", true )
    ObjectHideSubObjectPermanently( self, "HLMT_02", true )
    ObjectHideSubObjectPermanently( self, "HLMT_03", true )
    ObjectHideSubObjectPermanently( self, "HLMT_04", true )
    ObjectHideSubObjectPermanently( self, "HLMT_05", true )
    ObjectHideSubObjectPermanently( self, "HLMT_06", true )
    ObjectHideSubObjectPermanently( self, "HLMT_07", true )
    ObjectHideSubObjectPermanently( self, "HLMT_07_LOD1", true )
    ObjectHideSubObjectPermanently( self, "HLMT_08", true )
    ObjectHideSubObjectPermanently( self, "HLMT_09", true )
    ObjectHideSubObjectPermanently( self, "GNLT_00", true )
    ObjectHideSubObjectPermanently( self, "GNLT_01", true )
    ObjectHideSubObjectPermanently( self, "GNLT_02", true )
    ObjectHideSubObjectPermanently( self, "GNLT_03", true )
    ObjectHideSubObjectPermanently( self, "GNLT_04", true )
    ObjectHideSubObjectPermanently( self, "GNLT_05", true )
    ObjectHideSubObjectPermanently( self, "GNLT_06", true )
    ObjectHideSubObjectPermanently( self, "GNLT_07", true )
    ObjectHideSubObjectPermanently( self, "GNLT_08", true )
    ObjectHideSubObjectPermanently( self, "GHLT_08", true )
    ObjectHideSubObjectPermanently( self, "GNLT_09", true )
    ObjectHideSubObjectPermanently( self, "GNLT_09_LOD1", true )
    ObjectHideSubObjectPermanently( self, "GNLT_10", true )
    ObjectHideSubObjectPermanently( self, "SPR_01", true )
    ObjectHideSubObjectPermanently( self, "PAXE_01", true )
    ObjectHideSubObjectPermanently( self, "PAXE_01_LOD1", true )
    ObjectHideSubObjectPermanently( self, "SWRD_01", true )
    ObjectHideSubObjectPermanently( self, "SWRD_02", true )
    ObjectHideSubObjectPermanently( self, "SWRD_03", true )
    ObjectHideSubObjectPermanently( self, "SWRD_04", true )
    ObjectHideSubObjectPermanently( self, "SWRD_05", true )
    ObjectHideSubObjectPermanently( self, "SWD_01", true )
    ObjectHideSubObjectPermanently( self, "SWD_02", true )
    ObjectHideSubObjectPermanently( self, "SWD_03", true )
    ObjectHideSubObjectPermanently( self, "SWD_04", true )
    ObjectHideSubObjectPermanently( self, "STFF_05", true )
    ObjectHideSubObjectPermanently( self, "STFF_06", true )
    ObjectHideSubObjectPermanently( self, "objSLDR_01", true )
    ObjectHideSubObjectPermanently( self, "objSLDR_02", true )
    ObjectHideSubObjectPermanently( self, "objSLDR_03", true )
    ObjectHideSubObjectPermanently( self, "objHLMT_01", true )
    ObjectHideSubObjectPermanently( self, "objHLMT_02", true )
    ObjectHideSubObjectPermanently( self, "objHLMT_03", true )
    ObjectHideSubObjectPermanently( self, "objHLMT_04", true )    
    ObjectHideSubObjectPermanently( self, "Uruk_Sword_01", true )
    ObjectHideSubObjectPermanently( self, "Uruk_Sword_02", true )
    ObjectHideSubObjectPermanently( self, "Uruk_Sword_03", true )
    ObjectHideSubObjectPermanently( self, "TrollTree", true )
    ObjectHideSubObjectPermanently( self, "TrollHammer", true )
    ObjectHideSubObjectPermanently( self, "CLUB_01", true )
    ObjectHideSubObjectPermanently( self, "CLUB_02", true )
    ObjectHideSubObjectPermanently( self, "CLUB_03", true )
    ObjectHideSubObjectPermanently( self, "HMR_01", true )
    ObjectHideSubObjectPermanently( self, "HMR_02", true )
    ObjectHideSubObjectPermanently( self, "HMR_03", true )
    ObjectHideSubObjectPermanently( self, "HMR_04", true )
    ObjectHideSubObjectPermanently( self, "AXE_01", true )
    ObjectHideSubObjectPermanently( self, "AXE_02", true )
    ObjectHideSubObjectPermanently( self, "AXE_03", true )
    ObjectHideSubObjectPermanently( self, "BARREL", true )
    ObjectHideSubObjectPermanently( self, "OBJECT02", true )    -- Barrel on the Orc Raider
    ObjectHideSubObjectPermanently( self, "ARROW", true )
    ObjectHideSubObjectPermanently( self, "PLANE02", true )    
end

function OnCreateAHeroFunctions(self)
    CreateAHeroHideEverything(self)
end

function OnEvilShipCreated(self)
    ObjectHideSubObjectPermanently( self, "CAULDRON", true )
    ObjectHideSubObjectPermanently( self, "CAULDRON_FIRE", true )
    ObjectHideSubObjectPermanently( self, "CAULDRON_TOP", true )
    ObjectHideSubObjectPermanently( self, "CROWSNEST", true )
    ObjectHideSubObjectPermanently( self, "FLAG", true )
    ObjectHideSubObjectPermanently( self, "BANNER", true )
end

function OnGoodShipCreated(self)
    ObjectHideSubObjectPermanently( self, "UG_FLAMING_01", true )
    ObjectHideSubObjectPermanently( self, "UG_FLAMING_02", true )
    ObjectHideSubObjectPermanently( self, "UG_FLAMING_FIRE", true )
    ObjectHideSubObjectPermanently( self, "UG_ARMOR", true )
    ObjectHideSubObjectPermanently( self, "BANNER", true )
end

function OnShipWrightCreated(self)
    ObjectHideSubObjectPermanently( self, "GoodPart_A", true )
    ObjectHideSubObjectPermanently( self, "GoodPart_B", true )
    ObjectHideSubObjectPermanently( self, "EvilPart_A", true )
    ObjectHideSubObjectPermanently( self, "EvilPart_B", true )
end

function OnDormitoryBuildVariation(self,variation)

    local var = tonumber(variation)

    if var == 1 then
        ObjectSetGeometryActive( self, "VersionOne", true )
        ObjectSetGeometryActive( self, "VersionTwo", false )
    elseif var == 2 then
        ObjectSetGeometryActive( self, "VersionOne", false )
        ObjectSetGeometryActive( self, "VersionTwo", true )
    end

end

function OnFortressCreated(self)
    ObjectHideSubObjectPermanently( self, "DBFBANNER", true )    
    ObjectSetGeometryActive( self, "HighTowerGeom", false )
end

function OnGateWatcherBuilt(self)
    ObjectDoSpecialPower(self, "SpecialAbilityGateWatchersFear")
end

function NeutralCreepNear(self,other)

    if ObjectHasUpgrade( other, "Upgrade_WildFaction" ) == 0 then
        ObjectChangeAllegianceFromNonPlayablePlayer( self, other )
    end
    
end

function NeutralGollum_RingStealerDamaged(self,other)
    if ObjectHasUpgrade( other, "Upgrade_RingHero" ) == 0 then
        ObjectChangeAllegianceFromNonPlayablePlayer( self, other )
    end
end

function NeutralGollum_RingStealerSlaughtered(self,other)
    ObjectRemoveUpgrade( other, "Upgrade_RingHero" )
end

function OnNecromancerStatueCreated(self)
    ObjectDoSpecialPower(self, "SpecialAbilityGateWatchersFear")
end    

function OnGasthausBilbo_RingSlaughtered(self,other)
    ObjectRemoveUpgrade( other, "Upgrade_RingHero" )
end

function OnMordorBlackUrukCreated(self)

    ObjectHideSubObjectPermanently( self, "SWORD01", true )
    ObjectHideSubObjectPermanently( self, "SWORD02", true )
    ObjectHideSubObjectPermanently( self, "SWORD03", true )
    ObjectHideSubObjectPermanently( self, "SWORD04", true )
    ObjectHideSubObjectPermanently( self, "SWORD05", true )
    ObjectHideSubObjectPermanently( self, "SWORD06", true )
    
    -- define the locals as random numbers
    local sword     =    GetRandomNumber()
    
    -- set the bow; note: we need one of them, so there's no "empty" possibility
    if sword <= 0.2 then
        ObjectHideSubObjectPermanently( self, "SWORD01", false )
    elseif sword <= 0.4 then
        ObjectHideSubObjectPermanently( self, "SWORD02", false )
    elseif sword <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SWORD03", false )
    elseif sword <= 0.6 then
        ObjectHideSubObjectPermanently( self, "SWORD04", false )
    elseif sword <= 0.8 then
        ObjectHideSubObjectPermanently( self, "SWORD05", false )
    else
        ObjectHideSubObjectPermanently( self, "SWORD06", false )
    end   
end

function GandalfConsiderUsingDefensePower(self, other, delay, amount)
    -- Put up the shield if a big attack is coming and we have time to block it
    if tonumber(delay) > 1 then
        if tonumber(amount) >= 300 then
            ObjectDoSpecialPower(self, "SpecialPowerShieldBubbleEdain")
            return
        end
    end
    
    -- Or, if we are being hit and there are alot of guys arround, do our cool pushback power
    if tonumber(ObjectCountNearbyEnemies(self, 50)) >= 4 then
        ObjectDoSpecialPower(self, "SpecialAbilityWizardBlast")
        return
    end
end

function SarumanConsiderUsingDefensePower(self, other, delay, amount)  
   -- Or, if we are being hit and there are alot of guys arround, do our cool pushback power
   if tonumber(ObjectCountNearbyEnemies(self, 50)) >= 4 then
       ObjectDoSpecialPower(self, "SpecialPowerTelekeneticPush")
       return
   end
end

function OnEntFirCreated(self)
    --ObjectShowSubObjectPermanently( self, "ROCK", true )
    ObjectGrantUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnFortressstolenUpgrade(self)
end

function OnFortressstolenUpgradeAftermath(self)
end

function OnKing(self)
    ObjectGrantUpgrade( self, "Upgrade_TestBuilding_2" )
end

function OnKingAftermath(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
end

function OnArveduiBuild(self)
    ObjectGrantUpgrade( self, "Upgrade_TestBuilding" )
end

function OnArveduiBuildAftermath(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding" )
end

function OnOlweUser8(self)
    ObjectGrantUpgrade( self, "Upgrade_TestBuilding_2" )
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding" )
end

function OffOlweUser8(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
end

function OnOlweUser6(self)
    ObjectGrantUpgrade( self, "Upgrade_TestBuilding" )
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
end

function OffOlweUser6(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding" )
end

function OnAlatarUser8(self)
    ObjectGrantUpgrade( self, "Upgrade_TestBuilding_2" )
end

function OffAlatarUser8(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
end

function OnAlatarUser6(self)
    ObjectGrantUpgrade( self, "Upgrade_TestBuilding" )
end

function OffAlatarUser6(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding" )
end

function OnEregionForge(self)
    ObjectGrantUpgrade( self, "Upgrade_TestBuilding_2" )
end

function OnEregionForgeAftermath(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
end

function OnHourSpell(self)
    ObjectGrantUpgrade( self, "Upgrade_MountAI" )
end

function OnHourSpellAftermath(self)
    ObjectRemoveUpgrade( self, "Upgrade_DisMountAI" )
end

function OnImladrisFortressDamaged(self)
    ObjectGrantUpgrade( self, "Upgrade_RaiseShield" )
end

function GimliConsiderUsingDefensePower(self, other, delay, amount)  
   -- Or, if we are being hit and there are alot of guys arround, do our cool pushback power
   if tonumber(ObjectCountNearbyEnemies(self, 50)) >= 4 then
       ObjectDoSpecialPower(self, "SpecialAbilityGimliLeap")
       return
   end
end

function ElrondConsiderUsingDefensePower(self, other, delay, amount)  
   -- Or, if we are being hit and there are alot of guys arround, do our cool pushback power
   if tonumber(ObjectCountNearbyEnemies(self, 50)) >= 4 then
       ObjectDoSpecialPower(self, "SpecialAbilityElrondEldar")
       return
   end
end

function OnHaradSuladanCreated(self)
end

function OnHaradSuladanDisguised(self)
end

function OnHaradSuladanDisguiseCanceled(self)
end

function OnHaradSuladanStealthed(self)
end

function OnHaradSuladanNotStealthed(self)
end

function OnIsengardBerserkerCreated(self)
    ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
end

function BecomeDamagedState(self)
    ObjectGrantUpgrade( self, "Upgrade_MountAI" )
end

function BecomeDamagedStateAfter(self)
    ObjectRemoveUpgrade( self, "Upgrade_MountAI" )
end

function OnSchmiedekunstZwillinge(self)
   ObjectGrantUpgrade( self, "Upgrade_RaiseSchmiedekunst" )
end

function OnSchmiedekunstZwillingeAftermath(self)
   -- ObjectGrantUpgrade( self, "Upgrade_RaiseSchmiedekunst" )
end

function OnMordorMorgulOrcsCreated(self)

    ObjectHideSubObjectPermanently( self, "weap01", true )
    ObjectHideSubObjectPermanently( self, "weap02", true )
    ObjectHideSubObjectPermanently( self, "weap03", true )
    ObjectHideSubObjectPermanently( self, "weap04", true )
    ObjectHideSubObjectPermanently( self, "weap05", true )
    ObjectHideSubObjectPermanently( self, "weap06", true )
    ObjectHideSubObjectPermanently( self, "weap07", true )
    
    ObjectHideSubObjectPermanently( self, "helmet01", true )
    ObjectHideSubObjectPermanently( self, "helmet02", true )
    ObjectHideSubObjectPermanently( self, "helmet03", true )
    ObjectHideSubObjectPermanently( self, "helmet04", true )
    
    ObjectHideSubObjectPermanently( self, "shield01", true )
    ObjectHideSubObjectPermanently( self, "shield02", true )
    ObjectHideSubObjectPermanently( self, "shield03", true )
    ObjectHideSubObjectPermanently( self, "shield04", true )
    ObjectHideSubObjectPermanently( self, "shield05", true )
    
    -- define the locals as random numbers
    local sword     =    GetRandomNumber()
    local helmet     =    GetRandomNumber()
    local shield     =    GetRandomNumber()
    
    -- set the bow; note: we need one of them, so there's no "empty" possibility
    if sword <= 0.2 then
        ObjectHideSubObjectPermanently( self, "weap01", false )
    elseif sword <= 0.4 then
        ObjectHideSubObjectPermanently( self, "weap02", false )
    elseif sword <= 0.5 then
        ObjectHideSubObjectPermanently( self, "weap03", false )
    elseif sword <= 0.6 then
        ObjectHideSubObjectPermanently( self, "weap04", false )
    elseif sword <= 0.8 then
        ObjectHideSubObjectPermanently( self, "weap05", false )
    elseif sword <= 0.8 then
        ObjectHideSubObjectPermanently( self, "weap06", false )
    else
        ObjectHideSubObjectPermanently( self, "weap07", false )
    end
    
        -- set the bow; note: we need one of them, so there's no "empty" possibility
    if helmet <= 0.25 then
        ObjectHideSubObjectPermanently( self, "helmet01", false )
    elseif helmet <= 0.5 then
        ObjectHideSubObjectPermanently( self, "helmet02", false )
    elseif helmet <= 0.75 then
        ObjectHideSubObjectPermanently( self, "helmet03", false )
    else
        ObjectHideSubObjectPermanently( self, "helmet04", false )
    end
    
        -- set the bow; note: we need one of them, so there's no "empty" possibility
    if shield <= 0.15 then
        ObjectHideSubObjectPermanently( self, "shield01", false )
    elseif shield <= 0.3 then
        ObjectHideSubObjectPermanently( self, "shield02", false )
    elseif shield <= 0.5 then
        ObjectHideSubObjectPermanently( self, "shield03", false )
    elseif shield <= 0.65 then
        ObjectHideSubObjectPermanently( self, "shield04", false )
    elseif shield <= 0.80 then
        ObjectHideSubObjectPermanently( self, "shield05", false )
    else
        ObjectHideSubObjectPermanently( self, "shield_NOWAY", false )
    end
    
end

function OnRohanEowynCreated(self)
    ObjectRemoveUpgrade( self, "Upgrade_EowynConditionDisguised" )
end

function OnRohanEowynDisguised(self)
    ObjectGrantUpgrade( self, "Upgrade_EowynConditionDisguised" )
end

function OnRohanEowynDisguiseCanceled(self)
    ObjectRemoveUpgrade( self, "Upgrade_EowynConditionDisguised" )
end

function OnRohanEowynStealthed(self)
    ObjectRemoveUpgrade( self, "Upgrade_EowynConditionNotStealthed" )
    ObjectGrantUpgrade( self, "Upgrade_EowynConditionStealthed" )
end

function OnRohanEowynNotStealthed(self)
    ObjectRemoveUpgrade( self, "Upgrade_EowynConditionStealthed" )
    ObjectGrantUpgrade( self, "Upgrade_EowynConditionNotStealthed" )
end

function OnRoyalGuardMounting(self)
    ObjectRemoveUpgrade( self, "Upgrade_RoyalguardDisMount" )
    ObjectGrantUpgrade( self, "Upgrade_RoyalguardMount" )
end

function OnRoyalGuardDismounting(self)
    ObjectRemoveUpgrade( self, "Upgrade_RoyalguardMount" )
    ObjectGrantUpgrade( self, "Upgrade_RoyalguardDisMount" )
end

function BecomeDismountedAI(self)
    ObjectRemoveUpgrade( self, "Upgrade_MountAI" )
    ObjectGrantUpgrade( self, "Upgrade_DisMountAI" )
end

function BecomeMountedAI(self)
    ObjectRemoveUpgrade( self, "Upgrade_DisMountAI" )
    ObjectGrantUpgrade( self, "Upgrade_MountAI" )
end

function OnStatArmorDamage(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
    ObjectRemoveUpgrade( self, "Upgrade_PlantShield" )
    ObjectRemoveUpgrade( self, "Upgrade_RaiseShield" )
    ObjectRemoveUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnStatKnockbackDamage(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding" )
    ObjectRemoveUpgrade( self, "Upgrade_PlantShield" )
    ObjectRemoveUpgrade( self, "Upgrade_RaiseShield" )
    ObjectRemoveUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnStatHealDamage(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding" )
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
    ObjectRemoveUpgrade( self, "Upgrade_RaiseShield" )
    ObjectRemoveUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function OnStatExperienceDamage(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding" )
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
    ObjectRemoveUpgrade( self, "Upgrade_PlantShield" )
    ObjectRemoveUpgrade( self, "Upgrade_SwitchToRockThrowing" )
end

function TheodredHideEverything(self)
    ObjectHideSubObjectPermanently( self, "SWORD02", true )
    ObjectHideSubObjectPermanently( self, "AXE", true )
    ObjectHideSubObjectPermanently( self, "SCHILD", true )  
end

function OnRetterinderNot(self)
   ObjectGrantUpgrade( self, "Upgrade_RaiseSchmiedekunst" )
end

function OffRetterinderNot(self)
   ObjectRemoveUpgrade( self, "Upgrade_RaiseSchmiedekunst" )
end

function AttackSpeedChange(self)
	ObjectDoSpecialPower( self, "SpecialAbilityWolfCult" )
end
function OnSnowStormCreated(self)
	ObjectDoSpecialPower( self, "SpecialAbilitySnowStormFX" )
end
function RemoveSarumanChosenSide(self)
    ObjectRemoveUpgrade( self, "Upgrade_SarumanFire" )
    ObjectRemoveUpgrade( self, "Upgrade_SarumanBlessed" )
end

function OnThranduilUser8(self)
    ObjectGrantUpgrade( self, "Upgrade_TestBuilding_2" )
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding" )
    ObjectRemoveUpgrade( self, "Upgrade_PlantShield" )
end

function OffThranduilUser8(self)
    ObjectGrantUpgrade( self, "Upgrade_PlantShield" )
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
end

function OnThranduilUser6(self)
    ObjectGrantUpgrade( self, "Upgrade_TestBuilding" )
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
    ObjectRemoveUpgrade( self, "Upgrade_PlantShield" )
end

function OffThranduilUser6(self)
    ObjectGrantUpgrade( self, "Upgrade_PlantShield" )
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding" )
end

function OnThranduilDefault(self)
    ObjectGrantUpgrade( self, "Upgrade_PlantShield" )
end

function OffImladrisLibrary(self)
    ObjectRemoveUpgrade( self, "Upgrade_BibliothekMilitärkunst" )
    ObjectRemoveUpgrade( self, "Upgrade_BibliothekMilitärkunstEntwickelt" )
    ObjectRemoveUpgrade( self, "Upgrade_BibliothekSchmiedekunst" )
    ObjectRemoveUpgrade( self, "Upgrade_BibliothekSchmiedekunstEntwickelt" )
end

function OnLorienWarriorCreated(self)
	ObjectHideSubObject( self, "ARROW", true )
	ObjectHideSubObject( self, "ARROWNOCK", true )
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "MALLORNBOW", true )
	
	ObjectHideSubObjectPermanently( self, "BODY1", true )
	ObjectHideSubObjectPermanently( self, "BODY2", true )
	ObjectHideSubObjectPermanently( self, "BODY3", true )
	ObjectHideSubObjectPermanently( self, "BODYHA", true )
	ObjectHideSubObjectPermanently( self, "LEGSHA", true )
	
	ObjectHideSubObjectPermanently( self, "SASHHA", true )
	ObjectHideSubObjectPermanently( self, "CHESTSHASHHA", true )
	
	ObjectHideSubObjectPermanently( self, "SASH", true )

    ObjectHideSubObjectPermanently( self, "HEAD1", true )
    ObjectHideSubObjectPermanently( self, "HEAD2", true )
    ObjectHideSubObjectPermanently( self, "HEAD3", true )

    local helmet         =    GetRandomNumber()
	
	local body         =    GetRandomNumber()
	
	local sash         =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "HEAD1", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "HEAD2", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD3", false )
    end  

	if body <= 0.333 then
        ObjectHideSubObjectPermanently( self, "BODY1", false )
    elseif body <= 0.666 then
        ObjectHideSubObjectPermanently( self, "BODY2", false )
     else
        ObjectHideSubObjectPermanently( self, "BODY3", false )
    end  

	if sash <= 0.5 then
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
     else
        ObjectHideSubObjectPermanently( self, "SASH", false )
    end	
end

function OnMordorPikemanCreated(self)
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    -- helmet types
    ObjectHideSubObjectPermanently( self, "HELM1", true )
    ObjectHideSubObjectPermanently( self, "HELM2", true )
    ObjectHideSubObjectPermanently( self, "HELM3", true )
    ObjectHideSubObjectPermanently( self, "HELM4", true )
    ObjectHideSubObjectPermanently( self, "HELM5", true )
    ObjectHideSubObjectPermanently( self, "HELM6", true )
    ObjectHideSubObjectPermanently( self, "HELM7", true )
    ObjectHideSubObjectPermanently( self, "HELM8", true )
    ObjectHideSubObjectPermanently( self, "HELM9", true )
    ObjectHideSubObjectPermanently( self, "HELM10", true )
    ObjectHideSubObjectPermanently( self, "HELM11", true )
    ObjectHideSubObjectPermanently( self, "HELM12", true )
    ObjectHideSubObjectPermanently( self, "HELM13", true )
    ObjectHideSubObjectPermanently( self, "HELM14", true )
    ObjectHideSubObjectPermanently( self, "HELM15", true )
    ObjectHideSubObjectPermanently( self, "HELM16", true )
    ObjectHideSubObjectPermanently( self, "HELM17", true )
    ObjectHideSubObjectPermanently( self, "HELM18", true )
    ObjectHideSubObjectPermanently( self, "HELM19", true )
    ObjectHideSubObjectPermanently( self, "HELM20", true )    
    ObjectHideSubObjectPermanently( self, "HELM21", true )
    ObjectHideSubObjectPermanently( self, "HELM22", true )
    ObjectHideSubObjectPermanently( self, "HELM23", true )
    ObjectHideSubObjectPermanently( self, "HELM24", true )    
    ObjectHideSubObjectPermanently( self, "HELM25", true )
    ObjectHideSubObjectPermanently( self, "HELM26", true )    
    -- weapon types
    ObjectHideSubObjectPermanently( self, "WEAP1", true )
    ObjectHideSubObjectPermanently( self, "WEAP2", true )
    ObjectHideSubObjectPermanently( self, "WEAP3", true )
    ObjectHideSubObjectPermanently( self, "WEAP4", true )
    ObjectHideSubObjectPermanently( self, "WEAP5", true )
    ObjectHideSubObjectPermanently( self, "WEAP6", true )
    -- shield types
    ObjectHideSubObjectPermanently( self, "SHIELD1", true )
    ObjectHideSubObjectPermanently( self, "SHIELD2", true )
    ObjectHideSubObjectPermanently( self, "SHIELD3", true )
    ObjectHideSubObjectPermanently( self, "SHIELD4", true )
    ObjectHideSubObjectPermanently( self, "SHIELD5", true )
    ObjectHideSubObjectPermanently( self, "SHIELD6", true )
    ObjectHideSubObjectPermanently( self, "SHIELD7", true )
    ObjectHideSubObjectPermanently( self, "SHIELD8", true )
    -- body types
    ObjectHideSubObjectPermanently( self, "ORC", true )
    ObjectHideSubObjectPermanently( self, "ORC1", true )
    ObjectHideSubObjectPermanently( self, "ORC2", true )
    ObjectHideSubObjectPermanently( self, "ORC3", true )
    -- spear types
    ObjectHideSubObjectPermanently( self, "SPR1", true )
    ObjectHideSubObjectPermanently( self, "SPR2", true )
    ObjectHideSubObjectPermanently( self, "SPR3", true )
    ObjectHideSubObjectPermanently( self, "SPR4", true )

    -- assign random gear
    local helm = GetRandomNumber()
    local weapon = GetRandomNumber()
    local shield = GetRandomNumber()    
    local body = GetRandomNumber()    
    local spear = GetRandomNumber()   
    
    -- assign random helm
    if helm <= 0.04 then
        ObjectHideSubObjectPermanently( self, "HELM1", false )
    elseif helm <= 0.08 then
        ObjectHideSubObjectPermanently( self, "HELM2", false )
    elseif helm <= 0.12 then
        ObjectHideSubObjectPermanently( self, "HELM3", false )
    elseif helm <= 0.16 then
        ObjectHideSubObjectPermanently( self, "HELM4", false )
    elseif helm <= 0.18 then
        ObjectHideSubObjectPermanently( self, "HELM5", false )    
    elseif helm <= 0.22 then
        ObjectHideSubObjectPermanently( self, "HELM6", false )    
    elseif helm <= 0.25 then
        ObjectHideSubObjectPermanently( self, "HELM7", false )
    elseif helm <= 0.29 then
        ObjectHideSubObjectPermanently( self, "HELM8", false )        
    elseif helm <= 0.30 then
        ObjectHideSubObjectPermanently( self, "HELM9", false )
    elseif helm <= 0.36 then
        ObjectHideSubObjectPermanently( self, "HELM10", false )
    elseif helm <= 0.39 then
        ObjectHideSubObjectPermanently( self, "HELM11", false )
    elseif helm <= 0.40 then
        ObjectHideSubObjectPermanently( self, "HELM12", false )
    elseif helm <= 0.45 then
        ObjectHideSubObjectPermanently( self, "HELM13", false )
    elseif helm <= 0.50 then
        ObjectHideSubObjectPermanently( self, "HELM14", false )
    elseif helm <= 0.55 then
        ObjectHideSubObjectPermanently( self, "HELM15", false )
    elseif helm <= 0.60 then
        ObjectHideSubObjectPermanently( self, "HELM16", false )
    elseif helm <= 0.65 then
        ObjectHideSubObjectPermanently( self, "HELM17", false )
    elseif helm <= 0.70 then
        ObjectHideSubObjectPermanently( self, "HELM18", false )
    elseif helm <= 0.72 then
        ObjectHideSubObjectPermanently( self, "HELM19", false )
    elseif helm <= 0.76 then
        ObjectHideSubObjectPermanently( self, "HELM20", false )
    elseif helm <= 0.80 then
        ObjectHideSubObjectPermanently( self, "HELM21", false )
    elseif helm <= 0.85 then
        ObjectHideSubObjectPermanently( self, "HELM22", false )
    elseif helm <= 0.90 then
        ObjectHideSubObjectPermanently( self, "HELM23", false )
    elseif helm <= 0.92 then
        ObjectHideSubObjectPermanently( self, "HELM24", false )
    elseif helm <= 0.96 then
        ObjectHideSubObjectPermanently( self, "HELM25", false )
    else
        ObjectHideSubObjectPermanently( self, "HELM26", false )
    end
    
    -- assign random weapon
    if weapon <= 0.17 then
        ObjectHideSubObjectPermanently( self, "WEAP1", false )
    elseif weapon <= 0.34 then
        ObjectHideSubObjectPermanently( self, "WEAP2", false )
    elseif weapon <= 0.51 then
        ObjectHideSubObjectPermanently( self, "WEAP3", false )
    elseif weapon <= 0.68 then
        ObjectHideSubObjectPermanently( self, "WEAP4", false )
    elseif weapon <= 0.85 then
        ObjectHideSubObjectPermanently( self, "WEAP5", false )
    else
        ObjectHideSubObjectPermanently( self, "WEAP6", false )
    end
    --assign random shield
    if shield <= 0.13 then
        ObjectHideSubObjectPermanently( self, "SHIELD1", false )
    elseif shield <= 0.25 then
        ObjectHideSubObjectPermanently( self, "SHIELD2", false )
    elseif shield <= 0.38 then
        ObjectHideSubObjectPermanently( self, "SHIELD3", false )
    elseif shield <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SHIELD4", false )
    elseif shield <= 0.63 then
        ObjectHideSubObjectPermanently( self, "SHIELD5", false )
    elseif shield <= 0.75 then
        ObjectHideSubObjectPermanently( self, "SHIELD6", false )
    elseif shield <= 0.88 then
        ObjectHideSubObjectPermanently( self, "SHIELD7", false )
    else
        ObjectHideSubObjectPermanently( self, "SHIELD8", false )
    end

    -- assign random body
    if body <= 0.25 then
        ObjectHideSubObjectPermanently( self, "ORC", false )
    elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "ORC1", false )
    elseif body <= 0.75 then
        ObjectHideSubObjectPermanently( self, "ORC2", false )
    else
        ObjectHideSubObjectPermanently( self, "ORC3", false )
    end

    -- assign random spear
    if spear <= 0.25 then
        ObjectHideSubObjectPermanently( self, "SPR1", false )
    elseif spear <= 0.50 then
        ObjectHideSubObjectPermanently( self, "SPR2", false )
    elseif spear <= 0.75 then
        ObjectHideSubObjectPermanently( self, "SPR3", false )
    else
        ObjectHideSubObjectPermanently( self, "SPR4", false )
    end
end

function OnBardSmallLeadership(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
end

function OnBardLargeLeadership(self)
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding" )
end

function OnDwarvenBattleWagonMovieCreated(self)
	ObjectHideSubObjectPermanently( self, "dwarfHearth", true )
	ObjectHideSubObjectPermanently( self, "dwarfHearthFire", true )
	ObjectHideSubObjectPermanently( self, "Banner_L", true )
	ObjectHideSubObjectPermanently( self, "Glow", true )	
	ObjectHideSubObjectPermanently( self, "BLADES_L", true )
	ObjectHideSubObjectPermanently( self, "BLADES_R", true )
	ObjectHideSubObjectPermanently( self, "FLAGS", true )	
    ObjectHideSubObjectPermanently( self, "A_RAMHORN1", true )
    ObjectHideSubObjectPermanently( self, "A_RAMHORN2", true )
    ObjectHideSubObjectPermanently( self, "A_RAM", true )
    ObjectHideSubObjectPermanently( self, "A_RAM2", true )
    ObjectHideSubObjectPermanently( self, "A_RAM3", true )
    ObjectHideSubObjectPermanently( self, "A_A_RAMHORN1", true )
    ObjectHideSubObjectPermanently( self, "A_A_RAMHORN2", true )
    ObjectHideSubObjectPermanently( self, "A_A_RAM", true )
    ObjectHideSubObjectPermanently( self, "A_A_RAM2", true )
    ObjectHideSubObjectPermanently( self, "A_A_RAM3", true )
    ObjectHideSubObjectPermanently( self, "F_A_RAMHORN1", true )
    ObjectHideSubObjectPermanently( self, "F_A_RAMHORN2", true )
    ObjectHideSubObjectPermanently( self, "F_A_RAM", true )
    ObjectHideSubObjectPermanently( self, "F_A_RAM2", true )
    ObjectHideSubObjectPermanently( self, "F_A_RAM3", true )
    ObjectHideSubObjectPermanently( self, "C_A_RAMHORN1", true )
    ObjectHideSubObjectPermanently( self, "C_A_RAMHORN2", true )
    ObjectHideSubObjectPermanently( self, "C_A_RAM", true )
    ObjectHideSubObjectPermanently( self, "C_A_RAM2", true )
    ObjectHideSubObjectPermanently( self, "C_A_RAM3", true )
    local helmet         =    GetRandomNumber()
    local armor          =    GetRandomNumber()
    local helmet1         =    GetRandomNumber()
    local armor1          =    GetRandomNumber()
    local helmet2        =    GetRandomNumber()
    local armor2          =    GetRandomNumber()
    local helmet3         =    GetRandomNumber()
    local armor3          =    GetRandomNumber()
    if helmet <= 0.3 then
        ObjectHideSubObjectPermanently( self, "A_RAM", false )
    elseif helmet <= 0.6 then
        ObjectHideSubObjectPermanently( self, "A_RAM2", false )
     else
        ObjectHideSubObjectPermanently( self, "A_RAM3", false )
    end
    if armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "A_RAMHORN1", false )
     else
        ObjectHideSubObjectPermanently( self, "A_RAMHORN2", false )
    end	
    if helmet1 <= 0.3 then
        ObjectHideSubObjectPermanently( self, "A_A_RAM", false )
    elseif helmet1 <= 0.6 then
        ObjectHideSubObjectPermanently( self, "A_A_RAM2", false )
     else
        ObjectHideSubObjectPermanently( self, "A_A_RAM3", false )
    end
    if armor1 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "A_A_RAMHORN1", false )
     else
        ObjectHideSubObjectPermanently( self, "A_A_RAMHORN2", false )
    end	
    if helmet2 <= 0.3 then
        ObjectHideSubObjectPermanently( self, "C_A_RAM", false )
    elseif helmet2 <= 0.6 then
        ObjectHideSubObjectPermanently( self, "C_A_RAM2", false )
     else
        ObjectHideSubObjectPermanently( self, "C_A_RAM3", false )
    end	
    if armor2 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "C_A_RAMHORN1", false )
     else
        ObjectHideSubObjectPermanently( self, "C_A_RAMHORN2", false )
    end	
    if helmet3 <= 0.3 then
        ObjectHideSubObjectPermanently( self, "F_A_RAM", false )
    elseif helmet3 <= 0.6 then
        ObjectHideSubObjectPermanently( self, "F_A_RAM2", false )
     else
        ObjectHideSubObjectPermanently( self, "F_A_RAM3", false )
    end	
    if armor3 <= 0.5 then
        ObjectHideSubObjectPermanently( self, "F_A_RAMHORN1", false )
     else
        ObjectHideSubObjectPermanently( self, "F_A_RAMHORN2", false )
    end 
end

function OnIsengardWildmanSpearCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "Torch", true )
	ObjectHideSubObjectPermanently( self, "FireArowTip", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN1", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN2", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN3", true )
	ObjectHideSubObjectPermanently( self, "WILDMAN4", true )

	ObjectHideSubObjectPermanently( self, "SCYTHE", true )
	ObjectHideSubObjectPermanently( self, "SPEAR", true )
	ObjectHideSubObjectPermanently( self, "PITCHFORK", true )

    local body         =    GetRandomNumber()
    local weaponleft         =    GetRandomNumber()

    if body <= 0.25 then
        ObjectHideSubObjectPermanently( self, "WILDMAN1", false )
    elseif body <= 0.50 then
        ObjectHideSubObjectPermanently( self, "WILDMAN2", false )
    elseif body <= 0.75 then
        ObjectHideSubObjectPermanently( self, "WILDMAN3", false )
     else
        ObjectHideSubObjectPermanently( self, "WILDMAN4", false )
    end   

    if weaponleft <= 0.30 then
        ObjectHideSubObjectPermanently( self, "SCYTHE", false )
    elseif weaponleft <= 0.60 then
        ObjectHideSubObjectPermanently( self, "SPEAR", false )
     else
        ObjectHideSubObjectPermanently( self, "PITCHFORK", false )
    end  
end

function RemoveGaladrielChosenSide(self)
    ObjectRemoveUpgrade( self, "Upgrade_GaladrielRingannehmen" )
    ObjectRemoveUpgrade( self, "Upgrade_GaladrielRingablehnen" )
end

function OnGundabadArcherCreated(self)
	ObjectHideSubObjectPermanently( self, "Forged_Blade", true )
	ObjectHideSubObjectPermanently( self, "FIREAROWTIP", true )
	ObjectHideSubObjectPermanently( self, "SHIELD", true )
	ObjectHideSubObjectPermanently( self, "HELMET", true )
	ObjectHideSubObjectPermanently( self, "GOBLINHA", true )
	ObjectHideSubObjectPermanently( self, "ARMOR", true )
end

function OnDolGuldurOrcCreated(self)

    ObjectHideSubObjectPermanently( self, "s1", true )
    ObjectHideSubObjectPermanently( self, "s2", true )
    ObjectHideSubObjectPermanently( self, "s3", true )

    ObjectHideSubObjectPermanently( self, "h1", true )
    ObjectHideSubObjectPermanently( self, "h2", true )
    ObjectHideSubObjectPermanently( self, "h3", true )
    ObjectHideSubObjectPermanently( self, "h4", true )
    ObjectHideSubObjectPermanently( self, "h5", true )

    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADES", true )
    ObjectHideSubObjectPermanently( self, "FireArowTip", true )

    local helmet         =    GetRandomNumber()
    local armor          =    GetRandomNumber()

    if helmet <= 0.333 then
        ObjectHideSubObjectPermanently( self, "s1", false )
    elseif helmet <= 0.666 then
        ObjectHideSubObjectPermanently( self, "s2", false )
     else
        ObjectHideSubObjectPermanently( self, "s3", false )
    end   

    if armor <= 0.200 then
        ObjectHideSubObjectPermanently( self, "h1", false )
    elseif armor <= 0.400 then
        ObjectHideSubObjectPermanently( self, "h2", false )
    elseif armor <= 0.600 then
        ObjectHideSubObjectPermanently( self, "h3", false )
    elseif armor <= 0.800 then
        ObjectHideSubObjectPermanently( self, "h4", false )
    else
        ObjectHideSubObjectPermanently( self, "h5", false )
    end
end

function OnKhazadGuardCreated(self)
    ObjectHideSubObjectPermanently( self, "HEAD1", true )
    ObjectHideSubObjectPermanently( self, "HEAD2", true )
    ObjectHideSubObjectPermanently( self, "HEAD3", true )

    local head          =    GetRandomNumber()

     if head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD1", false )
    elseif head <= 0.6 then
        ObjectHideSubObjectPermanently( self, "HEAD2", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD3", false )
    end    
end

function OnMordorFighterCreated(self)
	ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
	ObjectHideSubObjectPermanently( self, "FORGED_BLADES", true )
end

function OnRingUpgrade(self)
    ObjectGrantUpgrade( self, "Upgrade_RingHero" )
    ObjectGrantUpgrade( self, "Upgrade_FortressRingHero" )
end

function OffRingUpgrade(self)
    ObjectRemoveUpgrade( self, "Upgrade_RingHero" )
    ObjectRemoveUpgrade( self, "Upgrade_FortressRingHero" )
end

function OnBodyGuardOrcCreated(self)
    ObjectHideSubObjectPermanently( self, "HEADS01", true )
    ObjectHideSubObjectPermanently( self, "HEADS02", true )

    ObjectHideSubObjectPermanently( self, "SHDLR1", true )
    ObjectHideSubObjectPermanently( self, "SHDLR2", true )
    ObjectHideSubObjectPermanently( self, "SHDLR3", true )
    ObjectHideSubObjectPermanently( self, "AXEA", true )
    ObjectHideSubObjectPermanently( self, "SWORDB", true )
    ObjectHideSubObjectPermanently( self, "SWORDA", true )

    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADES", true )
    ObjectHideSubObjectPermanently( self, "FireArowTip", true )

    local heads          =    GetRandomNumber()
    local armor          =    GetRandomNumber()
    local weapon          =    GetRandomNumber()

    if heads <= 0.500 then
        ObjectHideSubObjectPermanently( self, "HEADS01", false )
     else
        ObjectHideSubObjectPermanently( self, "HEADS02", false )
    end  

    if armor <= 0.2 then
        ObjectHideSubObjectPermanently( self, "SHDLR1", false )
    elseif armor <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SHDLR2", false )
	elseif armor <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHDLR3", false )
    else
        ObjectHideSubObjectPermanently( self, "NOTHING", false )
    end

    if weapon <= 0.3 then
        ObjectHideSubObjectPermanently( self, "SWORDA", false )
    elseif weapon <= 0.6 then
        ObjectHideSubObjectPermanently( self, "SWORDB", false )
    else
        ObjectHideSubObjectPermanently( self, "AXEA", false )
    end
end

function OnNewMorgulGusmuraOrcCreated(self)
    ObjectHideSubObjectPermanently( self, "HEAD06", true )
    ObjectHideSubObjectPermanently( self, "HEAD05", true )
    ObjectHideSubObjectPermanently( self, "HEAD04", true )
    ObjectHideSubObjectPermanently( self, "HEAD03", true )
    ObjectHideSubObjectPermanently( self, "HEAD02", true )
    ObjectHideSubObjectPermanently( self, "HEAD01", true )
    ObjectHideSubObjectPermanently( self, "FORGED_BLADE", true )
    ObjectHideSubObjectPermanently( self, "SHIELD1", true )
    ObjectHideSubObjectPermanently( self, "SHIELD2", true )
    ObjectHideSubObjectPermanently( self, "SHIELD3", true )
    ObjectHideSubObjectPermanently( self, "SHOULDER", true )
    ObjectHideSubObjectPermanently( self, "LEGGUARD", true )

    local head          =    GetRandomNumber()
    local shield          =    GetRandomNumber()


    if shield <= 0.2 then
        ObjectHideSubObjectPermanently( self, "SHIELD2", false )
    elseif shield <= 0.5 then
        ObjectHideSubObjectPermanently( self, "SHIELD3", false )
     else
        ObjectHideSubObjectPermanently( self, "SHIELD1", false )
    end  

    if head <= 0.1 then
        ObjectHideSubObjectPermanently( self, "HEAD06", false )
    elseif head <= 0.3 then
        ObjectHideSubObjectPermanently( self, "HEAD05", false )
    elseif head <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HEAD04", false )
    elseif head <= 0.7 then
        ObjectHideSubObjectPermanently( self, "HEAD03", false )
    elseif head <= 0.9 then
        ObjectHideSubObjectPermanently( self, "HEAD01", false )
     else
        ObjectHideSubObjectPermanently( self, "HEAD02", false )
    end   
end

function OnCirithUngolUrukArcherCreated(self)
	-- ObjectHideSubObjectPermanently( self, "arrow", true )    -- This gets hidden pending the art being fixed.  it is the pre-new-archer-firing-pattern arrow
	ObjectHideSubObjectPermanently( self, "FireArowTip", true ) -- This gets hidden because the Fire Arrow upgrade turns it on.
    ObjectHideSubObjectPermanently( self, "HELM", true )
    ObjectHideSubObjectPermanently( self, "HLMT01", true )
	
	local Helmet        =    GetRandomNumber()

    if Helmet <= 0.5 then
        ObjectHideSubObjectPermanently( self, "HELM", false )
     else
        ObjectHideSubObjectPermanently( self, "HLMT01", false )
    end   
end

function OnCirithUngolUrukFighterCreated(self)
	--Hidden but unhidden randomly!
	ObjectHideSubObjectPermanently( self, "HELM", true )

	local helm = GetRandomNumber()

	if helm <= 0.50 then
		ObjectHideSubObjectPermanently( self, "HELM", false )
	else
		ObjectHideSubObjectPermanently( self, "HELM", true )
	end
end

function OnFortressDie(self)
    ObjectGrantUpgrade( self, "Upgrade_TestBuilding" )
end

function OnDurinSummon(self)
    ObjectGrantUpgrade( self, "Upgrade_HasDurin" )
    ObjectRemoveUpgrade( self, "Upgrade_TestBuilding_2" )
end

function OnDurinSummonAftermath(self)
    ObjectGrantUpgrade( self, "Upgrade_TestBuilding_2" )
    ObjectRemoveUpgrade( self, "Upgrade_HasDurin" )
end

function OnSecondDurinDisable(self)
    ObjectGrantUpgrade( self, "Upgrade_PlantShield" )
end