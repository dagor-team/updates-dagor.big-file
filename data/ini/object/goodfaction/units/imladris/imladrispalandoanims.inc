
        IdleAnimationState
            Animation
                AnimationName        = EUArwen_IDLB
                AnimationMode        = ONCE
                AnimationPriority   = 10
            End
            Animation
                AnimationName        = EUArwen_IDLC
                AnimationMode        = ONCE
                AnimationPriority   = 1
            End
            Animation
                AnimationName        = EUArwen_IDLE
                AnimationMode        = ONCE
                AnimationPriority   = 1
            End
            StateName                = Idle
            BeginScript
                Prev = CurDrawablePrevAnimationState()
                if Prev == "Selected" then CurDrawableSetTransitionAnimState("TRANS_Selected_To_Idle") end
            EndScript

        End


        AnimationState            = STUNNED_FLAILING
            Flags               = RANDOMSTART
            Animation
                AnimationName   = EUArwen_FLYA
                AnimationMode   = LOOP
                AnimationSpeedFactorRange    = 0.4 0.6
            End
        End

        AnimationState                =    DYING SPLATTED
            Animation
                AnimationName        =    EUArwen_LNDA
                AnimationMode        =    ONCE
            End
        End
        AnimationState                =    DYING
            Animation
                AnimationName        =    EUArwen_DTHA
                AnimationMode        =    ONCE
            End
        End

        AnimationState            = STUNNED_STANDING_UP
            Animation
                AnimationName   = EUArwen_GTPA
                AnimationMode   = ONCE
            End
        End
        AnimationState            = STUNNED
            Animation
                AnimationName   = EUArwen_LNDA
                AnimationMode   = ONCE
            End
        End

        AnimationState                        = PARALYZED
            Animation
                AnimationName                = EUArwen_IDLA
                AnimationMode                = LOOP
            End
        End


        AnimationState                =    MOVING ATTACKING
            Flags                    =    RANDOMSTART
            Animation
                AnimationName        =    EUArwen_RUNA
                AnimationMode        =    LOOP
            End
        End


        AnimationState                =    MOVING
            Animation
                AnimationName        =    EUArwen_RUNA
                AnimationMode        =    LOOP
            End
        End


        AnimationState          =    PACKING_TYPE_1
            StateName          =    Attacking
            Animation
                AnimationName =    EUArwen_SPCA
                AnimationMode =    ONCE
            End
        End

        AnimationState                = SPECIAL_WEAPON_ONE
            Animation
                AnimationName        = EUArwen_SPCC
                AnimationMode        = ONCE
                AnimationBlendTime    = 30
            End
        End

        AnimationState                = SPECIAL_WEAPON_TWO
            Animation
                AnimationName        = EUArwen_SPCC
                AnimationMode        = ONCE
                AnimationBlendTime    = 30
            End
        End

        AnimationState                = SPECIAL_WEAPON_THREE
            Animation
                AnimationName        = EUArwen_SPCC
                AnimationMode        = ONCE
                AnimationBlendTime    = 30
            End
        End

        AnimationState                = USER_1
            Animation
                AnimationName        = EUArwen_SPCA
                AnimationMode        = ONCE
                AnimationBlendTime    = 30
            End
        End

        AnimationState                = USER_2
            Animation
                AnimationName        = EUArwen_SPCC
                AnimationMode        = ONCE
                AnimationBlendTime    = 30
            End
        End

        AnimationState                =    FIRING_OR_PREATTACK_A
            Animation
                AnimationName        =    EUArwen_ATKA
                AnimationMode        =    ONCE
                UseWeaponTiming        =    Yes
            End
            Animation
                AnimationName        =    EUArwen_ATKB
                AnimationMode        =    ONCE
                UseWeaponTiming        =    Yes
            End
            Animation
                AnimationName        =    EUArwen_ATKC
                AnimationMode        =    ONCE
                UseWeaponTiming        =    Yes
            End
        End

        AnimationState        = ATTACKING
            Animation
                AnimationName     = EUArwen_IDLA
                AnimationMode     = LOOP
            End
        End

        AnimationState            = HIT_REACTION
            Animation
                AnimationName    = EUArwen_HITA
                AnimationMode    = ONCE
            End
        End

        TransitionState                    =    TRANS_Idle_to_Selected
            Animation
                AnimationName            =    EUArwen_ATNA
                AnimationMode            =    ONCE
            End
        End

        TransitionState                    =    TRANS_Selected_To_Idle
            Animation
                AnimationName            =    EUArwen_ATNC
                AnimationMode            =    ONCE
            End
        End

        AnimationState                = LEVELED
            Animation
                AnimationName        = EUArwen_LVLA
                AnimationMode        = ONCE
            End
        End

        AnimationState                    = EMOTION_TAUNTING
            Animation
                AnimationName            = EUArwen_TNTA
                AnimationMode            = ONCE
            End
            Animation
                AnimationName            = EUArwen_SPCB
                AnimationMode            = ONCE
            End
            Flags                        = RESTART_ANIM_WHEN_COMPLETE
        End

        AnimationState                =    EMOTION_CELEBRATING
            Animation
                AnimationName        =    EUArwen_CHRA
                AnimationMode        =    LOOP
            End
        End

        AnimationState                    = EMOTION_ALERT EMOTION_MORALE_HIGH
            Animation
                AnimationName            =  EUArwen_TNTA
                AnimationMode            = ONCE
            End
            Animation
                AnimationName            =  EUArwen_TNTB
                AnimationMode            = ONCE
            End
            Flags                        = RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
        End


        AnimationState                =    RAISING_FLAG
            Animation
                AnimationName        =    EUArwen_CHRA
                AnimationMode        =    LOOP
            End
        End

        AnimationState                =    SELECTED
            StateName                =    Selected
            SimilarRestart            =   Yes
            Animation
                AnimationName        =    EUArwen_ATNB
                AnimationMode        =    LOOP
            End
            BeginScript
                Prev = CurDrawablePrevAnimationState()
                if Prev == "Idle" then CurDrawableSetTransitionAnimState("TRANS_Idle_to_Selected") end
            EndScript
        End

        AnimationState        = EMOTION_ALERT
            Animation
                AnimationName     = EUArwen_IDLA
                AnimationMode     = LOOP
            End
        End