    Behavior = AutoHealBehavior ModuleTag_AusdauerHealing
        StartsActive          = No
        TriggeredBy           = Upgrade_OriAusdauer
        ConflictsWith         = Upgrade_OriSchicksal; L00BE9600: List of Upgrades //May not have these upgrades  
        HealingAmount         = 15
        HealingDelay          = ELVEN_GIFT_REGEN_DELAY
        StartHealingDelay     = HERO_HEAL_DELAY
        HealOnlyIfNotInCombat = Yes
    End

    Behavior = AutoHealBehavior ModuleTag_SchicksalHealing
        StartsActive          = No
        TriggeredBy           = Upgrade_OriSchicksal
        ConflictsWith         = Upgrade_OriAusdauer; L00BE9600: List of Upgrades //May not have these upgrades  
        HealingAmount         = 5
        HealingDelay          = ELVEN_GIFT_REGEN_DELAY
        StartHealingDelay     = 1000
        HealOnlyIfNotInCombat = No
    End

    Behavior = AutoHealBehavior ModuleTag_SchicksalAusdauerHealing
        StartsActive          = No
        TriggeredBy           = Upgrade_OriSchicksal Upgrade_OriAusdauer
        RequiresAllTriggers   = Yes        
        HealingAmount         = 25
        HealingDelay          = ELVEN_GIFT_REGEN_DELAY
        StartHealingDelay     = 1000
        HealOnlyIfNotInCombat = No
    End