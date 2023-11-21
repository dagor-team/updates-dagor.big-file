//-------------------------------------------------------------------------------------------------
// Scenario Name:		World Domination (20) - Freeform
// Scenario Description:	This is a freeform game of the World Domination mode
// Game Type:			World Domination
// Win Conditions:		Player must be the first to conquer 20 territories
// Unavailable Territories:	None
// # of Players:		2-6
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario023

	IsEvilCampaign = No

	
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"
	
	Scenario
		DisplayName 		= LWScenario:WOTRScenario023
		DisplayDescription 	= LWScenario:WOTRScenario023Description
		DisplayGameType 	= LWScenario:WOTRGameType003
		DisplayObjectives 	= LWScenario:WOTRObjectives003
		DisplayFiction 		= LWScenario:WOTRScenarioFiction002
		DisplayVictoriousText	= LWScenario:WOTRGenericWin001
		DisplayDefeatedText	= LWScenario:WOTRGenericLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 6
		
		DefaultStartSpots = Rivendell Mordor
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = No
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamVictoryCondition
			Teams = 1 2
			NumControlledRegionsGreaterOrEqualTo = 20
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