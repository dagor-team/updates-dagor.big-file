//-------------------------------------------------------------------------------------------------
// Scenario Name:		Elimination - 3 Players
// Scenario Description:	This is a 3 player game of the Elimination mode with 3 preset starting locations (Arnor Dagorlad Gondor)
// Game Type:			Elimination
// Win Conditions:		Player must conquer all the territories of each opposing team member
// Unavailable Territories:	None
// # of Players:		3
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario016

	IsEvilCampaign = No
	
	
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario016
		DisplayDescription 	= LWScenario:WOTRScenario016Description
		DisplayGameType 	= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003
		DisplayVictoriousText	= LWScenario:WOTREliminationWin001
		DisplayDefeatedText	= LWScenario:WOTREliminationLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 3
		
		DisallowStartInRegions = Buckland Cair_Andros Celduin Dol_Guldur Dunland Enedwaith Erebor Ettenmoors Fangorn Forlindon Gap_Of_Rohan Grey_Havens Harad Harlindon Helms_Deep High_Pass Iron_Hills Isengard Ithilien Lothlorien Minas_Morgul Minas_Tirith Minhiriath Mirkwood Mordor Mount_Doom Osgiliath Redhorn_Pass Rhun Rivendell Rohan The_Black_Gate The_Dead_Marshes The_Shire Tower_Hills
		DefaultStartSpots = Arnor Dagorlad Gondor
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = No
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
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