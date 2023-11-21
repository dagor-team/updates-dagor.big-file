    Behavior = ProductionUpdate ProductionUpdateModuleTag
	ProductionModifier
		RequiredUpgrade = Upgrade_ObjectUnderAIControl Upgrade_HardAISinglePlayer Upgrade_HardAIMultiPlayer Upgrade_BrutalAISinglePlayer Upgrade_BrutalAIMultiPlayer
		TimeMultiplier  = TIME_MULTIPLIER_AI_HEROES
		HeroRevive      = Yes
		ModifierFilter  = NONE +HERO
	End
	ProductionModifier
		RequiredUpgrade = Upgrade_ObjectUnderAIControl Upgrade_HardAISinglePlayer Upgrade_HardAIMultiPlayer Upgrade_BrutalAISinglePlayer Upgrade_BrutalAIMultiPlayer
		CostMultiplier  = COST_MULTIPLIER_AI_HEROES
		HeroPurchase    = Yes
		HeroRevive      = Yes
		ModifierFilter  = NONE +HERO
	End
        ProductionModifier
            RequiredUpgrade = Upgrade_MenFortressBanners
            CostMultiplier  = 0.80
            ModifierFilter  = NONE +MenPorter
        End
        ProductionModifier
            RequiredUpgrade = Upgrade_MenFortressBanners
            CostMultiplier  = 0.90
            TimeMultiplier  = 0.90
            HeroPurchase    = Yes
            ModifierFilter  = NONE +HERO
        End
	GiveNoXP   		= Yes
  	NumDoorAnimations       = 1
	DoorOpeningTime         = 3000
	DoorWaitOpenTime        = 3000
	DoorCloseTime           = 3000
    End

