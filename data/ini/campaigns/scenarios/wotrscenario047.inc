LivingWorldCampaign WOTRScenario047

	IsEvilCampaign = No

	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario047
		DisplayDescription 	= LWScenario:WOTRScenario047Description
		DisplayGameType		= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003
		DisplayVictoriousText	= LWScenario:WOTREliminationWin001
		DisplayDefeatedText	= LWScenario:WOTREliminationLose001

		RegionCampaign = DefaultCampaign


		MinPlayers = 2
		MaxPlayers = 2

		DisableRegions = Rivendell Rhudaur Arnor Buckland Ettenmoors Forlindon Grey_Havens Harlindon Minhiriath The_Shire Tower_Hills Angmar Fornost Amon_Sul Barrow_Downs Lostriand Cardolan CarnDum Forodwaith Minas_Tirith Cair_Andros Anfalas Belfalas Helms_Deep Rohan Enedwaith Harad Rhun Minas_Morgul Mordor Mount_Doom The_Black_Gate Dol_Guldur Umbar Dagorlad The_Dead_Marshes The_Brown_Lands Isengard Dunland Gap_Of_Rohan Osgiliath Ithilien Fangorn
		DisabledFactions = FactionAngmar FactionImladris FactionElves FactionIsengard FactionMen FactionRohan FactionMordor
		DefaultStartSpots = Erebor MountGundabad







		HistoricalScenario = Yes

           	PlayerDefeatCondition
                    Teams = 1 2
                    LoseIfCapitalLost = No
                    NumControlledRegionsLessOrEqualTo = 0
           	End

           	TeamDefeatCondition
                    Teams = 1 2
                    NumControlledRegionsLessOrEqualTo = 0
           	End










		StartingRestriction
		    Factions = FactionDwarves
		    Regions = Erebor
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionWild
		    Regions = MountGundabad
		    Teams = 2
		End










                OwnershipSet
                    Regions = Iron_Hills Erebor Celduin
                    StartRegion = Erebor

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Erebor
                    End
                    SpawnBuildings
                        Buildings = LW_FORT
                        Region = Iron_Hills
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Celduin
                    End

                    SpawnArmies
                        Armies = HeroArmy1 HeroArmy2 GarrisonArmy1
                        Region = Erebor
                    End
                    SpawnArmies
                        Armies = HeroArmy3 GarrisonArmy2
                        Region = Iron_Hills
                    End
                    SpawnArmies
                        Armies = HeroArmy4 GarrisonArmy3
                        Region = Celduin
                    End
                End


                OwnershipSet
                    Regions = MountGundabad High_Pass Redhorn_Pass
                    StartRegion = MountGundabad

                    SpawnBuildings
                        Buildings = LW_FORT
                        Region = MountGundabad
                    End

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Redhorn_Pass
                    End

                    SpawnArmies
                        Armies = HeroArmy1 HeroArmy2 GarrisonArmy1
                        Region = High_Pass
                    End

                    SpawnArmies
                        Armies = HeroArmy3 GarrisonArmy2
                        Region = Redhorn_Pass
                    End

                    SpawnArmies
                        Armies = HeroArmy4 GarrisonArmy3
                        Region = MountGundabad
                    End

                End

            End



	Act One









SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = DwarvenThorinIII
	PlayerArmy = DwarvenThorinArmy
	Icon = HeroThorinIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = DwarvenDainErebor
	PlayerArmy = DainPlayerArmy
	Icon = HeroDainIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = DwarvenBalin
	PlayerArmy = DwarvenBalinArmy
	Icon = HeroBalinIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = HeroArmy4
	SpawnForTemplates = PlayerDwarves
	HeroTemplateName = DwarvenCaptainofDale_mod
	PlayerArmy = CaptainofDalePlayerArmy
	Icon = HeroCaptainofDaleIcon
	Banner = BannerDwarves
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = Dwarven_StartingArmy
	Icon = DwarfArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = Dwarven_StartingArmy
	Icon = DwarfArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerDwarves
	PlayerArmy = Dwarven_StartingArmy
	Icon = DwarfArmyIcon
End







SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerWild
	HeroTemplateName = Drogoth
	PlayerArmy = DrogothPlayerArmy
	Icon = HeroDrogothIcon
	Banner = BannerWild
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerWild
	HeroTemplateName = WildGreatGoblin
	PlayerArmy = GroﬂorkPlayerArmy
	Icon = HeroGroﬂorkIcon
	Banner = BannerWild
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerWild
	HeroTemplateName = WildGoblinKing_mod
	PlayerArmy = GorkilPlayerArmy
	Icon = HeroGorkilIcon
	Banner = BannerWild
End

SpawnArmy
	ScriptingName = HeroArmy4
	SpawnForTemplates = PlayerWild
	HeroTemplateName = WildDurburz
	PlayerArmy = BolgPlayerArmy
	Icon = HeroBolgIcon
	Banner = BannerWild
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerWild
	PlayerArmy = CorruptedWild_StartingArmy
	Icon = WildArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerWild
	PlayerArmy = CorruptedWild_StartingArmy
	Icon = WildArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerWild
	PlayerArmy = CorruptedWild_StartingArmy
	Icon = WildArmyIcon
End





	End
End


