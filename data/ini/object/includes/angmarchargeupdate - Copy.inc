	
	
	Behavior = SubObjectsUpgrade ModuleTag_HideGlow
        TriggeredBy             = Upgrade_AllFactionUpgrade
        HideSubObjects          = GLOW01 GLOW02 GLOW03 GLOW04 GLOW05
    End

    Behavior = SubObjectsUpgrade ModuleTag_ShowRune1
        TriggeredBy             = Upgrade_Level_1
        ShowSubObjects          = GLOW01
    End

    Behavior = SubObjectsUpgrade ModuleTag_ShowRune2
        TriggeredBy             = Upgrade_Level_2
        ShowSubObjects          = GLOW02
    End

    Behavior = SubObjectsUpgrade ModuleTag_ShowRune3
        TriggeredBy             = Upgrade_Level_3
        ShowSubObjects          = GLOW03
    End

    Behavior = SubObjectsUpgrade ModuleTag_ShowRune4
        TriggeredBy             = Upgrade_Level_4
        ShowSubObjects          = GLOW04
    End

    Behavior = SubObjectsUpgrade ModuleTag_ShowRune5
        TriggeredBy             = Upgrade_Level_5
        ShowSubObjects          = GLOW05
    End

    Behavior = PassiveAreaEffectBehavior ModuleTag_MysticFountainsHealing
        UpgradeRequired         = Upgrade_Level_1
        EffectRadius            = 180
        PingDelay               = 2000
        HealPercentPerSecond    = 2%
        AllowFilter             = ANY +INFANTRY +CAVALRY +HERO -MACHINE +MONSTER -IMMOBILE +DOZER
        NonStackable            = Yes
        HealFX                  = FX_SpellHealUnitHealBuff
    End

    Behavior = PassiveAreaEffectBehavior ModuleTag_FeelGoodHero
        UpgradeRequired         = Upgrade_Level_3
        EffectRadius            = 180
        PingDelay               = 2000
        ModifierName            = RuneInspirationLeadership
        AllowFilter             = GENERIC_BUFF_RECIPIENT_OBJECT_FILTER
    End

    Behavior = ObjectCreationUpgrade CreateTheEffecktSchrecken
        TriggeredBy             = Upgrade_Level_5
        Delay                   = 0.0
        ThingToSpawn            = DwarvenRuneSchrecken
        FadeInTime              = 200
    End


    Behavior = AttributeModifierUpgrade ModuleTag_Unantastbrakeit
        TriggeredBy             = Upgrade_Level_4
        AttributeModifier       = DwarvenRuneUnantastbarkeit
    End

    Behavior = AttributeModifierUpgrade ModuleTag_Produktivitat
        TriggeredBy             = Upgrade_Level_2
        AttributeModifier       = DwarvenRuneProduktivitat
    End