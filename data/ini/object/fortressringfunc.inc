    Behavior = FXListDie ModuleTag_AnnounceWeLostTheRing
        DeathFX               = AnnounceFortressDeathLostRingFX
    End

    Behavior = CreateObjectDie ModuleTag_DropTheRing
        CreationList          = OCL_TheOneRing
        UpgradeRequired       = Upgrade_RingHero Upgrade_FortressRingHero
    End
	
    Behavior = CreateObjectDie ModuleTag_DropTheRing2
        CreationList          = OCL_TheOneRing
        UpgradeRequired       = Upgrade_SauronSilmarilArrive
    End

    Behavior = ModelConditionUpgrade ModuleTag_ForFX
        TriggeredBy           = Upgrade_RingHero Upgrade_FortressRingHero
        RequiresAllTriggers   = Yes
        AddConditionFlags     = ONE_RING
    End
	
    Behavior = ModelConditionUpgrade ModuleTag_ForFX2
        TriggeredBy            	= Upgrade_SauronSilmarilArrive
        RequiresAllTriggers    	= Yes
        AddConditionFlags      	= ONE_RING
    End

    Draw = W3DScriptedModelDraw ModuleTag_RingFX
            DefaultModelConditionState
                  Model = None
            End

        ModelConditionState = ONE_RING UPGRADE_IVORY_TOWER
            Model = exsileffectf
            Shadow                       = SHADOW_ADDITIVE_DECAL_DYNAMIC
            ShadowSizeX                  = 400
            ShadowSizeY                  = 400
            ShadowTexture                = EXGandalfGlow
            ShadowOpacityStart           = 0
            ShadowOpacityFadeInTime      = 1000
            ShadowOpacityPeak            = 255
            ShadowOpacityFadeOutTime     = 1000
            ShadowOpacityEnd             = 0
            ShadowOverrideLODVisibility  = Yes
        End

        ModelConditionState = ONE_RING
            Model = exsileffect
            Shadow                       = SHADOW_ADDITIVE_DECAL_DYNAMIC
            ShadowSizeX                  = 400
            ShadowSizeY                  = 400
            ShadowTexture                = EXGandalfGlow
            ShadowOpacityStart           = 0
            ShadowOpacityFadeInTime      = 1000
            ShadowOpacityPeak            = 255
            ShadowOpacityFadeOutTime     = 1000
            ShadowOpacityEnd             = 0
            ShadowOverrideLODVisibility  = Yes
        End

        IdleAnimationState
            Animation
                AnimationName = EXSILEFFECT.EXSILEFFECT
                AnimationMode = LOOP
                AnimationSpeedFactorRange = 0.35 0.35
            End
        End
    End

    Behavior = CastleUpgrade ModuleTag_PassOutNumenorUpgradeNew1
        TriggeredBy    = Upgrade_AngmarGefalleneDunedainTrigger
        Upgrade        = Upgrade_AngmarGefalleneDunedain
    End

    Behavior = CastleUpgrade ModuleTag_PassOutNumenorUpgradeNew2
        TriggeredBy    = Upgrade_AngmarSchwarzeGardeTrigger
        Upgrade        = Upgrade_AngmarSchwarzeGarde
    End

    Behavior = CastleUpgrade ModuleTag_PassOutNumenorUpgradeNew3
        TriggeredBy    = Upgrade_AngmarHexerdesZwielichtsTrigger
        Upgrade        = Upgrade_AngmarHexerdesZwielichts
    End

    Behavior = CastleUpgrade ModuleTag_PassOutNumenorUpgradeNew4
        TriggeredBy    = Upgrade_AngmarDieVerdammtenTrigger
        Upgrade        = Upgrade_AngmarDieVerdammten
    End

    Behavior = StatusBitsUpgrade ModuleTag_ProductionLegalityArkenStone
        TriggeredBy 	= Upgrade_SmaugArkenStone
    End
	
    Behavior = CastleUpgrade ModuleTag_PassOutAufmarschUpgrade
        TriggeredBy    = Upgrade_IsengardAufmarschTrigger
        Upgrade        = Upgrade_IsengardAufmarsch
    End