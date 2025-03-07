//-------------------------------------------------------------------------------------------------
// Scenario Name:		Elimination - 4 Players, All territories claimed
// Scenario Description:	This is a 4 player game of the Elimination mode with all territories claimed by 4 preset starting locations (Grey_Havens Helms_Deep High_Pass Mordor)
// Game Type:			Elimination
// Win Conditions:		Player must conquer all the territories of each opposing team member
// Unavailable Territories:	None
// # of Players:		4
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario020

	IsEvilCampaign = No
	
	
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario020
		DisplayDescription 	= LWScenario:WOTRScenario020Description
		DisplayGameType 	= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction004
		DisplayVictoriousText	= LWScenario:WOTREliminationWin001
		DisplayDefeatedText	= LWScenario:WOTREliminationLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 4
		
		DisallowStartInRegions = Arnor Buckland Cair_Andros Celduin Dagorlad Dol_Guldur Dunland Enedwaith Erebor Ettenmoors Fangorn Forlindon Gap_Of_Rohan Gondor Harad Harlindon Iron_Hills Isengard Ithilien Lothlorien Minas_Morgul Minas_Tirith Minhiriath Mirkwood Mount_Doom Osgiliath Redhorn_Pass Rhun Rivendell Rohan The_Black_Gate The_Dead_Marshes The_Shire Tower_Hills
		DefaultStartSpots = Grey_Havens Mordor Helms_Deep High_Pass
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = No
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		//----------------------------------------------------------
		// OwnershipSets
		//----------------------------------------------------------

		OwnershipSet
			Regions = Arnor Buckland Ettenmoors Forlindon Grey_Havens Harlindon Minhiriath The_Shire Tower_Hills
			StartRegion = Grey_Havens
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Grey_Havens
			End
		End
		
		OwnershipSet
			Regions = Dol_Guldur Dunland Erebor Fangorn High_Pass Lothlorien Mirkwood Redhorn_Pass Rivendell The_Dead_Marshes
			StartRegion = High_Pass
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = High_Pass
			End
		End

		OwnershipSet
			Regions = Cair_Andros Enedwaith Gap_Of_Rohan Gondor Helms_Deep Isengard Ithilien Minas_Tirith Osgiliath Rohan
			StartRegion = Helms_Deep
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Helms_Deep
			End
		End

		OwnershipSet
			Regions = Celduin Dagorlad Harad Iron_Hills Minas_Morgul Mordor Mount_Doom Rhun The_Black_Gate
			StartRegion = Mordor
			
			SpawnArmies
				Armies = HeroArmy1 HeroArmy2 HeroArmy3 GarrisonArmy1
				Region = Mordor
			End
		End
	End
	
	
	
	Act One
	

		
		#include "..\Common\LivingWorldDefaultArmies.inc"


		
		//#include "..\Common\LivingWorldCities.inc"


		
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