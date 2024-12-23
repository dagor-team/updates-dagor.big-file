LivingWorldCampaign WOTRTutorial

	IsEvilCampaign = No
	IsScriptedCampaign = Yes
	
	AddPlayer GoodPlayer
		PlayerTemplate = PlayerMen
		AITemplate = DefaultAITemplate
		BaseRegion = Cair_Andros
		MP_SlotColorIndex = 0			
		TeamNumber = 0
	End
	
	AddPlayer EvilPlayer
		PlayerTemplate = PlayerMordor
		IsDumb = Yes                
		BaseRegion = Mount_Doom
		MP_SlotColorIndex = 1
		TeamNumber = 1
	End
	
	LocalPlayer = GoodPlayer
	

	Scenario
		DisplayName = LWScenario:WOTRScenario001
		DisplayDescription = LWScenario:WOTRScenario001Description
		RegionCampaign = TutorialCampaign
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = Yes
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		OwnershipSet
			Regions = Cair_Andros Rohan Minas_Tirith Osgiliath Gondor Helms_Deep
			SpawnBuildings
				Region = Rohan
				Buildings = LW_FORT LW_FARM
			End
			SpawnBuildings
				Region = Osgiliath
				Buildings = LW_FARM LW_BARRACKS
			End
			SpawnBuildings
				Region = Cair_Andros
				Buildings = LW_FARM
			End
			SpawnBuildings
				Region = Helms_Deep
				Buildings = LW_FARM
			End
			SpawnBuildings
				Region = Gondor
				Buildings = LW_FORT LW_ARMORY
			End
		End
		
		OwnershipSet
			Regions = Mount_Doom Mordor
			SpawnBuildings
				Region = Mount_Doom
				Buildings = LW_FARM LW_BARRACKS
			End
			SpawnBuildings
				Region = Mordor
				Buildings = LW_FORT LW_ARMORY
			End
		End
	End
	
	
	Tutorial
		
		Turn 1
			Phase Planning
				Session
					TaskAfterAudio	
						Task = ScriptedArmyMove
						Params = MordorHeroArmy2 The_Black_Gate
					End
				End
				Session
					Audio = WOTR_Tutorial001
					Text = WOTRTutorial:LW_InstructionText01
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End



				Session
					Audio = WOTR_Tutorial003
					Text = WOTRSCRIPT:WOTR_Tutorial003subtitle
					
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial004
					Text = WOTRSCRIPT:WOTR_Tutorial004subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 0.5
					End
				End
				Session
					Audio = WOTR_Tutorial005
					Text = WOTRTutorial:LW_InstructionText03
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial006
					Text = WOTRTutorial:LW_InstructionText04
				End
				Session
					Audio = WOTR_Tutorial007
					ClearPreviousText = No		
				End
				Session
					Audio = WOTR_Tutorial008
					
					
					
					
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End







				Session
					Audio = WOTR_Tutorial010
					Text = WOTRSCRIPT:WOTR_Tutorial010subtitle
				End
				Session
					Audio = WOTR_Tutorial011
					Text = WOTRTutorial:LW_InstructionText05
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End



				Session
					Audio = WOTR_Tutorial013
					Text = WOTRSCRIPT:WOTR_Tutorial013subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End














				Session
					Audio = WOTR_Tutorial016
					Text = WOTRTutorial:LW_InstructionText06
				End
				Session
					Audio = WOTR_Tutorial017
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial018
					Text = WOTRSCRIPT:WOTR_Tutorial018subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End



				Session
					Audio = WOTR_Tutorial020
					Text = WOTRTutorial:LW_InstructionText07
				End
				Session
					Audio = WOTR_Tutorial021
					Text = WOTRSCRIPT:WOTR_Tutorial021subtitle
					
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End



				Session
					Audio = WOTR_Tutorial023	
					Text = WOTRTutorial:LW_InstructionText09
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial024
					Text = WOTRSCRIPT:WOTR_Tutorial024subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = BuildBarracks
						Params = Cair_Andros
						Text = WOTRTutorial:BuildBarracksCairAndros
					End
				End
				Session
					Audio = WOTR_Tutorial025	
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial026
					Text = WOTRTutorial:LW_InstructionText10
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial027
					Text = WOTRSCRIPT:WOTR_Tutorial027subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial028
					Text = WOTRSCRIPT:WOTR_Tutorial028subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
				End
			End
			
			Phase ResolveBattles
				Session
					Audio = WOTR_Tutorial029	
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial030
					Text = WOTRTutorial:LW_InstructionText11
				End
				Session
					Audio = WOTR_Tutorial031
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 0.5
					End
				End
				Session
					Audio = WOTR_Tutorial032
					Text = WOTRSCRIPT:WOTR_Tutorial032subtitle
				End
			End
			
			Phase PlanRetreats
				Session
					Audio = WOTR_Tutorial033	
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial034
					Text = WOTRSCRIPT:WOTR_Tutorial034subtitle
					
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 0.5
					End
				End
				Session
					Audio = WOTR_Tutorial035
					Text = WOTRSCRIPT:WOTR_Tutorial035subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial036
					Text = WOTRSCRIPT:WOTR_Tutorial036subtitle
					TaskAfterAudio
						Task = ScriptedDelay	
						Params = 1.5
					End
				End
			End
		End
		
		
		Turn 2
			Phase Planning
				Session
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedArmyMove
						Params = MordorHeroArmy1 Minas_Morgul
					End
				End
				Session
					Audio = WOTR_Tutorial037	
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial038	
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial039
					Text = WOTRSCRIPT:WOTR_Tutorial039subtitle
				End
				Session
					Audio = WOTR_Tutorial040
					Text = WOTRSCRIPT:WOTR_Tutorial040subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End



				Session
					Audio = WOTR_Tutorial042
					Text = WOTRSCRIPT:WOTR_Tutorial042subtitle
					
				End
				Session
					Audio = WOTR_Tutorial043
					Text = WOTRSCRIPT:WOTR_Tutorial043subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End



				Session
					Audio = WOTR_Tutorial045
					Text = WOTRTutorial:LW_InstructionText14
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial046
					Text = WOTRSCRIPT:WOTR_Tutorial046subtitle
					
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial047	
					Text = WOTRTutorial:LW_InstructionText16
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial048
					Text = WOTRSCRIPT:WOTR_Tutorial048subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = TrainUnit
						Params = Cair_Andros
						Text = WOTRTutorial:TrainTroopsCairAndros
					End
				End
				Session
					Audio = WOTR_Tutorial049	
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial050
					Text = WOTRTutorial:LW_InstructionText17
				End
				Session
					Audio = WOTR_Tutorial051
					Text = WOTRSCRIPT:WOTR_Tutorial051subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
				End
			End
			
			Phase ResolveBattles
				Session
					Audio = WOTR_Tutorial052
					Text = WOTRSCRIPT:WOTR_Tutorial052subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End



			End
			
			Phase PlanRetreats
				
			End
		End
		
		
		Turn 3
			Phase Planning
				Session
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedArmyMove
						Params = MordorHeroArmy1 Osgiliath
					End
				End
				Session
					TaskAfterAudio
						Task = ScriptedArmyMove
						Params = MordorHeroArmy2 The_Dead_Marshes
					End
				End
				Session
					Audio = WOTR_Tutorial054	
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial055	
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial056
					Text = WOTRSCRIPT:WOTR_Tutorial056subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial057
					Text = WOTRSCRIPT:WOTR_Tutorial057subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End



				Session
					Audio = WOTR_Tutorial059
					Text = WOTRTutorial:LW_InstructionText18
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial060
					Text = WOTRTutorial:LW_InstructionText19
				End
				Session
					Audio = WOTR_Tutorial061
					Text = WOTRTutorial:LW_InstructionText20
				End
				Session
					Audio = WOTR_Tutorial062	
					Text = WOTRTutorial:LW_InstructionText21
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial063
					Text = WOTRSCRIPT:WOTR_Tutorial063subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = OpenDetailsPanel
						Params = Cair_Andros
						Text = WOTRTutorial:InspectArmyCairAndros
					End
				End
				Session
					Audio = WOTR_Tutorial064
					Text = WOTRSCRIPT:WOTR_Tutorial064subtitle
				End
				Session
					Audio = WOTR_Tutorial065
					Text = WOTRSCRIPT:WOTR_Tutorial065subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial066
					Text = WOTRSCRIPT:WOTR_Tutorial066subtitle
					
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial067	
					Text = WOTRTutorial:LW_InstructionText23
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial069
					Text = WOTRSCRIPT:WOTR_Tutorial069subtitle
				End
				Session
					Audio = WOTR_Tutorial068
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = MergeGarrison
						Params = Cair_Andros MenHeroArmy1
						Text = WOTRTutorial:MergeGarrisonWithAragorn
					End
				End
				Session
					Audio = WOTR_Tutorial070	
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial071
					Text = WOTRSCRIPT:WOTR_Tutorial071subtitle
					
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End



				Session
					Audio = WOTR_Tutorial073	
					Text = WOTRTutorial:LW_InstructionText25
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial075
					Text = WOTRSCRIPT:WOTR_Tutorial075subtitle
				End
				Session
					Audio = WOTR_Tutorial074
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = MoveHeroArmyToRegion
						Params = MenHeroArmy1 The_Dead_Marshes
						Text = WOTRTutorial:MoveAragornToDeadMarshes
					End
				End
				Session
					Audio = WOTR_Tutorial076	
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial077
					Text = WOTRSCRIPT:WOTR_Tutorial077subtitle
				End
			End
			
			Phase ResolveBattles
				Session
					Audio = WOTR_Tutorial078	
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial079
					Text = WOTRSCRIPT:WOTR_Tutorial079subtitle
				End
				Session
					Audio = WOTR_Tutorial080
					Text = WOTRTutorial:LW_InstructionText26
				End
				Session
					Audio = WOTR_Tutorial081	
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial082
					Text = WOTRSCRIPT:WOTR_Tutorial082subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = SelectBattle
						Params = Osgiliath
					End
				End
				Session
					Audio = WOTR_Tutorial083
					Text = WOTRSCRIPT:WOTR_Tutorial083subtitle
					Text = WOTRTutorial:LW_InstructionText27
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial084
					Text = WOTRTutorial:LW_InstructionText28
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial085
					Text = WOTRSCRIPT:WOTR_Tutorial085subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 0.5
					End
				End
				Session
					Audio = WOTR_Tutorial086
					Text = WOTRSCRIPT:WOTR_Tutorial086subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 0.5
					End
				End
				Session
					Audio = WOTR_Tutorial087
					Text = WOTRSCRIPT:WOTR_Tutorial087subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial088
					Text = WOTRSCRIPT:WOTR_Tutorial088subtitle
				End
				Session
					Audio = WOTR_Tutorial089
					Text = WOTRSCRIPT:WOTR_Tutorial089subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial090
					Text = WOTRSCRIPT:WOTR_Tutorial090subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = EnableAutoResolveButtonAndWaitForCompletion
						Params = Osgiliath
					End
				End
				Session
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.5
					End
				End
				Session
					Audio = WOTR_Tutorial091
					Text = WOTRSCRIPT:WOTR_Tutorial091subtitle
				End
				Session
					Audio = WOTR_Tutorial092
					Text = WOTRSCRIPT:WOTR_Tutorial092subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial093
					Text = WOTRSCRIPT:WOTR_Tutorial093subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = SelectBattle
						Params = The_Dead_Marshes
					End
				End
				
				Session
					Audio = Gui_WORTutorialCue
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = EnableAutoResolveButtonAndWaitForCompletion
						Params = The_Dead_Marshes
					End
				End
				Session
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.5
					End
				End
				Session
					Audio = WOTR_Tutorial094	
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial095
					Text = WOTRSCRIPT:WOTR_Tutorial095subtitle
				End
				Session
					Audio = WOTR_Tutorial096
					Text = WOTRSCRIPT:WOTR_Tutorial096subtitle
				End
			End
			
			Phase PlanRetreats
				Session
					Audio = WOTR_Tutorial097	
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial098
					Text = WOTRSCRIPT:WOTR_Tutorial098subtitle
					
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial099	
					Text = WOTRTutorial:LW_InstructionText30
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial100
					Text = WOTRSCRIPT:WOTR_Tutorial100subtitle
				End
				Session
					Audio = Gui_WORTutorialCue
					TaskAfterAudio
						Task = RetreatArmies
					End
				End
				Session
					Audio = WOTR_Tutorial101	
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 1.0
					End
				End
				Session
					Audio = WOTR_Tutorial102
					Text = WOTRSCRIPT:WOTR_Tutorial102subtitle
				End
				Session
					Audio = WOTR_Tutorial103
					Text = WOTRSCRIPT:WOTR_Tutorial103subtitle
				End
			End
		End
		
		
		Turn 4
			Phase Planning
				Session
					Audio = WOTR_Tutorial104
					Text = WOTRSCRIPT:WOTR_Tutorial104subtitle
					TaskAfterAudio
						Task = ScriptedDelay
						Params = 0.5
					End
				End
				Session
					Audio = WOTR_Tutorial105
					Text = WOTRSCRIPT:WOTR_Tutorial105subtitle
				End
				Session
					Audio = WOTR_Tutorial106
					ClearPreviousText = Yes
					TaskAfterAudio
						Task = EndTutorial	
  					End
				End
			End
		End
		
	End
	
	
	
	Act One
	

		
		
		

		SpawnArmy
			ScriptingName = MenHeroArmy1
			SpawnForTemplates = PlayerMen
			HeroTemplateName = GondorAragornMP
			PlayerArmy = AragornPlayerArmy_Tutorial
			Icon = HeroAragornIcon
			InitialRegion = Rohan
			MoveSpeed = 10.0	
		End

		SpawnArmy
			ScriptingName = MenHeroArmy2
			SpawnForTemplates = PlayerMen
			HeroTemplateName = RohanTheoden
			PlayerArmy = TheodenPlayerArmy_Tutorial
			Icon = HeroTheodenIcon
			InitialRegion = Cair_Andros
			MoveSpeed = 10.0
		End
		
		SpawnArmy
			ScriptingName = MenHeroArmy3
			SpawnForTemplates = PlayerMen
			HeroTemplateName = GondorBoromir
			PlayerArmy = BoromirPlayerArmy_Tutorial
			Icon = HeroBoromirIcon
			InitialRegion = Osgiliath
			MoveSpeed = 10.0
		End
		
		SpawnArmy
			ScriptingName = MenGarrisonArmy1
			SpawnForTemplates = PlayerMen
			PlayerArmy = MenOfTheWest_Garrison1_Tutorial
			Icon = MoWArmyIcon
			InitialRegion = Minas_Tirith
			MoveSpeed = 10.0
		End

	
		
		
		
		
		SpawnArmy
			ScriptingName = MordorHeroArmy1
			SpawnForTemplates = PlayerMordor
			HeroTemplateName = MordorWitchKingOnFellBeast
			PlayerArmy = WitchKingPlayerArmy_Tutorial
			Icon = HeroWitchKingIcon
			InitialRegion = Mount_Doom
			MoveSpeed = 10.0
		End
		
		SpawnArmy
			ScriptingName = MordorHeroArmy2
			SpawnForTemplates = PlayerMordor
			HeroTemplateName = MordorFellBeast
			PlayerArmy = FellBeast1PlayerArmy_Tutorial
			Icon = HeroFellBeast1Icon
			InitialRegion = Mount_Doom
			MoveSpeed = 10.0
		End
		
		SpawnArmy
			ScriptingName = MordorHeroArmy3
			SpawnForTemplates = PlayerMordor
			HeroTemplateName = MordorFellBeast
			PlayerArmy = FellBeast2PlayerArmy_Tutorial
			Icon = HeroFellBeast2Icon
			InitialRegion = Mordor
			MoveSpeed = 10.0
		End
		
		SpawnArmy
			ScriptingName = MordorGarrisonArmy1
			SpawnForTemplates = PlayerMordor
			PlayerArmy = Mordor_Garrison1_Tutorial
			Icon = MordorArmyIcon
			InitialRegion = The_Black_Gate
			MoveSpeed = 10.0
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






LivingWorldRegionCampaign TutorialCampaign

	RegionConqueredSound = Gui_RegionConquered
	
	
	RegionEffectsManagerName = WotRRegionEffects

	
	
	
	RegionBonusArmy			= LW:RegionBonusArmy_Good
	RegionBonusResource		= LW:RegionBonusResource
	RegionBonusLegendary	= LW:RegionLegendaryBonus
	
	
	
	
	
	HeroOnlyArmyCommandPoints	= 0				
	SmallArmyCommandPoints		= 120			
	MediumArmyCommandPoints		= 240			
	
		
	
	
	

	#include "..\Common\LivingWorldTutorialRegions.inc"
End


