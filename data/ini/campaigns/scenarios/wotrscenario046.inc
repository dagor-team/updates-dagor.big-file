








LivingWorldCampaign WOTRScenario046

	IsEvilCampaign = No


	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario046
		DisplayDescription 	= LWScenario:WOTRScenario046Description
		DisplayGameType		= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003
		DisplayVictoriousText	= LWScenario:WOTREliminationWin046
		DisplayDefeatedText	= LWScenario:WOTREliminationLose046

		RegionCampaign = DefaultCampaign


		MinPlayers = 3
		MaxPlayers = 3

		DisableRegions = Arnor Buckland Ettenmoors Forlindon Grey_Havens Harlindon Minhiriath The_Shire Tower_Hills Angmar Fornost Amon_Sul Barrow_Downs Lostriand Cardolan CarnDum Forodwaith
		DisabledFactions = FactionAngmar FactionWild FactionImladris FactionElves FactionDwarves FactionIsengard
		DefaultStartSpots = Minas_Tirith Helms_Deep Mordor

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
		    Factions = FactionRohan
		    Regions = Helms_Deep
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionMordor
		    Regions = Mordor
		    Teams = 2
		End








           	OwnershipSet
                    Regions = Minas_Tirith Cair_Andros Anfalas Belfalas
                    StartRegion = Minas_Tirith

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Minas_Tirith
                    End
                    SpawnBuildings
                        Buildings = LW_FORT
                        Region = Osgiliath
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Belfalas
                    End

                    SpawnArmies
                        Armies = HeroArmy1 GarrisonArmy1
                        Region = Minas_Tirith
                    End

                    SpawnArmies
                        Armies = HeroArmy2
                        Region = Osgiliath
                    End

                    SpawnArmies
                        Armies = GarrisonArmy2
                        Region = Anfalas
                    End

           	End

           	OwnershipSet
                    Regions = Helms_Deep Rohan Enedwaith
                    StartRegion = Helms_Deep

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Helms_Deep
                    End
                    SpawnBuildings
                        Buildings = LW_FORT
                        Region = Rohan
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Enedwaith
                    End

                    SpawnArmies
                        Armies = HeroArmy1 GarrisonArmy1
                        Region = Helms_Deep
                    End

                    SpawnArmies
                        Armies = HeroArmy2
                        Region = Rohan
                    End

                    SpawnArmies
                        Armies = GarrisonArmy2
                        Region = Enedwaith
                    End

           	End

                OwnershipSet
                    Regions = Harad Rhun Minas_Morgul Mordor Mount_Doom The_Black_Gate Dol_Guldur Umbar MountGundabad High_Pass Redhorn_Pass Iron_Hills Erebor Celduin Dagorlad The_Dead_Marshes The_Brown_Lands Isengard Dunland Gap_Of_Rohan Osgiliath Ithilien Fangorn
                    StartRegion = Mount_Doom

                    SpawnBuildings
                        Buildings = LW_BARRACKS LW_BARRACKS
                        Region = Mordor
                    End
                    SpawnBuildings
                        Buildings = LW_FORT LW_BARRACKS LW_ARMORY
                        Region = Mount_Doom
                    End
                    SpawnBuildings
                        Buildings = LW_BARRACKS LW_FARM
                        Region = Dunland
                    End
                    SpawnBuildings
                        Buildings = LW_FORT
                        Region = Dol_Guldur
                    End
                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Minas_Morgul
                    End
                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Osgiliath
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Ithilien
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Iron_Hills
                    End
                    SpawnBuildings
                        Buildings = LW_BARRACKS LW_FARM
                        Region = Rhun
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Harad
                    End
                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = MountGundabad
                    End
                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Isengard
                    End
                    SpawnBuildings
                        Buildings = LW_ARMORY
                        Region = Umbar
                    End

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Dol_Guldur
                    End
                    SpawnArmies
                        Armies = HeroArmy2
                        Region = The_Black_Gate
                    End
                    SpawnArmies
                        Armies = HeroArmy3
                        Region = Minas_Morgul
                    End
                    SpawnArmies
                        Armies = HeroArmy4
                        Region = Mordor
                    End
                    SpawnArmies
                        Armies = GarrisonArmy1
                        Region = Harad
                    End
                    SpawnArmies
                        Armies = GarrisonArmy2
                        Region = MountGundabad
                    End
                    SpawnArmies
                        Armies = GarrisonArmy3
                        Region = Erebor
                    End
                    SpawnArmies
                        Armies = GarrisonArmy4
                        Region = Isengard
                    End
                    SpawnArmies
                        Armies = GarrisonArmy5
                        Region = Osgiliath
                    End
                    SpawnArmies
                        Armies = GarrisonArmy6
                        Region = High_Pass
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

	SpawnForTemplates = PlayerRohan
	HeroTemplateName = RohanTheoden
	PlayerArmy = TheodenPlayerArmy
	Icon = HeroTheodenIcon

	Banner = BannerMen
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerRohan
	HeroTemplateName = RohanEomer
	PlayerArmy = EomerPlayerArmy
	Icon = HeroEomerIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerRohan
	PlayerArmy = Rohan_StartingArmy
	Icon = RohanArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerRohan
	PlayerArmy = Rohan_StartingArmy
	Icon = RohanArmyIcon
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
	HeroTemplateName = MordorSauron_mod
	PlayerArmy = MordorSauronPlayerArmy
	Icon = HeroSauronIcon
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

SpawnArmy
	ScriptingName = GarrisonArmy4
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Mordor_StartingArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy5
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Mordor_StartingArmy
	Icon = MordorArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy6
	SpawnForTemplates = PlayerMordor
	PlayerArmy = Mordor_StartingArmy
	Icon = MordorArmyIcon
End







		EyeTowerPoints
			LookPoint = X:436 Y:687
			LookPoint = X:481 Y:287
			LookPoint = X:1179 Y:461
			LookPoint = X:947 Y:917
			LookPoint = X:172 Y:573
			LookPoint = X:160 Y:560
			LookPoint = X:175 Y:557
			LookPoint = X:171 Y:348
			LookPoint = X:257 Y:535
			LookPoint = X:120 Y:350
			LookPoint = X:157 Y:420
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


