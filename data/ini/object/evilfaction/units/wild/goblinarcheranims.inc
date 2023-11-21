
    AnimationState                        = CLIMBING
        StateName                        = STATE_Climbing
        Animation                        = Climbing
            AnimationName                = MUGobArch_WALB
            AnimationMode                = LOOP

            AnimationBlendTime            = 10
        End
        BeginScript
            Prev = CurDrawablePrevAnimationState()
            if Prev == "STATE_Running"  then CurDrawableSetTransitionAnimState("Trans_RunningToClimbing") return end

        EndScript
    End
    TransitionState = Trans_RunningToClimbing
        Animation = Transition
            AnimationName = MUGobArch_WALA
            AnimationMode = ONCE
        End
    End


    AnimationState                        = RAPPELLING
        StateName                        = STATE_Rappelling
        Animation                        = Rapelling
            AnimationName                = MUGobArch_WALE
            AnimationMode                = LOOP
            AnimationBlendTime            = 10
        End
        BeginScript
            Prev = CurDrawablePrevAnimationState()
            if Prev == "STATE_Running"  then CurDrawableSetTransitionAnimState("Trans_RunningToRappelling") return end

        EndScript
    End
    TransitionState = Trans_RunningToRappelling
        Animation = Transition
            AnimationName = MUGobArch_WALD
            AnimationMode = ONCE
        End
    End

    AnimationState                        = PASSENGER
        Animation                        = Wiggling
            AnimationName                = MUGobArch_FLLA
            AnimationMode                = LOOP
        End
    End

    AnimationState                        = THROWN_PROJECTILE
        Animation                        = Thrown
            AnimationName                = MUGobArch_FLYA
            AnimationMode                = LOOP
        End
        Animation                        = Thrown
            AnimationName                = MUGobArch_FLYB
            AnimationMode                = LOOP
        End
        Animation                        = Thrown
            AnimationName                = MUGobArch_FLYC
            AnimationMode                = LOOP
        End
    End


    AnimationState                        = FREEFALL
        Animation                        = Falling
            AnimationName                = MUGobArch_FLYA
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.5    0.5
            AnimationBlendTime            = 10
        End
        Animation                        = Falling
            AnimationName                = MUGobArch_FLYB
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.5    0.5
            AnimationBlendTime            = 10
        End
        Animation                        = Falling
            AnimationName                = MUGobArch_FLYC
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.5    0.5
            AnimationBlendTime            = 10
        End
    End

    AnimationState                        = STUNNED_FLAILING
         Animation                        = flying
            AnimationName                = MUGobArch_FLYB
            AnimationMode                = LOOP
            AnimationPriority            = 10
            AnimationSpeedFactorRange    = 0.4 0.6
        End
        Animation                        = ready_for_sweet_landing
            AnimationName                = MUGobArch_FLYA
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.4 0.6
        End
         Animation                        = flying
            AnimationName                = MUGobArch_FLYC
            AnimationMode                = LOOP
            AnimationPriority            = 10
            AnimationSpeedFactorRange    = 0.4 0.6
        End
        Flags                            = RANDOMSTART
    End

    AnimationState            = DYING BURNINGDEATH
        Animation
            AnimationName    = MUGobArch_DIEA
            AnimationMode    = ONCE
            AnimationBlendTime = 10
        End
        Animation
            AnimationName    = MUGobArch_DIEB
            AnimationMode    = ONCE
            AnimationBlendTime = 10
        End
        Animation
            AnimationName    = MUGobArch_DIEC
            AnimationMode    = ONCE
            AnimationBlendTime = 10
        End
    End

    AnimationState                        = DYING SPLATTED
        Animation                        = splat
            AnimationName                = MUGobArch_LNDB
            AnimationMode                = ONCE
        End
    End



    AnimationState                        = DYING AFLAME
        Animation                        = Flaming_Death
            AnimationName                = MUGobArch_MFDA
            AnimationMode                = ONCE
        End
    End

    AnimationState                        = DYING
        Animation                        = Dying_1
            AnimationName                = MUGobArch_DIEA
            AnimationMode                = ONCE
        End
        Animation                        = Dying_2
            AnimationName                = MUGobArch_DIEB
            AnimationMode                = ONCE
        End
        Animation                        = Dying_3
            AnimationName                = MUGobArch_DIEC
            AnimationMode                = ONCE
        End
        Animation                        = landb
            AnimationName                = MUGobArch_LNDB
            AnimationMode                = ONCE
        End
        Animation                        = landc
            AnimationName                = MUGobArch_LNDC
            AnimationMode                = ONCE
        End
        BeginScript
            Preva = CurDrawablePrevAnimation()
            if Preva == "ready_for_sweet_landing" then return "landc"
            elseif Preva == "flying" then return "landb"
            elseif GetClientRandomNumberReal(0,1) > 0.50 then return "Dying_1"
            else return "Dying_2" end
        EndScript
    End


    AnimationState                        = STUNNED_STANDING_UP
         Animation                        = standing_back_up
            AnimationName                = MUGobArch_GTPA
            AnimationMode                = ONCE
            AnimationSpeedFactorRange = 1.5 1.5
        End
        Animation                        = already_up
            AnimationName                = MUGobArch_IDLA
            AnimationMode                = ONCE
        End
        BeginScript
            if CurDrawablePrevAnimation() == "sweet_landing" then return "already_up" else return "standing_back_up" end
        EndScript
    End

    AnimationState                        = STUNNED
         Animation                        = splattered_on_ground
            AnimationName                = MUGobArch_LNDC
            AnimationMode                = ONCE
        End
        Animation                        = sweet_landing
            AnimationName                = MUGobArch_LNDA
            AnimationMode                = ONCE
        End
        BeginScript
            if CurDrawablePrevAnimation() == "ready_for_sweet_landing" then return "sweet_landing" else return "splattered_on_ground" end
        EndScript
    End

    AnimationState            = BURNINGDEATH
        Animation
            AnimationName    = MUGobArch_MFDA
            AnimationMode    = LOOP
            Distance        = 25
        End
    End

    AnimationState                        = PARALYZED
        Animation
            AnimationName                = MUGobArch_IDLA
            AnimationMode                = LOOP
        End
    End

    AnimationState                        = MOVING BACKING_UP
        Animation                        = BackingUp
            AnimationName                = MUGobArch_BAKA
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.9 1.1
        End
        Animation                        = BackingUp2
            AnimationName                = MUGobArch_BAKB
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.9 1.1
        End
        Animation                        = BackingUp3
            AnimationName                = MUGobArch_BAKC
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.9 1.1
        End
        Flags                            = RANDOMSTART
    End

    AnimationState                        = MOVING EMOTION_TERROR
        ShareAnimation                    = Yes
        Animation                        = Moving_1
            AnimationName                = MUGobArch_RUNA
            AnimationMode                = LOOP

            AnimationSpeedFactorRange    = 0.5 0.6
            Distance                    = 20
        End
        Animation                        = Moving_2
            AnimationName                = MUGobArch_RUNB
            AnimationMode                = LOOP

            AnimationSpeedFactorRange    = 0.5 0.6
            Distance                    = 20
        End
        Flags                            = RANDOMSTART

    End

     AnimationState                        = RAISING_FLAG
        Animation                        = CHRA
            AnimationName                = MUGobArch_CHRA
            AnimationMode                = LOOP
        End
    End


    AnimationState                        = MOVING
        ShareAnimation                    = Yes
        Animation                        = Moving_1
            AnimationName                = MUGobArch_RUNA
            AnimationMode                = LOOP

            AnimationSpeedFactorRange    = 0.5 0.6
            Distance                    = 20
        End
        Animation                        = Moving_2
            AnimationName                = MUGobArch_RUNB
            AnimationMode                = LOOP

            AnimationSpeedFactorRange    = 0.5 0.6
            Distance                    = 20
        End
        Flags                            = RANDOMSTART

        BeginScript
            Prev = CurDrawablePrevAnimationState()
            if Prev == "STATE_Climbing"  then CurDrawableSetTransitionAnimState("Trans_ClimbingToRunning") return end
            if Prev == "STATE_Rappelling"  then CurDrawableSetTransitionAnimState("Trans_RappellingToRunning") return end
        EndScript
    End

    TransitionState = Trans_ClimbingToRunning
        Animation = Transition
            AnimationName = MUGobArch_WALC
            AnimationMode = ONCE
        End
    End
    TransitionState = Trans_RappellingToRunning
        Animation = Transition
            AnimationName = MUGobArch_WALF
            AnimationMode = ONCE
        End
    End

    AnimationState                        = FIRING_OR_PREATTACK_B WEAPONSTATE_CLOSE_RANGE
        Animation                        = ATKB
            AnimationName                = MUGobArch_ATKB
            AnimationMode                = ONCE
            UseWeaponTiming                = Yes
        End

    End

    AnimationState                        = FIRING_OR_PREATTACK_B
        Animation                        = ATKB
            AnimationName                = MUGobArch_ATKB
            AnimationMode                = ONCE
            UseWeaponTiming                = Yes
        End

    End

    AnimationState                        = PREATTACK_A
        Animation                        = ReadyToDrawn
            AnimationName                = MUGobArch_ATKF1
            AnimationMode                = ONCE
            AnimationSpeedFactorRange    = 0.9 1.1

            AnimationBlendTime            = 0
        End
    End

    AnimationState                        = FIRING_OR_RELOADING_A
        Animation                        = LooseReloadDraw
            AnimationName                = MUGobArch_ATKF2
            AnimationMode                = ONCE

            AnimationBlendTime            = 0
        End
    End

    AnimationState                        = PREATTACK_C
        Animation                        = ReadyToDrawn
            AnimationName                = MUGobArch_ATKF1
            AnimationMode                = ONCE
            AnimationSpeedFactorRange    = 0.9 1.1

            AnimationBlendTime            = 0
        End
    End

    AnimationState                        = FIRING_OR_RELOADING_C
        Animation                        = LooseReloadDraw
            AnimationName                = MUGobArch_ATKF2
            AnimationMode                = ONCE

            AnimationBlendTime            = 0
        End
    End


    AnimationState    = SPECIAL_WEAPON_ONE
        Animation            = ATKA
            AnimationName    = MUGobArch_ATKA
            AnimationMode    = ONCE
        End
        FrameForPristineBonePositions    = 17
    End



    AnimationState                        = CONTINUOUS_FIRE_MEAN
        Animation                        = HangFrameWhileCoasting
            AnimationName                = MUGobArch_ATKF2
            AnimationMode                = MANUAL
        End
    End

    AnimationState                        = CONTINUOUS_FIRE_SLOW
        Animation                        = put_bow_away
            AnimationName                = MUGobArch_ATKF3
            AnimationMode                = Once
        End
    End



    AnimationState = HIT_REACTION HIT_LEVEL_1
        Animation = Hit_Level_1_a
            AnimationName = MUGobArch_HITA
            AnimationMode = ONCE
        End
    End

    AnimationState                        = WAR_CHANT
        Animation                        = Chant
            AnimationName                = MUGobArch_IDLA
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.9 1.1
        End
        Flags                            = RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
    End

    AnimationState                        = EMOTION_AFRAID
        Animation                        = FERA
            AnimationName                = MUGobArch_FERA
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.9 1.1
        End
        Animation                        = FERA
            AnimationName                = MUGobArch_FERB
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.9 1.1
        End
        Animation                        = FERA
            AnimationName                = MUGobArch_FERC
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.9 1.1
        End
        Flags                            = RANDOMSTART
    End
    AnimationState                        = EMOTION_TAUNTING
        Animation                        = TNTA
            AnimationName                = MUGobArch_TNTA
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.9 1.1
        End
        Animation                        = TNTB
            AnimationName                = MUGobArch_TNTB
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.9 1.1
        End
        Animation                        = TNTC
            AnimationName                = MUGobArch_TNTC
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.9 1.1
        End
    End
    AnimationState                        = EMOTION_POINTING
        Animation                        = Pointing1
            AnimationName                = MUGobArch_PNTA
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.9 1.1
        End
    End
    AnimationState                        = EMOTION_CELEBRATING
        Animation                        = CHRA
            AnimationName                = MUGobArch_CHRA
            AnimationMode                = LOOP
            AnimationSpeedFactorRange    = 0.9 1.1
        End
    End
    AnimationState                        = EMOTION_ALERT
        Animation                        = Alert
            AnimationName                = MUGobArch_IDLA
            AnimationMode                = LOOP
        End
    End

    IdleAnimationState
        StateName                        = STATE_Idle
        Animation                        = IDLA
            AnimationName                = MUGobArch_IDLA
            AnimationMode                = ONCE
            AnimationSpeedFactorRange    = 0.9 1.1
            AnimationPriority            = 10
        End
        Animation                        = IDLB
            AnimationName                = MUGobArch_IDLB
            AnimationMode                = ONCE
            AnimationSpeedFactorRange    = 0.9 1.1
            AnimationPriority            = 15
        End
        Animation                        = IDLC
            AnimationName                = MUGobArch_IDLC
            AnimationMode                = ONCE
            AnimationSpeedFactorRange    = 0.9 1.1
            AnimationPriority            = 5
        End
        Animation                        = IDLD
            AnimationName                = MUGobArch_IDLD
            AnimationMode                = ONCE
            AnimationSpeedFactorRange    = 0.9 1.1
            AnimationPriority            = 5
        End
        Animation                        = IDLE
            AnimationName                = MUGobArch_IDLE
            AnimationMode                = ONCE
            AnimationSpeedFactorRange    = 0.9 1.1
            AnimationPriority            = 5
        End
        Animation                        = IDLF
            AnimationName                = MUGobArch_IDLF
            AnimationMode                = ONCE
            AnimationSpeedFactorRange    = 0.9 1.1
            AnimationPriority            = 10
        End
    End