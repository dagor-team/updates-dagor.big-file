
        IdleAnimationState
            StateName = Idle
            Animation = IDLB
                AnimationName       = IUSaruman_IDLB
                AnimationMode       = ONCE
                AnimationPriority   = 20
            End

            Animation = IDLC
                AnimationName       = IUSaruman_IDLC
                AnimationMode       = ONCE
                AnimationPriority   = 3
            End

            Animation = IDLD
                AnimationName       = IUSaruman_IDLD
                AnimationMode       = ONCE
                AnimationPriority   = 1
            End

            BeginScript
                Prev = CurDrawablePrevAnimationState()
                if Prev == "Selected" then CurDrawableSetTransitionAnimState("TRANS_Selected_To_Idle") end
            EndScript
        End

        AnimationState        = STUNNED_FLAILING
            Flags               = RANDOMSTART
            Animation           = FLYA
                AnimationName     = IUSaruman_FLYA
                AnimationMode     = LOOP
            End
        End


        AnimationState            = DYING BURNINGDEATH
            Animation
                AnimationName    = IUSaruman_DIEB
                AnimationMode    = ONCE
                AnimationBlendTime = 10
            End
        End

        AnimationState        = DYING SPLATTED
            Animation
                AnimationName     = IUSaruman_LNDA
                AnimationMode     = ONCE
            End
        End

        AnimationState        = DYING AFLAME
            Animation = DieAflame
                AnimationName     = IUSaruman_MFDA
                AnimationMode     = LOOP
            End
        End

        AnimationState        = DYING
            Animation = DieB
                AnimationName     = IUSaruman_DIEB
                AnimationMode     = ONCE
            End
        End

        AnimationState        = DYING DEATH_2
            Animation = ByeBye
                AnimationName     = IUSaruman_IDLA
                AnimationMode     = LOOP
            End
        End



        AnimationState        = STUNNED_STANDING_UP
            Animation
                AnimationName     = IUSaruman_GTPA
                AnimationMode     = ONCE
                AnimationSpeedFactorRange = 1.5 1.5
            End
        End
        AnimationState        = STUNNED
            Animation
                AnimationName     = IUSaruman_LNDA
                AnimationMode     = ONCE
            End
        End

        AnimationState            = BURNINGDEATH
            Animation
                AnimationName    = IUSaruman_MFDA
                AnimationMode    = LOOP
                Distance        = 50
            End
        End

        AnimationState                        = PARALYZED
            Animation
                AnimationName                = IUSaruman_IDLB
                AnimationMode                = LOOP
            End
        End

        AnimationState                = PACKING_TYPE_1
            StateName                = Luftstoﬂ
            Animation
                AnimationName        = IUSaruman_TNTA
                AnimationMode        = ONCE
                AnimationBlendTime  = 5
            End
        End

        AnimationState                = PACKING_TYPE_2
            StateName                = Nordwind
            Animation
                AnimationName        = IUSaruman_TNTB
                AnimationMode        = ONCE
            End

        End

        AnimationState                = PACKING_TYPE_3
            StateName                = Groﬂsturm
            Animation
                AnimationName        = IUSaruman_TNTB
                AnimationMode        = LOOP
                AnimationBlendTime  = 5
            End

        End




         AnimationState = MOVING FIRING_OR_PREATTACK_A
            Animation = TrotAndFire
                AnimationName = IUSaruman_ATRA
                AnimationMode = LOOP
            End
            Flags = RANDOMSTART

        End


         AnimationState                = MOVING USING_SPECIAL_ABILITY
             Flags                    = RANDOMSTART
             Animation                = IUSaruman_RUNB
                 AnimationName     = IUSaruman_RUNB
                 AnimationMode     = LOOP
             End
         End



         AnimationState            = MOVING BACKING_UP
            Animation            = BackingUp
                AnimationName    = IUSaruman_BAKA
                AnimationMode    = LOOP
            End
            Flags = RANDOMSTART
        End

        AnimationState        = MOVING ATTACKING
             Animation              = IUSaruman_RUNB
                 AnimationName     = IUSaruman_RUNB
                 AnimationMode     = LOOP
             End
        End

        AnimationState        = MOVING
             Animation                = IUSaruman_RUNA
                 AnimationName     = IUSaruman_RUNA
                 AnimationMode     = LOOP
             End
        End


        AnimationState          = SPECIAL_WEAPON_ONE
            Animation                = Throwing Fireball
                AnimationName        = IUSaruman_ATKB
                AnimationMode        = ONCE
            End
            FrameForPristineBonePositions = 27
        End


         AnimationState        =  SPECIAL_WEAPON_TWO
            StateName = Attacking
            Animation
                AnimationName       = IUSaruman_ATKB
                AnimationMode       = ONCE
            End
            FrameForPristineBonePositions = 27
        End


        AnimationState          = SPECIAL_WEAPON_THREE
            Animation                = Throwing Fireball
                AnimationName        = IUSaruman_TNTB
                AnimationMode        = ONCE
                UseWeaponTiming        =    Yes
            End
            FrameForPristineBonePositions = 48
            FXEvent    = Frame:6    Name: FX_SarumanWeiﬂerRatAtSelf
        End



        AnimationState        = FIRING_OR_PREATTACK_A
            Animation           = IUSaruman_ATKC
                AnimationName     = IUSaruman_SPCA
                AnimationMode     = ONCE
                UseWeaponTiming        =    Yes
            End
        End


        AnimationState = WAR_CHANT
            Animation = Chant
                AnimationName = IUSaruman_TNTB
                AnimationMode = LOOP
            End
        End

        AnimationState = EMOTION_TAUNTING
            Animation = Chant
                AnimationName = IUSaruman_TNTB
                AnimationMode = ONCE
            End
            Flags                        = RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
        End

        AnimationState = EMOTION_CELEBRATING
            Animation = Chant
                AnimationName = IUSaruman_TNTB
                AnimationMode = ONCE
            End
            Flags                        = RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
        End


        AnimationState = HIT_REACTION
            Animation = Hit_Level_1_a
                AnimationName = IUSaruman_HITA
                AnimationMode = ONCE
            End
        End


        AnimationState        = ATTACKING
            Animation           = ALERT_1
                AnimationName     = IUSaruman_IDLA
                AnimationMode     = LOOP
            End
        End

        TransitionState                    =    TRANS_Idle_to_Selected
            Animation                    =    ATNA
                AnimationName            =    IUSaruman_ATNA
                AnimationMode            =    ONCE
            End
        End

        TransitionState                    =    TRANS_Selected_To_Idle
            Animation                    =    ATND
                AnimationName            =    IUSaruman_ATND
                AnimationMode            =    ONCE
            End
        End


        AnimationState        = LEVELED
            Animation = Yippee
                AnimationName       = IUSaruman_TNTA
                AnimationMode       = ONCE
            End
        End


        AnimationState        = EMOTION_ALERT
            Animation           = ALERT_1
                AnimationName     = IUSaruman_IDLA
                AnimationMode     = LOOP
            End
        End

        AnimationState = RAISING_FLAG
            Animation = Chant
                AnimationName = IUSaruman_TNTA
                AnimationMode = ONCE
            End
            Animation = Chant
                AnimationName = IUSaruman_TNTB
                AnimationMode = ONCE
            End
            Flags                        = RESTART_ANIM_WHEN_COMPLETE
        End

        AnimationState                =    SELECTED
            StateName                =    Selected
            SimilarRestart            =   Yes
            Animation                =    ATNB
                AnimationName        =    IUSaruman_ATNB
                AnimationMode        =    LOOP
                AnimationBlendTime  =   15
            End
            BeginScript
                Prev = CurDrawablePrevAnimationState()
                if Prev == "Idle" then CurDrawableSetTransitionAnimState("TRANS_Idle_to_Selected") end
            EndScript
        End