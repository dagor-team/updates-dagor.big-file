
    Behavior = AttributeModifierUpgrade ModuleTag_Ehre
        TriggeredBy       = Upgrade_ZwergenschmiedEhre
        AttributeModifier = SchmiedEhreBonus
    End

    Behavior = AttributeModifierUpgrade ModuleTag_Ruhm
        TriggeredBy       = Upgrade_ZwergenschmiedRuhm
        AttributeModifier = SchmiedRuhmBonus
    End

    Behavior = AttributeModifierUpgrade ModuleTag_Schutz
        TriggeredBy       = Upgrade_ZwergenschmiedSchutz
        AttributeModifier = SchmiedSchutzBonus
    End

    Behavior = PassiveAreaEffectBehavior ModuleTag_SplashOfHealingWater_Rune
        EffectRadius         = 120
        PingDelay            = 1000
        HealPercentPerSecond = 0.5%
        AllowFilter          = ANY -HERO +INFANTRY -STRUCTURE -MACHINE SAME_PLAYER
        HealFX               = FX_SpellHealUnitHealBuff
        UpgradeRequired = Upgrade_ZwergenschmiedReichtum ;SUB_L006D4C30:String (Upgrade)  
        NonStackable = Yes
    End

    Behavior = BannerCarrierUpdate Runesreplentish1UpdateModuleTag
        IdleSpawnRate            = 5000
        UnitSpawnFX              = FX_BannerCarrierSpawnUnit
        ReplenishNearbyHorde     = Yes
        ReplenishAllNearbyHordes = Yes
        ScanHordeDistance        = GONDOR_WELL_AOE_RADIUS
        UpgradeRequired = Upgrade_ZwergenschmiedReichtum
    End

    Behavior = DoCommandUpgrade Module_DoCommandUpgrade1
        TriggeredBy                     = Upgrade_Level_1
        GetUpgradeCommandButtonName     = Command_PurchaseUpgradeSchmiedSchutz
    End

    Behavior = DoCommandUpgrade Module_DoCommandUpgrade2
        TriggeredBy                     = Upgrade_Level_2
        GetUpgradeCommandButtonName     = Command_PurchaseUpgradeSchmiedReichtum
    End

    Behavior = DoCommandUpgrade Module_DoCommandUpgrade3
        TriggeredBy                     = Upgrade_Level_3
        GetUpgradeCommandButtonName     = Command_PurchaseUpgradeSchmiedRuhm
    End

    Behavior = DoCommandUpgrade Module_DoCommandUpgrade4
        TriggeredBy                     = Upgrade_Level_4
        GetUpgradeCommandButtonName     = Command_PurchaseUpgradeSchmiedEhre
    End



    Behavior = StatusBitsUpgrade ModuleTag_ProductionLegality6
        TriggeredBy   = Upgrade_ZwergenschmiedReichtum
    End

    Behavior = StatusBitsUpgrade ModuleTag_ProductionLegality7
        TriggeredBy   = Upgrade_ZwergenschmiedEhre
    End

    Behavior = StatusBitsUpgrade ModuleTag_ProductionLegality8
        TriggeredBy   = Upgrade_ZwergenschmiedRuhm
    End

    Behavior = StatusBitsUpgrade ModuleTag_ProductionLegality9
        TriggeredBy   = Upgrade_ZwergenschmiedSchutz
    End


