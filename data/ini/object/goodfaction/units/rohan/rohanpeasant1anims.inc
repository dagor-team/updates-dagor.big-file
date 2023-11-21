

        AnimationState                        = PASSENGER
            Animation                        = FLLA
                AnimationName                = RUPsnt_1_FLLA
                AnimationMode                = LOOP
            End
        End

        AnimationState        = THROWN_PROJECTILE
            Animation           = FLYA
                AnimationName     = RUPsnt_1_FLYA
                AnimationMode     = LOOP
            End
        End

        AnimationState                        = FREEFALL
            Animation                        = FLYA
                AnimationName                = RUPsnt_1_FLYA
                AnimationMode                = LOOP
                AnimationSpeedFactorRange    = 0.7    0.7
                AnimationBlendTime            = 10
            End
        End

        AnimationState        = STUNNED_FLAILING
            Animation           = FLYA
                AnimationName     = RUPsnt_1_FLYA
                AnimationMode      = LOOP
            End
            Flags               = RANDOMSTART
        End

        AnimationState                        = DYING SPLATTED DEATH_1
            Animation                        = LNDA
                AnimationName                = RUPsnt_1_LNDA
                AnimationMode                = ONCE
            End
        End

        AnimationState        = DYING DEATH_1
            Animation           = DIEA
                AnimationName     = RUPsnt_1_DIEA
                AnimationMode     = ONCE
            End
            Animation           = DIEB
                AnimationName     = RUPsnt_1_DIEB
                AnimationMode     = ONCE
            End
        End


        AnimationState          = DYING DEATH_2
            Animation           = ByeBye
                AnimationName     = RUPsnt_1_IDLA
                AnimationMode     = LOOP
            End
        End


        AnimationState        = STUNNED_STANDING_UP
            Animation           = GTPA
                AnimationName     = RUPsnt_1_GTPA
                AnimationMode     = ONCE
                AnimationSpeedFactorRange = 1.5 1.5
            End

        End

        AnimationState        = STUNNED
            Animation           = LNDA
                AnimationName     = RUPsnt_1_LNDA
                AnimationMode     = ONCE
            End
        End

        AnimationState        = MOVING FIRING_OR_PREATTACK_A
            ShareAnimation        = Yes
            Animation           = RunAndFire
                AnimationName       = RUPsnt_1_ATRA
                AnimationMode       = LOOP
            End
            Flags               = RANDOMSTART
        End




        AnimationState                =    FIRING_OR_PREATTACK_A
            Animation
                AnimationName        =    RUPsnt_1_ATKA
                AnimationMode        =    LOOP

            End
            Animation
                AnimationName        =    RUPsnt_1_ATKB
                AnimationMode        =    LOOP

            End
        End




        AnimationState                = MOVING BACKING_UP
            Animation                = BAKA
                AnimationName        = RUPsnt_1_BAKA
                AnimationMode        = LOOP
            End

        End

        AnimationState                = MOVING WANDER
            Animation                = WLKA
                AnimationName        = RUPsnt_1_WLKA
                AnimationMode        = LOOP
            End
        End

        AnimationState                = MOVING
            Animation                = RUNA
                AnimationName        = RUPsnt_1_RUNA
                AnimationMode        = LOOP

            End
            Animation                = RUNC
                AnimationName        = RUPsnt_1_RUNC
                AnimationMode        = LOOP

            End
            Flags                    = RANDOMSTART
            ParticleSysBone            = None InfantryDustTrails
        End


        AnimationState = ACTIVELY_CONSTRUCTING DEPLOYED
            Animation                =    Stand
                AnimationName        =    RUPsnt_1_IDLA
                AnimationMode        =    LOOP
            End
        End


        AnimationState                = ACTIVELY_CONSTRUCTING
            Animation                = WRKA
                AnimationName        = RUPsnt_1_WRKA
                AnimationMode        = ONCE
            End
            Animation                = WRKD
                AnimationName        = RUPsnt_1_WRKD
                AnimationMode        = ONCE
            End
            Flags                    = RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
        End



        AnimationState = HIT_REACTION
            Animation = Hit_Level_1_a
                AnimationName = RUPsnt_1_HITA
                AnimationMode = ONCE
            End
        End







        AnimationState                = EMOTION_POINTING
            Animation                = Pointing1
                AnimationName        = RUPsnt_1_PNTA
                AnimationMode        = LOOP
                AnimationSpeedFactorRange = 0.75 1.25
            End
        End


        AnimationState                = EMOTION_AFRAID
            Animation                = &&FEAR&&
                AnimationName        = RUPsnt_1_FERA
                AnimationMode        = LOOP
            End
        End

        AnimationState                = EMOTION_TAUNTING
            Animation                = TNTA
                AnimationName        = RUPsnt_1_TNTA
                AnimationMode        = ONCE
            End
            Animation                = TNTB
                AnimationName        = RUPsnt_1_TNTB
                AnimationMode        = ONCE
            End
            Flags                    = RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
        End


            AnimationState                = EMOTION_CELEBRATING
                Animation                = CHRA
                    AnimationName        = RUPsnt_1_CHRA
                    AnimationMode        = ONCE
                End
                Animation                = CHRB
                    AnimationName        = RUPsnt_1_CHRB
                    AnimationMode        = ONCE
                End
                Flags                    = RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
            End

            AnimationState                = EMOTION_ALERT
                StateName                = STATE_Alert
                Animation                = &&ALERT&&
                    AnimationName        = RUPsnt_1_IDLA
                    AnimationMode        = LOOP
                End
            End

        AnimationState                    = RAISING_FLAG
                Animation                = CHRA
                    AnimationName        = RUPsnt_1_CHRA
                    AnimationMode        = ONCE
                End
                Animation                = CHRB
                    AnimationName        = RUPsnt_1_CHRB
                    AnimationMode        = ONCE
                End
            Flags                        =    RESTART_ANIM_WHEN_COMPLETE
        End




        AnimationState                =    SELECTED
            StateName                =    STATE_Selected
            SimilarRestart            =   Yes
            Animation                =    ATNB
                AnimationName        =    RUPsnt_1_ATNB
                AnimationMode        =    LOOP
            End
            BeginScript
                Prev = CurDrawablePrevAnimationState()
                if Prev == "STATE_Idle" then CurDrawableSetTransitionAnimState("TRANS_IdleToSelected") end
                if Prev == "STATE_Selected" then CurDrawableSetTransitionAnimState("TRANS_IdleToSelected") end
            EndScript
        End


        IdleAnimationState
            StateName            =    STATE_Idle
            Animation           = IDLA
                AnimationName     = RUPsnt_1_IDLA
                AnimationMode     = ONCE
                AnimationPriority = 20
            End

            Animation           = IDLC
                AnimationName     = RUPsnt_1_IDLC
                AnimationMode     = ONCE
                AnimationPriority = 1
            End

            Animation           = IDLD
                AnimationName     = RUPsnt_1_IDLD
                AnimationMode     = ONCE
                AnimationPriority = 2
            End

            Animation           = IDLE
                AnimationName     = RUPsnt_1_IDLE
                AnimationMode     = ONCE
                AnimationPriority = 1
            End

            Animation           = IDLF
                AnimationName     = RUPsnt_1_IDLF
                AnimationMode     = ONCE
                AnimationPriority = 1
            End

            Animation           = IDLG
                AnimationName     = RUPsnt_1_IDLG
                AnimationMode     = ONCE
                AnimationPriority = 1
            End

            BeginScript
                Prev = CurDrawablePrevAnimationState()
                if Prev == "STATE_Selected" then CurDrawableSetTransitionAnimState("TRANS_SelectedToIdle") end
            EndScript
        End



        TransitionState       = TRANS_SelectedToIdle
            Animation           = ATNC
                AnimationName     = RUPsnt_1_ATNC
                AnimationMode     = ONCE
                AnimationSpeedFactorRange = 0.7 1.2
            End
        End

        TransitionState                =    TRANS_IdleToSelected
            Animation                =    ATNA
                AnimationName        =    RUPsnt_1_ATNA
                AnimationMode        =    ONCE
                AnimationSpeedFactorRange = 0.7 1.2
            End
        End
