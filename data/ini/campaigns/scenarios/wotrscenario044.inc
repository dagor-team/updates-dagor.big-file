








LivingWorldCampaign WOTRScenario044

	IsEvilCampaign = No


	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario044
		DisplayDescription 	= LWScenario:WOTRScenario044Description
		DisplayGameType		= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003
		DisplayVictoriousText	= LWScenario:WOTREliminationWin001
		DisplayDefeatedText	= LWScenario:WOTREliminationLose001

		RegionCampaign = DefaultCampaign

		MinPlayers = 4
		MaxPlayers = 4

		DisableRegions = Arnor Buckland Forlindon Grey_Havens Harlindon Minhiriath The_Shire Tower_Hills Fornost Amon_Sul Barrow_Downs Lostriand Cardolan
		DisabledFactions = FactionMen FactionRohan FactionDwarves FactionIsengard FactionWild
		DefaultStartSpots = Lothlorien Rivendell Mordor Angmar

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
		    Factions = FactionElves
		    Regions = Lothlorien
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionImladris
		    Regions = Rivendell
		    Teams = 1
		End

		StartingRestriction
		    Factions = FactionMordor
		    Regions = Mordor
		    Teams = 2
		End

		StartingRestriction
		    Factions = FactionAngmar
		    Regions = Angmar
		    Teams = 2
		End






                OwnershipSet
                    Regions = Lothlorien Mirkwood Fangorn
                    StartRegion = Lothlorien

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Lothlorien
                    End
                    SpawnBuildings
                        Buildings = LW_ARMORY LW_FARM
                        Region = Mirkwood
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Fangorn
                    End

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Mirkwood
                    End
                    SpawnArmies
                        Armies = HeroArmy2 HeroArmy3 HeroArmy4
                        Region = Lothlorien
                    End
                    SpawnArmies
                        Armies = GarrisonArmy1
                        Region = Fangorn
                    End
                End

                OwnershipSet
                    Regions = Rivendell Carrock Dunland
                    StartRegion = Rivendell

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Rivendell
                    End
                    SpawnBuildings
                        Buildings = LW_FORT
                        Region = Carrock
                    End
                    SpawnBuildings
                        Buildings = LW_ARMORY
                        Region = Carrock
                    End

                    SpawnArmies
                        Armies = HeroArmy1 HeroArmy3 HeroArmy4
                        Region = Rivendell
                    End
                    SpawnArmies
                        Armies = HeroArmy2 GarrisonArmy1
                        Region = Carrock
                    End
                End

                OwnershipSet
                    Regions = Harad Rhun Minas_Morgul Mordor Mount_Doom The_Black_Gate Dol_Guldur Umbar
                    StartRegion = Mordor

                    SpawnBuildings
                        Buildings = LW_ARMORY
                        Region = Mordor
                    End
                    SpawnBuildings
                        Buildings = LW_FARM
                        Region = Mount_Doom
                    End
                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Minas_Morgul
                    End
                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = Harad
                    End

                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Minas_Morgul
                    End
                    SpawnArmies
                        Armies = GarrisonArmy1
                        Region = Harad
                    End
                    SpawnArmies
                        Armies = HeroArmy2
                        Region = The_Black_Gate
                    End
                    SpawnArmies
                        Armies = HeroArmy3
                        Region = Dol_Guldur
                    End
                    SpawnArmies
                        Armies = HeroArmy4
                        Region = Mount_Doom
                    End
                End

                OwnershipSet
                    Regions = CarnDum Forodwaith Angmar
                    StartRegion = Angmar

                    SpawnBuildings
                        Buildings = LW_BARRACKS
                        Region = CarnDum
                    End
                    SpawnBuildings
                        Buildings = LW_ARMORY
                        Region = Forodwaith
                    End
                    SpawnBuildings
                        Buildings = LW_FORT
                        Region = Angmar
                    End

                    SpawnArmies
                        Armies = HeroArmy3 HeroArmy2
                        Region = CarnDum
                    End
                    SpawnArmies
                        Armies = HeroArmy1
                        Region = Angmar
                    End
                    SpawnArmies
                        Armies = HeroArmy4 GarrisonArmy1
                        Region = MountGundabad
                    End

                End

            End


	Act One






SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerElves
	HeroTemplateName = ElvenThranduil_mod
	PlayerArmy = ThranduilPlayerArmy
	Icon = HeroThranduilIcon
	Banner = BannerElves
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerElves
	HeroTemplateName = LothlorienHaldir
	PlayerArmy = HaldirPlayerArmy
	Icon = HeroHaldirIcon
	Banner = BannerElves
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerElves
	HeroTemplateName = LothlorienCeleborn
	PlayerArmy = CelebornPlayerArmy
	Icon = HeroCelebornIcon
	Banner = BannerElves
End

SpawnArmy
	ScriptingName = HeroArmy4
	SpawnForTemplates = PlayerElves
	HeroTemplateName = LothlorienGaladriel
	PlayerArmy = GaladrielPlayerArmy
	Icon = HeroGaladrielIcon
	Banner = BannerElves
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerElves
	PlayerArmy = Elven_StartingArmy
	Icon = ElfArmyIcon
End







SpawnArmy
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerImladris
	HeroTemplateName = ImladrisElrond
	PlayerArmy = ElrondPlayerArmy
	Icon = HeroElrondIcon
	Banner = BannerImladris
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerImladris
	HeroTemplateName = ImladrisGlorfindel
	PlayerArmy = GlorfindelPlayerArmy
	Icon = HeroGlorfindelIcon
	Banner = BannerImladris
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerImladris
	HeroTemplateName = LothlorienCirdan
	PlayerArmy = LothlorienCirdanArmy
	Icon = HeroArwenIcon
	Banner = BannerImladris
End

SpawnArmy
	ScriptingName = HeroArmy4
	SpawnForTemplates = PlayerImladris
	HeroTemplateName = ImladrisZwillingeEdain
	PlayerArmy = ZwillingePlayerArmy
	Icon = HeroZwillingeIcon
	Banner = BannerImladris
End

SpawnArmy
	ScriptingName = GarrisonArmy1
	SpawnForTemplates = PlayerImladris
	PlayerArmy = Imladris_StartingArmy
	Icon = ImladrisArmyIcon
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
	ScriptingName = HeroArmy1
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = AngmarWitchking_mod
	PlayerArmy = WitchKingArmy
	Icon = HeroAngmarWitchkingIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = HeroArmy2
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = AngmarDurmarth
	PlayerArmy = DurmarthPlayerArmy
	Icon = HeroDurmarthIcon
	Banner = BannerAngmar
End

SpawnArmy
	ScriptingName = HeroArmy3
	SpawnForTemplates = PlayerAngmar
	HeroTemplateName = AngmarMorgramir_mod
	PlayerArmy = MorgramirPlayerArmy
	Icon = HeroMorgramirIcon
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


