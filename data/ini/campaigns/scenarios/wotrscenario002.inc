






LivingWorldCampaign WOTRScenario002

	IsEvilCampaign = No
	
	
	#include "..\Common\LivingWorldDefaultRTSSettings.inc"
	
	Scenario
		DisplayName 		= LWScenario:WOTRScenario002
		DisplayDescription 	= LWScenario:WOTRScenario002Description
		DisplayGameType 	= LWScenario:WOTRGameType001
		DisplayObjectives 	= LWScenario:WOTRObjectives001
		DisplayFiction 		= LWScenario:WOTRScenarioFiction003
		DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
		DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001

		RegionCampaign = DefaultCampaign
		
		MaxPlayers = 6
		
		DisallowStartInRegions = Buckland Celduin Dagorlad Dol_Guldur Dunland Erebor Fangorn Forlindon Gap_Of_Rohan Anfalas Belfalas Grey_Havens Harad Harlindon Helms_Deep High_Pass Isengard Ithilien Minas_Morgul Minas_Tirith Minhiriath Mirkwood Osgiliath Redhorn_Pass Rivendell The_Black_Gate The_Dead_Marshes The_Shire Tower_Hills Umbar Angmar Carrock The_Brown_Lands Fornost Amon_Sul Lostriand Rhudaur Barrow_Downs CarnDum Forodwaith MountGundabad Enedwaith Mount_Doom Ettenmoors Rhun Cair_Andros
		DefaultStartSpots = Mordor Iron_Hills Rohan Lothlorien Cardolan Arnor
		
		PlayerDefeatCondition
			Teams = 1 2
			LoseIfCapitalLost = Yes
			NumControlledRegionsLessOrEqualTo = 0
		End
		
		TeamDefeatCondition
			Teams = 1 2
			NumControlledRegionsLessOrEqualTo = 0
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