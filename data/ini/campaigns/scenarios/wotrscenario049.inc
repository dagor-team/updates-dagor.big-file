








LivingWorldCampaign WOTRScenario049

	IsEvilCampaign = No


	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario049
		DisplayDescription 	= LWScenario:WOTRScenario049Description
		DisplayGameType		= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003
		DisplayVictoriousText	= LWScenario:WOTREliminationWin001
		DisplayDefeatedText	= LWScenario:WOTREliminationLose001

		RegionCampaign = DefaultCampaign

		MinPlayers = 2
		MaxPlayers = 2


		DisableRegions = Dagorlad The_Brown_Lands Rhun Enedwaith Dunland Rohan Fangorn Minhiriath Helms_Deep Isengard Lothlorien Redhorn_Pass High_Pass Carrock Celduin MountGundabad Iron_Hills Mirkwood Erebor Rivendell Rhudaur Arnor Buckland Ettenmoors Forlindon Grey_Havens Harlindon The_Shire Tower_Hills Angmar Fornost Amon_Sul Barrow_Downs Lostriand Cardolan CarnDum Forodwaith Dol_Guldur Gap_Of_Rohan
		DisabledFactions = FactionAngmar FactionImladris FactionElves FactionDwarves FactionRohan FactionWild FactionIsengard
		DefaultStartSpots = Minas_Tirith  Mordor

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
		    Factions = FactionMen
		    Regions = Minas_Tirith
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionMordor
		    Regions = Mordor
		    Teams = 2
		End









                OwnershipSet
                    Regions = Minas_Tirith Osgiliath Ithilien Anfalas Belfalas
                    StartRegion = Minas_Tirith

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Minas_Tirith
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Anfalas
                    End

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Minas_Tirith
                    End
                    SpawnArmies
                        Armies = HeroArmy2
                        Region = Osgiliath
                    End
                    SpawnArmies
                        Armies = HeroArmy3
                        Region = Belfalas
                    End
                    SpawnArmies
                        Armies = HeroArmy4
                        Region = Ithilien
                    End
                    SpawnArmies
                        Armies = GarrisonArmy1
                        Region = Minas_Tirith
                    End
                    SpawnArmies
                        Armies = GarrisonArmy2
                        Region = Osgiliath
                    End
                End


                OwnershipSet
                    Regions = Harad Minas_Morgul Mordor Mount_Doom The_Black_Gate Umbar
                    StartRegion = Mordor

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Mordor
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Harad
                    End

                    SpawnArmies
                        Armies = HeroArmy1 HeroArmy3
                        Region = Minas_Morgul
                    End
                    SpawnArmies
                        Armies = HeroArmy2
                        Region = The_Black_Gate
                    End
                    SpawnArmies
                        Armies = HeroArmy4
                        Region = Mount_Doom
                    End
                    SpawnArmies
                        Armies = GarrisonArmy1
                        Region = The_Black_Gate
                    End
                    SpawnArmies
                        Armies = GarrisonArmy2
                        Region = Harad
                    End
                    SpawnArmies
                        Armies = GarrisonArmy3
                        Region = Umbar
                    End
                End

            End


	Act One






SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerMen
	HeroTemplateName = GondorAragornEntwicklung1
	PlayerArmy = AragornPlayerArmy
	Icon = HeroAragornIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerMen
	HeroTemplateName = GondorBoromir
	PlayerArmy = BoromirPlayerArmy
	Icon = HeroBoromirIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerMen
	HeroTemplateName = GondorImrahil
	PlayerArmy = GondorImrahilArmy
	Icon = HeroImrailIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = HeroArmy4
	SpawnForTemplates = PlayerMen
	HeroTemplateName = GondorGandalf
	PlayerArmy = GondorGandalfArmy
	Icon = HeroFaramirIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerMen
	PlayerArmy = MenOfTheWest_StartingArmy
	Icon = MoWArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerMen
	PlayerArmy = MenOfTheWest_StartingArmy
	Icon = MoWArmyIcon
End






SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorWitchKing
	PlayerArmy = WitchKingPlayerArmy
	Icon = HeroWitchKingIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorMouthOfSauron_mod
	PlayerArmy = MouthOfSauronArmy
	Icon = HeroMouthOfSauronIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorGothmog_mod
	PlayerArmy = GothmogPlayerArmy
	Icon = HeroGothmogIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = HeroArmy4
	SpawnForTemplates = PlayerMordor
	HeroTemplateName = MordorGorthaur
	PlayerArmy = MordorNekromantPlayerArmy
	Icon = HeroNekromantIcon
	Banner = BannerMordor
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Mordor_StartingArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Mordor_StartingArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy3
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Mordor_StartingArmy
	Icon = MordorArmyIcon
End


		EyeTowerPoints
                        LookPoint = X:1534 Y:169
                        LookPoint = X:1370 Y:70
                        LookPoint = X:1500 Y:-50
                        LookPoint = X:1440 Y:-220
                        LookPoint = X:1600 Y:-510
                        LookPoint = X:1125 Y:-390
                        LookPoint = X:1260 Y:-40
                        LookPoint = X:1920 Y:160
                        LookPoint = X:1700 Y:450
                        LookPoint = X:1505 Y:230
                        LookPoint = X:1580 Y:75
                        LookPoint = X:1410 Y:-520
                        LookPoint = X:1840 Y:-600
                        LookPoint = X:2400 Y:-540
                        LookPoint = X:2200 Y:-335
                        LookPoint = X:2100 Y:-72
                        LookPoint = X:1900 Y:590
		End





	End
End


