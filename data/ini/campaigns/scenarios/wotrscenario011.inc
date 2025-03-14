






LivingWorldCampaign WOTRScenario011

	IsEvilCampaign = No
	
	
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario011
		DisplayDescription 	= LWScenario:WOTRScenario011Description
		DisplayGameType 	= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 2
		
		DisallowStartInRegions = Harlindon Rhun Buckland Cair_Andros Celduin Dagorlad Dol_Guldur Dunland Enedwaith Erebor Ettenmoors Fangorn Forlindon Gap_Of_Rohan Anfalas Belfalas Grey_Havens Harad Helms_Deep High_Pass Iron_Hills Isengard Ithilien Lothlorien Minas_Morgul Minas_Tirith Minhiriath Mirkwood Mount_Doom Osgiliath Redhorn_Pass Rivendell Rohan The_Black_Gate The_Dead_Marshes The_Shire Tower_Hills Umbar Angmar Cardolan Carrock The_Brown_Lands Fornost Amon_Sul Lostriand Rhudaur Barrow_Downs CarnDum Forodwaith MountGundabad
		DefaultStartSpots = Arnor Mordor
		
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
			Regions = Arnor Buckland Cair_Andros Forlindon Gap_Of_Rohan Anfalas Belfalas Grey_Havens Harlindon Helms_Deep High_Pass Minhiriath Rivendell The_Shire Tower_Hills Fornost Barrow_Downs Amon_Sul Lostriand Cardolan Ettenmoors Rhudaur Rohan Osgiliath Minas_Tirith Forodwaith
			StartRegion = Arnor
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Arnor
			End
		End

		OwnershipSet
			Regions = Dunland Celduin Dagorlad Dol_Guldur Enedwaith Erebor Fangorn Harad Iron_Hills Isengard Ithilien Minas_Morgul Mirkwood Mordor Mount_Doom Redhorn_Pass Rhun The_Black_Gate The_Dead_Marshes Umbar The_Brown_Lands Carrock Angmar CarnDum MountGundabad Lothlorien
			StartRegion = Mordor
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Mordor
			End
		End
	End
	
	
	
	Act One
	

		
		#include "..\Common\LivingWorldDefaultArmies.inc"


		
		


		
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