






LivingWorldCampaign WOTRScenario007

	IsEvilCampaign = No
	
	
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario007
		DisplayDescription 	= LWScenario:WOTRScenario007Description
		DisplayGameType 	= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 6		
		
		DisallowStartInRegions = Buckland Celduin Dagorlad Dol_Guldur Dunland Erebor Fangorn Forlindon Gap_Of_Rohan Anfalas Belfalas Grey_Havens Harad Harlindon Helms_Deep High_Pass Isengard Ithilien Minas_Morgul Minas_Tirith Minhiriath Mirkwood Osgiliath Redhorn_Pass Rivendell The_Black_Gate The_Dead_Marshes The_Shire Tower_Hills Umbar Angmar Carrock The_Brown_Lands Fornost Amon_Sul Lostriand Cardolan Barrow_Downs CarnDum Forodwaith MountGundabad Enedwaith Mount_Doom Ettenmoors Cair_Andros Rhun 
		DefaultStartSpots = Mordor Iron_Hills Rohan Lothlorien Rhudaur Arnor
		
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
			Regions = Angmar Arnor Buckland CarnDum Ettenmoors Fornost Forodwaith Lostriand The_Shire
			StartRegion = Arnor
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Arnor
			End
		End

		OwnershipSet
			Regions = Amon_Sul Barrow_Downs Forlindon Grey_Havens Harlindon Minhiriath Rhudaur Rivendell Tower_Hills 
			StartRegion = Rhudaur
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Rhudaur
			End
		End
		
		OwnershipSet
			Regions = Anfalas Belfalas Cair_Andros Enedwaith Helms_Deep Minas_Tirith Osgiliath Rohan Umbar
			StartRegion = Rohan
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Rohan
			End
		End

		OwnershipSet
			Regions = Harad Ithilien Minas_Morgul Mordor Mount_Doom The_Black_Gate The_Brown_Lands The_Dead_Marshes
			StartRegion = Mordor
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Mordor
			End
		End

		OwnershipSet
			Regions = Cardolan Carrock Dunland High_Pass Isengard Lothlorien Mirkwood MountGundabad Redhorn_Pass
			StartRegion = Lothlorien
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Lothlorien
			End
		End

		OwnershipSet
			Regions = Celduin Dagorlad Dol_Guldur Erebor Fangorn Gap_Of_Rohan Iron_Hills Rhun
			StartRegion = Iron_Hills
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Iron_Hills
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