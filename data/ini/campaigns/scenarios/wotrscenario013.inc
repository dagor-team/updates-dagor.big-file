//-------------------------------------------------------------------------------------------------
// Scenario Name:		Elimination - 6 Players
// Scenario Description:	This is a 6 player game of the Elimination mode with 6 preset starting locations (Cair_Andros Enedwaith Ettenmoors Iron_Hills Lothlorien Mount_Doom)
// Game Type:			Elimination
// Win Conditions:		Player must conquer all the territories of each opposing team member
// Unavailable Territories:	None
// # of Players:		6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario013

	IsEvilCampaign = No
	
	
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"

	Scenario
		DisplayName 		= LWScenario:WOTRScenario013
		DisplayDescription 	= LWScenario:WOTRScenario013Description
		DisplayGameType 	= LWScenario:WOTRGameType002
		DisplayObjectives 	= LWScenario:WOTRObjectives002
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003
		DisplayVictoriousText	= LWScenario:WOTREliminationWin001
		DisplayDefeatedText	= LWScenario:WOTREliminationLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 6
		
		DisallowStartInRegions = Arnor Buckland Celduin Dagorlad Dol_Guldur Dunland Erebor Fangorn Forlindon Gap_Of_Rohan Gondor Grey_Havens Harad Harlindon Helms_Deep High_Pass Isengard Ithilien Minas_Morgul Minas_Tirith Minhiriath Mirkwood Mordor Osgiliath Redhorn_Pass Rhun Rivendell Rohan The_Black_Gate The_Dead_Marshes The_Shire Tower_Hills
		DefaultStartSpots = Enedwaith Mount_Doom Ettenmoors Iron_Hills Lothlorien Cair_Andros
		
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