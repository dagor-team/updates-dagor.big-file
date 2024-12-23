








LivingWorldCampaign WOTRScenario045

	IsEvilCampaign = No


	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario045
		DisplayDescription 	= LWScenario:WOTRScenario045Description
		DisplayGameType		= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003
		DisplayVictoriousText	= LWScenario:WOTREliminationWin001
		DisplayDefeatedText	= LWScenario:WOTREliminationLose001

		RegionCampaign = ArnorCampaign


		MinPlayers = 2
		MaxPlayers = 2

		DisableRegions = Anfalas Belfalas Cair_Andros Celduin Dagorlad Dol_Guldur Erebor Carrock Fangorn Gap_Of_Rohan Harad Enedwaith Helms_Deep Iron_Hills Isengard Ithilien Minas_Morgul Minas_Tirith Redhorn_Pass Mirkwood Mordor Mount_Doom Osgiliath Rohan Rhun The_Black_Gate The_Brown_Lands The_Dead_Marshes Umbar Rivendell Forlindon Grey_Havens Harlindon Lothlorien
		DisabledFactions = FactionDwarves FactionIsengard FactionMordor FactionWild FactionRohan FactionImladris FactionElves FactionMen
		DefaultStartSpots = Arnor Angmar







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
		    Factions = FactionArnor
		    Regions = Arnor
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionAngmar
		    Regions = Angmar
		    Teams = 2
		End








           	OwnershipSet
                    Regions = Arnor Fornost Amon_Sul Cardolan Minhiriath
                    StartRegion = Arnor

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Fornost
                    End
                    SpawnBuildings
                        Buildings = LW_FORT
                        Region = Arnor
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Amon_Sul
                    End

                    SpawnArmies
                        Armies = HeroArmy1 GarrisonArmy1
                        Region = Fornost
                    End
                    SpawnArmies
                        Armies = HeroArmy2
                        Region = Amon_Sul
                    End
                    SpawnArmies
                        Armies = HeroArmy3
                        Region = Cardolan
                    End
                    SpawnArmies
                        Armies = HeroArmy4
                        Region = Arnor
                    End
           	End

                OwnershipSet
                    Regions = Angmar Ettenmoors Rhudaur CarnDum Forodwaith
                    StartRegion = Angmar

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = CarnDum
                    End
                    SpawnBuildings
                        Buildings = LW_FORT
                        Region = Angmar
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Rhudaur
                    End

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Ettenmoors
                    End
                    SpawnArmies
                        Armies = HeroArmy2
                        Region = CarnDum
                    End
                    SpawnArmies
                        Armies = HeroArmy3 GarrisonArmy1
                        Region = Angmar
                    End
                    SpawnArmies
                        Armies = HeroArmy4
                        Region = Rhudaur
                    End
                 End
            End



	Act One






SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerArnor
	HeroTemplateName = GondorArvedui
	PlayerArmy = ArnorArveduiArmy
	Icon = HeroArveduiIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerArnor
	HeroTemplateName = ArnorAranarth
	PlayerArmy = ArnorAranarthArmy
	Icon = HeroAranarthIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerArnor
	HeroTemplateName = GondorEarnur
	PlayerArmy = ArnorEarnurArmy
	Icon = HeroEarnurIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = HeroArmy4
	SpawnForTemplates = PlayerArnor
	HeroTemplateName = ArnorCaptainStealthless_mod
	PlayerArmy = ArnorCartheanArmy
	Icon = HeroCartheanIcon
	Banner = BannerMen
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerArnor
	PlayerArmy = Arnor_StartingArmy
	Icon = ArnorArmyIcon
End







SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = AngmarDurmarth
	PlayerArmy = DurmarthPlayerArmy
	Icon = HeroDurmarthIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = AngmarMorgramir_mod
	PlayerArmy = MorgramirPlayerArmy
	Icon = HeroMorgramirIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = AngmarWitchking_mod
	PlayerArmy = WitchKingArmy
	Icon = HeroAngmarWitchkingIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = HeroArmy4
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = AngmarHwaldar_mod
	PlayerArmy = HwaldarPlayerArmy
	Icon = HeroHwaldarIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerAngmar
	PlayerArmy = Angmar_StartingArmy
	Icon = AngmarArmyIcon
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

LivingWorldRegionCampaign ArnorCampaign

	RegionConqueredSound = Gui_RegionConquered


	RegionEffectsManagerName = WotRRegionEffects




	RegionBonusArmy			= LW:RegionBonusArmy_Good
	RegionBonusResource		= LW:RegionBonusResource
	RegionBonusLegendary		= LW:RegionLegendaryBonus





	HeroOnlyArmyCommandPoints	= 0
	SmallArmyCommandPoints		= 120
	MediumArmyCommandPoints		= 240

	ArmyRetreatRounds		= 8






	ArmyPlacementPos		= X:-85 Y:48
	ArmyPlacementPos		= X:85 Y:48





	#include "..\Common\livingworldregionsarnor.inc"
End

