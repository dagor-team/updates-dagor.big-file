	Behavior = OCLSpecialPower ModuleTag_SummonThargelionArmy
		SpecialPowerTemplate    = SpellBookThargelionArmy
		OCL                     = OCL_ThargelionArmyEgg
                TriggerFX		= FX_ThargelionFogSummon
		CreateLocation          = CREATE_AT_LOCATION
		AvailableAtStart	= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_SummonMordorEvilMenArmy
		SpecialPowerTemplate    = SpellBookMordorEvilMenArmy
		OCL                     = OCL_MordorEvilMenArmyEgg
                TriggerFX		= FX_MordorEvilMenArmyFogSummon
		CreateLocation          = CREATE_AT_LOCATION
		AvailableAtStart	= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = SpecialPowerModule        SpellBookWarChant_ModuleTagIsengard
        SpecialPowerTemplate        = SpellBookWarChantIsengard
        AttributeModifier            = SpellBookWarChant
        AttributeModifierRange        = 100
        AttributeModifierAffects    = GENERIC_BUFF_RECIPIENT_OBJECT_FILTER
        TriggerFX                    = FX_SpellWarChantI
        UpdateModuleStartsAttack    = No
        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SummonBalrogWild
        SpecialPowerTemplate = SpellBookBalrogAllyWild
        OCL                  = OCL_BalrogSummoning
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = OCLSpecialPower ModuleTag_AzogArmyWild
		SpecialPowerTemplate    = SpellBookSAzogArmyWild
		OCL                     = OCL_AzogArmyWildSummonEgg
                TriggerFX		= FX_FogSummon
		CreateLocation          = CREATE_AT_LOCATION
		AvailableAtStart	= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior   = DarknessSpecialPower ModuleTag_DarknessWild
        SpecialPowerTemplate            = SpellBookDarknessWild
        AttributeModifier                = SpellBookDarkness
        AttributeModifierAffects        = ANY +INFANTRY +CAVALRY +MONSTER -HERO -HORDE -DOZER ALLIES
        AttributeModifierWeatherBased    = Yes
        WeatherDuration                    = SPELL_DARKNESS_DURATION
        ChangeWeather                    = CLOUDY
        AvailableAtStart                = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = SpecialPowerModule        SpellBookWarChant_ModuleTagWild
        SpecialPowerTemplate         = SpellBookWarChantWild
        AttributeModifier            = SpellOrcHornMordor
        AttributeModifierRange       = 100
        AttributeModifierAffects     = GENERIC_BUFF_RECIPIENT_OBJECT_FILTER
        TriggerFX                    = FX_SpellOrcHornMordor
        UpdateModuleStartsAttack     = No
        AvailableAtStart             = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic  = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookHerrderErde
		SpecialPowerTemplate	     = SpellBookHerrderErde
		UpgradeName 		     = Upgrade_HerrderErde
		UpdateModuleStartsAttack     = No
		AffectAllies		     = No
		AvailableAtStart	     = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic  = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = SpecialPowerModule   SpellBookKriegshornAngmars_ModuleTag
        SpecialPowerTemplate        = SpellBookKriegshornAngmars
        AttributeModifier           = SpellBookWarChant
        AttributeModifierRange      = 100
        AttributeModifierAffects    = GENERIC_BUFF_RECIPIENT_OBJECT_FILTER
        TriggerFX                   = FX_SpellAngmarHorn
        UpdateModuleStartsAttack    = No
        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior   =  PlayerUpgradeSpecialPower ModuleTag_AngmarHeiligtum
        SpecialPowerTemplate    = SpellBookAngmarHeiligtum
	UpgradeName 			= Upgrade_AngmarFortressSanctum
	UpdateModuleStartsAttack	= No
	AffectAllies			= No
	AvailableAtStart		= No
	RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SpawnSeuche
        SpecialPowerTemplate = SpellBookSpawnSeuche
        OCL                  = OCL_SpellBookSpawnSeuche
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic  = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = CloudBreakSpecialPower    ModuleTag_SnowRain
        SpecialPowerTemplate            = SpellBookSnowRain
        SunbeamObject                   = SnowRainObject
        AttributeModifier                = SnowRainModifier
        ObjectSpacing                   = 300
        AttributeModifierAffects        = ANY +INFANTRY +CAVALRY +MONSTER -HERO ENEMIES
        AttributeModifierWeatherBased    = Yes
        WeatherDuration                    = SPELL_FREEZINGRAIN_DURATION
        ChangeWeather                    = CLOUDYRAINY
        AvailableAtStart                = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior   = OCLSpecialPower ModuleTag_HammerderUnterwelt
        SpecialPowerTemplate    = SpellBookHammerderUnterwelt
        OCL                     = OCL_SpellBookHammerderUnterwelt
        CreateLocation          = CREATE_AT_LOCATION
        AvailableAtStart        = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SummonMorannonOrks
        SpecialPowerTemplate = SpellBookMorannonOrks
        OCL                  = OCL_SpawnMorannnonOrksEgg
        TriggerFX	     = FX_SummonShagratUruks
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_EndloseHorden
        SpecialPowerTemplate = SpellBookEndloseHorden
        OCL                  = OCL_EndloseHordenPing
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = SpecialPowerModule	SpellBookDraft_TrommelninderTiefe
		SpecialPowerTemplate		= SpellBookTrommelninderTiefe
		AttributeModifier		= SpellBookTrommelnModifier
		AttributeModifierRange		= 9999999
		AttributeModifierAffects	= ANY +ORC +BANNER +WildMarauderSwordBanner +WildBannerGoblin +GoblinRider +WildGoblinRiderBanner +WildFortress
		AffectAllies			= Yes
		UpdateModuleStartsAttack	= No
		TriggerFX					= FX_TrommelninderTiefeSound
		AttributeModifierFX		= FX_SpellDrumsInTheDeep
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_MinasMorgulBombard
        SpecialPowerTemplate = SpellBookMinasMorgulBombard
        OCL                  = OCL_SpellBookMinasMorgulBombardSeed
        CreateLocation       = USE_SECONDARY_OBJECT_LOCATION
        NearestSecondaryObjectFilter = NONE SAME_PLAYER +CASTLE_KEEP
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SummonFellbestien
        SpecialPowerTemplate = SpellBookFellbestienAlly
        OCL                  = OCL_SpellbookFellbestien
        CreateLocation       = CREATE_ABOVE_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SummonWargBow
        SpecialPowerTemplate = SpellBookWargBow
        OCL                  = OCL_SpawnIsengardWargBowHordeEgg
        TriggerFX	     = FX_SummonShagratUruks
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_Feuerbrunst
        SpecialPowerTemplate = SpellBookFeuerbrunst
        OCL                  = OCL_SpellBookFeuerbrunst
        TriggerFX            = FX_DevastatingFlames
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_ZorndesMorgulfursten
        SpecialPowerTemplate = SpellBookZorndesMorgulfursten
        OCL                  = OCL_SpellBookZorndesMorgulfursten
        TriggerFX            = FX_ZorndesMorgulfursten
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_Verderbnis
        SpecialPowerTemplate = SpellBookVerderbnis
        OCL                  = OCL_SpellBookVerderbnis
        TriggerFX            = FX_SBVerderbnis
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_Morgullicht
        SpecialPowerTemplate = SpellBookMorgullicht
        OCL                  = OCL_SpellBookMorgullicht
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_DolGuldurVerderbnis
        SpecialPowerTemplate = SpellBookDolGuldurVerderbnis
        OCL                  = OCL_SpellBookDolGuldurVerderbnis
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

     Behavior   = TaintSpecialPower ModuleTag_TaintGundabad
        SpecialPowerTemplate       = SpellBookTaintGundabad
        TaintObject                = TaintLand
        TaintRadius                = SPELLBOOK_TAINT_RADIUS
        TaintFX                    = FX_TaintSpellFX
        TaintOCL                   = OCL_TaintSeed
        AvailableAtStart           = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic  = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_CreepStructure
        SpecialPowerTemplate = SpellBookCreepStructure
        OCL                  = OCL_SpellBookCreepStructure
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_ArrowVolleyEvilMod
        SpecialPowerTemplate = SpellBookArrowVolleyEvilMod
        OCL                  = OCL_SpellBookArrowVolley
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior   = TaintSpecialPower ModuleTag_IsengardTaintMod
        SpecialPowerTemplate      = SpellBookIsengardTaintMod
        TaintObject               = TaintLand
        TaintRadius               = SPELLBOOK_TAINT_RADIUS
        TaintFX                   = FX_TaintSpellFX
        TaintOCL                  = OCL_TaintSeed
        AvailableAtStart          = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic  = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookSarumanVielfarbig
		SpecialPowerTemplate		= SpellBookSarumanVielfarbig
		UpgradeName 			= Upgrade_SarumanVielfarbig
		UpdateModuleStartsAttack	= No
		AffectAllies			= No
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookMyHour
		SpecialPowerTemplate		= SpellBookMyHour
		UpgradeName 			= Upgrade_MyHour
		UpdateModuleStartsAttack	= No
		AffectAllies			= No
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = PlayerUpgradeSpecialPower    SpellBookMachtvergangenerZeitalter_ModuleTag
	SpecialPowerTemplate		= SpellBookMachtvergangenerZeitalter
	UpgradeName 			= Upgrade_MachtvergangenerZeitalter
	UpdateModuleStartsAttack	= No
	AffectAllies			= No
	AvailableAtStart		= No
	RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = ProductionSpeedBonus ModuleTag_CalltheHordeMod
        SpecialPowerTemplate    = SpellBookCalltheHordeMod
        NumberOfFrames          = 180
        SpeedMulitplier         = 20.0
        Type                    = MordorFighterHorde MordorArcherHorde MordorPikemanHorde MordorAufseherHorde MordorMorgulOrkHorde DolguldurArcherHorde MordorCirithOrkHorde
        AvailableAtStart        = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_IsengardMinenRegen
        SpecialPowerTemplate = SpellBookIsengardMinenRegen
        OCL                  = OCL_SpellBookIsengardMinen
        TriggerFX            = FX_FeuerIsengartsCountdown
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SummonBundnissderzweiTurme
        SpecialPowerTemplate  = SpellBookBundnissderzweiTurme
        OCL                   = OCL_SpellBookBundnissderzweiTurme
        TriggerFX             = FX_BundnissderzweiTurme
        CreateLocation        = CREATE_AT_LOCATION
        AvailableAtStart      = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = UntamedAllegianceSpecialPower ModuleTag_PaktdesHasses
        SpecialPowerTemplate        = SpellBookPaktdesHasses
        TargetEnemy                 = Yes
        AttributeModifierAffects    = CREEP_OBJECTFILTER
        AttributeModifierRange      = 60
        TriggerFX                   = FX_SarumanDominateTrigger
	AvailableAtStart	    = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_AngmarWargLair
        SpecialPowerTemplate = SpellBookAngmarWargLair
        OCL                  = OCL_SummonAngmarWargLair
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_AngmarKaltdrachenAlly
        SpecialPowerTemplate = SpellBookSpawnAngmarKaltdrachen
        OCL                  = OCL_SpellbookSpawnAngmarKaltdrachen
        CreateLocation       = CREATE_ABOVE_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_Sunflare
        SpecialPowerTemplate             = SpellBookSunflare
        OCL                              = OCL_SpecialPowerSunflare
        CreateLocation                   = CREATE_AT_LOCATION
        AvailableAtStart                 = No
        AttributeModifierAffects        = ANY +INFANTRY +CAVALRY +MONSTER -HERO ENEMIES
        ReEnableAntiCategory            = Yes
        AttributeModifierWeatherBased    = Yes
        WeatherDuration                    = SPELL_SUNFLARE_DURATION
        ChangeWeather                    = SUNNY
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_Pyramid
        SpecialPowerTemplate = SpellBookPyramid
        OCL                  = OCL_SpellBookPyramid
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
	
	Behavior = OCLSpecialPower    ModuleTag_SandStorm
        SpecialPowerTemplate    = SpellBookSandStorm
        OCL                        = SUPERWEAPON_SpawnSandStorm
        CreateLocation            = CREATE_AT_LOCATION
        AvailableAtStart        = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
	
	Behavior = OCLSpecialPower ModuleTag_HaradMarket
        SpecialPowerTemplate = SpellBookHaradMarket
        OCL                  = OCL_SpellBookHaradMarket
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
	
	Behavior = OCLSpecialPower ModuleTag_OCLWainRiders
        SpecialPowerTemplate = SpellBookWainRidersSummon
        OCL                  = OCL_SpellBookWainRiders
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
	
	Behavior = OCLSpecialPower ModuleTag_OCLAidOfMordor
        SpecialPowerTemplate = SpellBookAidOfMordor
        OCL                  = OCL_SpellBookAidOfMordor
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
	
	Behavior = SpecialPowerModule ModuleTag_Fortify
		SpecialPowerTemplate		= SpellBookFortify
		AttributeModifier		= SpellBookFortifyBonus
		AttributeModifierRange		= 12
		AttributeModifierAffects	= ANY ALLIES +STRUCTURE
		UpdateModuleStartsAttack	= No
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
	
	Behavior = SpecialPowerModule ModuleTag_HaradHorn
        SpecialPowerTemplate        = SpellBookHaradHorn
        AttributeModifier            = SpellBookRallyingCallModifier
        AttributeModifierRange        = 100
        AttributeModifierAffects    = ANY +HORDE +INFANTRY +CAVALRY -HERO -DOZER
        TriggerFX                    = FX_SpellNoldorHorn
        UpdateModuleStartsAttack    = No
        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
	
	Behavior   = OCLSpecialPower ModuleTag_DesertCracks
        SpecialPowerTemplate    	= SpellBookDesertCracks
        TriggerFX                   = FX_FrozenLandFX
        OCL                         = OCL_SpecialPowerFrozenLand
        CreateLocation              = CREATE_AT_LOCATION
        UpdateModuleStartsAttack    = No
        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
	
	Behavior   = OCLSpecialPower ModuleTag_SuladansChosen
        SpecialPowerTemplate    = SpellBookSuladansChosen
        OCL                     = OCL_SpellBookSuladansChosen
        CreateLocation          = CREATE_AT_LOCATION
        AvailableAtStart        = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
	
	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookSecondFaction
		SpecialPowerTemplate		= SpellBookSecondFaction
		UpgradeName 			    = Upgrade_LehenAllies
		UpdateModuleStartsAttack	= No
		AffectAllies					= No
		AvailableAtStart				= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic   = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
	
	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookThargelionTechnology
		SpecialPowerTemplate		= SpellBookThargelionTechnology
		UpgradeName 			    = Upgrade_GlobalFirstAgeSpell
		UpdateModuleStartsAttack	= No
		AffectAllies					= No
		AvailableAtStart				= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic   = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End







    Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookAngbandTechnology
	SpecialPowerTemplate			= SpellBookAngbandTechnology
	UpgradeName 				= Upgrade_GlobalFirstAgeSpell
	UpdateModuleStartsAttack		= No
	AffectAllies				= No
	AvailableAtStart			= No
	RequirementsFilterMPSkirmish 		= SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic   		= SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End





    Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookThangorodrimTechnology
	SpecialPowerTemplate			= SpellBookThangorodrimTechnology
	UpgradeName 				= Upgrade_GlobalFirstAgeSpell
	UpdateModuleStartsAttack		= No
	AffectAllies				= No
	AvailableAtStart			= No
	RequirementsFilterMPSkirmish 		= SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic   		= SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End





    Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookTolinGaurhothTechnology
	SpecialPowerTemplate			= SpellBookTolinGaurhothTechnology
	UpgradeName 				= Upgrade_GlobalFirstAgeSpell
	UpdateModuleStartsAttack		= No
	AffectAllies				= No
	AvailableAtStart			= No
	RequirementsFilterMPSkirmish 		= SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic   		= SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End





    Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookUnderworldTechnology
	SpecialPowerTemplate			= SpellBookUnderworldTechnology
	UpgradeName 				= Upgrade_GlobalFirstAgeSpell
	UpdateModuleStartsAttack		= No
	AffectAllies				= No
	AvailableAtStart			= No
	RequirementsFilterMPSkirmish 		= SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic   		= SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End


    Behavior = SpecialPowerModule ModuleTag_SpellBookGeneralView
        SpecialPowerTemplate            = SpellBookGeneralView
        AvailableAtStart                = No
    End

    Behavior = SpecialPowerModule ModuleTag_SpellBookCommanderView
        SpecialPowerTemplate            = SpellBookCommanderView
        AvailableAtStart                = No
    End

    Behavior = SpecialPowerModule ModuleTag_SpellBookUnitView
        SpecialPowerTemplate            = SpellBookUnitView
        AvailableAtStart                = No
    End

    Behavior = SpecialPowerModule ModuleTag_SpellBookGroundView
        SpecialPowerTemplate            = SpellBookGroundView
        AvailableAtStart                = No
    End

