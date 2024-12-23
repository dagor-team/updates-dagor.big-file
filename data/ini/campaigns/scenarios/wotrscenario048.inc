








LivingWorldCampaign WOTRScenario048

	IsEvilCampaign = No


	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario048
		DisplayDescription 	= LWScenario:WOTRScenario048Description
		DisplayGameType		= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003
		DisplayVictoriousText	= LWScenario:WOTREliminationWin001
		DisplayDefeatedText	= LWScenario:WOTREliminationLose001

		RegionCampaign = DefaultCampaign

		MinPlayers = 2
		MaxPlayers = 2

		DisableRegions = Lothlorien Redhorn_Pass High_Pass Carrock Celduin MountGundabad Iron_Hills Mirkwood Erebor Rivendell Rhudaur Arnor Buckland Ettenmoors Forlindon Grey_Havens Harlindon The_Shire Tower_Hills Angmar Fornost Amon_Sul Barrow_Downs Lostriand Cardolan CarnDum Forodwaith Minas_Tirith Cair_Andros Anfalas Belfalas Harad Rhun Minas_Morgul Mordor Mount_Doom The_Black_Gate Dol_Guldur Umbar Dagorlad The_Dead_Marshes The_Brown_Lands Osgiliath Ithilien
		DisabledFactions = FactionAngmar FactionImladris FactionElves FactionDwarves FactionMen FactionWild FactionMordor
		DefaultStartSpots = Helms_Deep Isengard

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
		    Factions = FactionRohan
		    Regions = Helms_Deep
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionIsengard
		    Regions = Isengard
		    Teams = 2
		End










                OwnershipSet
                    Regions = Helms_Deep Rohan
                    StartRegion = Helms_Deep

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Helms_Deep
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Rohan
                    End

                    SpawnArmies
                        Armies = HeroArmy1 GarrisonArmy1
                        Region = Helms_Deep
                    End
                    SpawnArmies
                        Armies = GarrisonArmy2
                        Region = Rohan
                    End
                End


                OwnershipSet
                    Regions = Isengard Dunland
                    StartRegion = Isengard

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Isengard
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Dunland
                    End

                    SpawnArmies
                        Armies = HeroArmy1 GarrisonArmy1
                        Region = Isengard
                    End
                    SpawnArmies
                        Armies = GarrisonArmy2
                        Region = Dunland
                    End
                End

            End



	Act One







SpawnArmy
	ScriptingName = HeroArmy1

	SpawnForTemplates = PlayerRohan
	HeroTemplateName = RohanTheoden
	PlayerArmy = TheodenPlayerArmy
	Icon = HeroTheodenIcon

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
	SpawnForTemplates = PlayerIsengard
	HeroTemplateName = IsengardSaruman_Mod
	PlayerArmy = SarumanPlayerArmy
	Icon = HeroSarumanIcon
	Banner = BannerIsengard
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerIsengard
	PlayerArmy = Isengard_StartingArmy
	Icon = IsengardArmyIcon
End

SpawnArmy
	ScriptingName = GarrisonArmy2
	SpawnForTemplates = PlayerIsengard
	PlayerArmy = Isengard_StartingArmy
	Icon = IsengardArmyIcon
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
		End





	End
End


