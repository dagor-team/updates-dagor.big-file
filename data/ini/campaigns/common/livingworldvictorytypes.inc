







LivingWorldVictoryType
	DisplayGameType 	= LWScenario:WOTRGameType002		
									
									
	DisplayObjectives 	= LWScenario:WOTRObjectives002
	DisplayVictoriousText	= LWScenario:WOTREliminationWin001
	DisplayDefeatedText	= LWScenario:WOTREliminationLose001

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

LivingWorldVictoryType		
	DisplayGameType 	= LWScenario:WOTRGameType001		
									
									
	DisplayObjectives 	= LWScenario:WOTRObjectives001
	DisplayVictoriousText	= LWScenario:WOTRCapitalAssaultWin001
	DisplayDefeatedText	= LWScenario:WOTRCapitalAssaultLose001
		
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

LivingWorldVictoryType
	DisplayGameType 	= LWScenario:WOTRGameType004		
	DisplayObjectives 	= LWScenario:WOTRObjectives006
	DisplayVictoriousText	= LWScenario:WOTRGenericWin002
	DisplayDefeatedText	= LWScenario:WOTRGenericLose002
								
									
									
									
									
									
									
									
									
	
	
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
		ControlledRegions = Dol_Guldur Erebor Helms_Deep Isengard Minas_Morgul Minas_Tirith Rivendell CarnDum Fornost
		
	End
End

LivingWorldVictoryType
	DisplayGameType 	= LWScenario:WOTRGameType003		
									
									
	DisplayObjectives 	= LWScenario:WOTRObjectives003		
	DisplayVictoriousText	= LWScenario:WOTRGenericWin001
	DisplayDefeatedText	= LWScenario:WOTRGenericLose001
	
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

LivingWorldVictoryType
	DisplayGameType 	= LWScenario:WOTRGameType003		
									
									
	DisplayObjectives 	= LWScenario:WOTRObjectives004		
	DisplayVictoriousText	= LWScenario:WOTRGenericWin001
	DisplayDefeatedText	= LWScenario:WOTRGenericLose001

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
		NumControlledRegionsGreaterOrEqualTo = 30
	End
End


LivingWorldVictoryType
	DisplayGameType 	= LWScenario:WOTRGameType003		
									
									
	DisplayObjectives 	= LWScenario:WOTRObjectives007		
	DisplayVictoriousText	= LWScenario:WOTRGenericWin001
	DisplayDefeatedText	= LWScenario:WOTRGenericLose001

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
		NumControlledRegionsGreaterOrEqualTo = 40
	End
End

LivingWorldVictoryType
	DisplayGameType 	= LWScenario:WOTRGameType003		
									
									
	DisplayObjectives 	= LWScenario:WOTRObjectives005		
	DisplayObjectives 	= LWScenario:WOTRObjectives005
	DisplayVictoriousText	= LWScenario:WOTRGenericWin001
	DisplayDefeatedText	= LWScenario:WOTRGenericLose001

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
		NumControlledRegionsGreaterOrEqualTo = 52		
	End
End





















