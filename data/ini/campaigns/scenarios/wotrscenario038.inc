//-------------------------------------------------------------------------------------------------
// Scenario Name:		World Domination (All) - 4 Players
// Scenario Description:	This is a freeform game of the World Domination mode with 4 preset starting locations (Grey_Havens Helms_Deep High_Pass Mordor)
// Game Type:			World Domination
// Win Conditions:		Player must be the first to conquer all (38) territories
// Unavailable Territories:	None
// # of Players:		4
//-------------------------------------------------------------------------------------------------

LivingWorldCampaign WOTRScenario038

	IsEvilCampaign = No

	
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"
	
	Scenario
		DisplayName 		= LWScenario:WOTRScenario038
		DisplayDescription 	= LWScenario:WOTRScenario038Description
		DisplayGameType 	= LWScenario:WOTRGameType003
		DisplayObjectives 	= LWScenario:WOTRObjectives005
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003
		DisplayVictoriousText	= LWScenario:WOTRGenericWin001
		DisplayDefeatedText	= LWScenario:WOTRGenericLose001

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
		
		TeamVictoryCondition
			Teams = 1 2
			NumControlledRegionsGreaterOrEqualTo = 38
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