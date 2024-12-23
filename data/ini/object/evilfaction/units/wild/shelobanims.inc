
        IdleAnimationState
            Animation                = IDLA
                AnimationName        = MUShelob_IDLA
                AnimationMode        = ONCE
            End
        End

    AnimationState                        = CLIMBING
        StateName                        = STATE_Climbing
        Animation                        = Climbing
            AnimationName                = MUShelob_WALB
            AnimationMode                = LOOP
            AnimationBlendTime            = 15
        End
        BeginScript
            Prev = CurDrawablePrevAnimationState()
            if Prev == "STATE_Running"  then CurDrawableSetTransitionAnimState("Trans_RunningToClimbing") return end
        EndScript
    End
    TransitionState = Trans_RunningToClimbing
        Animation = Transition
            AnimationName = MUShelob_WALA
            AnimationMode = ONCE
        End
    End
    AnimationState                        = RAPPELLING
        StateName                        = STATE_Rappelling
        Animation                        = Rapelling
            AnimationName                = MUShelob_WALD
            AnimationMode                = LOOP
            AnimationBlendTime            = 15
        End
        BeginScript
            Prev = CurDrawablePrevAnimationState()
            if Prev == "STATE_Running"  then CurDrawableSetTransitionAnimState("Trans_RunningToRappelling") return end
        EndScript
    End
    TransitionState = Trans_RunningToRappelling
        Animation = Transition
            AnimationName = MUShelob_WALD
            AnimationMode = ONCE
        End
    End
    TransitionState = Trans_ClimbingToRunning
        Animation = Transition
            AnimationName = MUShelob_WALC
            AnimationMode = ONCE
        End
    End
    TransitionState = Trans_RappellingToRunning
        Animation = Transition
            AnimationName = MUShelob_WALE
            AnimationMode = ONCE
        End
    End



        AnimationState        = STUNNED_FLAILING
            Animation           = StunFlail
                AnimationName     = MUShelob_FLYA
                AnimationMode      = LOOP
            End
            Flags               = RANDOMSTART
        End

        AnimationState        = STUNNED
            Animation           = Stun
                AnimationName     = MUShelob_LNDA
                AnimationMode      = ONCE
            End
        End

        AnimationState        = STUNNED_STANDING_UP
            Animation           = Stun
                AnimationName     = MUShelob_GTPA
                AnimationMode      = ONCE
            End
        End


        AnimationState                = DYING DEATH_1
            Animation                = DIEA
                AnimationName        = MUShelob_DIEA
                AnimationMode        = ONCE
            End
        End

        AnimationState                = DYING DEATH_2
            Animation                = DIEA
                AnimationName        = MUShelob_IDLA
                AnimationMode        = LOOP
            End
        End

        AnimationState            = SPECIAL_WEAPON_TWO
            Animation
                AnimationName    = MUShelob_ATKC
                AnimationMode    = ONCE
            End

        End


        AnimationState                = TURN_LEFT
            StateName                = Turn
            Animation                = Walk
                AnimationName        = MUShelob_TRNL
                AnimationMode        = LOOP
            End
        End

        AnimationState                = TURN_RIGHT
            StateName                = Turn
            Animation                = Walk
                AnimationName        = MUShelob_TRNR
                AnimationMode        = LOOP
            End
        End

        AnimationState                = MOVING BACKING_UP
            Animation                = BAKA
                AnimationName        = MUShelob_BAKA
                AnimationMode        = LOOP
            End
            Flags                    = RANDOMSTART
        End

        AnimationState                =    MOVING ATTACKING
            Animation                =    RUNA
                AnimationName        =    MUShelob_RUNA
                AnimationMode        =    LOOP
                Distance            =    21
            End
        End
        AnimationState                =    MOVING
            StateName                = STATE_Running
            Animation                =    WLKA
                AnimationName        =    MUShelob_WLKA
                AnimationMode        =    LOOP
                Distance            =    21
            End

            BeginScript
                Prev = CurDrawablePrevAnimationState()
                if Prev == "STATE_Climbing"  then CurDrawableSetTransitionAnimState("Trans_ClimbingToRunning") return end
                if Prev == "STATE_Rappelling"  then CurDrawableSetTransitionAnimState("Trans_RappellingToRunning") return end
            EndScript


        End


        AnimationState                = UNPACKING PACKING_TYPE_3
            Animation
                AnimationName        = MUShelob_TUNA
                AnimationMode        = ONCE
            End
            FXEvent    = Frame:15    Name: FX_ShelobDigA
        End
        AnimationState                = PACKING PACKING_TYPE_3
            Animation
                AnimationName        = MUShelob_TUNB
                AnimationMode        = ONCE
            End
            FXEvent    = Frame:10    Name: FX_ShelobDigB
        End


        AnimationState                = SPECIAL_WEAPON_ONE
            Animation
                AnimationName            = MUShelob_SPCA
                AnimationMode            = ONCE
            End
        End

        AnimationState                = SPECIAL_WEAPON_THREE
            Animation
                AnimationName            = MUShelob_WEBB
                AnimationMode            = ONCE
            End
        End

        AnimationState = WEAPONSET_HERO_MODE
            StateName = Idle
            Animation                = IDLA
                AnimationName        = MUShelob_WEBB
                AnimationMode        = ONCE
            End
        End



        AnimationState                = FIRING_OR_PREATTACK_A
            Animation                = ATKA
                AnimationName        = MUShelob_ATKA
                AnimationMode        = ONCE
            End
        End

        AnimationState                =    SELECTED
            Animation           = IDLA
                AnimationName     = MUShelob_IDLA
                AnimationMode     = ONCE
                AnimationPriority = 1
            End
            Animation           = IDLA
                AnimationName     = MUShelob_IDLA
                AnimationMode     = ONCE
                AnimationPriority = 1
            End
            Animation                =    AtAttention
                AnimationName        =    MUShelob_ATNA
                AnimationMode        =    ONCE
            End
            Flags                    = RESTART_ANIM_WHEN_COMPLETE
        End


        AnimationState = HIT_REACTION HIT_LEVEL_1
            Animation = Hit_Level_1_a
                AnimationName = MUShelob_HITA
                AnimationMode = ONCE
            End
        End