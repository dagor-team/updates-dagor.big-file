

        AnimationState                        = PASSENGER
            Animation                        = Wiggling
                AnimationName                = MUGblnSwrd_FLLA
                AnimationMode                = LOOP
            End
        End

        AnimationState                        = THROWN_PROJECTILE
            StateName                        = STATE_Flying
            Animation                        = Thrown
                AnimationName                = MUGblnSwrd_FLYA
                AnimationMode                = LOOP
            End
            Animation                        = Thrown
                AnimationName                = MUGblnSwrd_FLYB
                AnimationMode                = LOOP
            End
            Animation                        = Thrown
                AnimationName                = MUGblnSwrd_FLYC
                AnimationMode                = LOOP
            End
        End


    AnimationState                        = CLIMBING
        StateName                        = STATE_Climbing
        Animation                        = Climbing
            AnimationName                = MUGblnSwrd_WALB
            AnimationMode                = LOOP
            AnimationBlendTime            = 10
        End
        BeginScript
            Prev = CurDrawablePrevAnimationState()
            if Prev == "STATE_Running"  then CurDrawableSetTransitionAnimState("Trans_RunningToClimbing") return end
            if Prev == "STATE_Rappelling"  then CurDrawableSetTransitionAnimState("Trans_RappellingToClimbing") return end
        EndScript
    End
    TransitionState = Trans_RunningToClimbing
        Animation = Transition
            AnimationName = MUGblnSwrd_WALA
            AnimationMode = ONCE
        End
    End
    TransitionState = Trans_RappellingToClimbing
        Animation = Transition
            AnimationName = MUGblnSwrd_WALG
            AnimationMode = ONCE_BACKWARDS
        End
    End
    AnimationState                        = RAPPELLING
        StateName                        = STATE_Rappelling
        Animation                        = Rapelling
            AnimationName                = MUGblnSwrd_WALE
            AnimationMode                = LOOP
            AnimationBlendTime            = 10
        End
        BeginScript
            Prev = CurDrawablePrevAnimationState()
            if Prev == "STATE_Running"  then CurDrawableSetTransitionAnimState("Trans_RunningToRappelling") return end
            if Prev == "STATE_Climbing"  then CurDrawableSetTransitionAnimState("Trans_ClimbingToRappelling") return end
        EndScript
    End
    TransitionState = Trans_RunningToRappelling
        Animation = Transition
            AnimationName = MUGblnSwrd_WALD
            AnimationMode = ONCE
        End
    End
    TransitionState = Trans_ClimbingToRappelling
        Animation = Transition
            AnimationName = MUGblnSwrd_WALG
            AnimationMode = ONCE
        End
    End


        AnimationState                        = FREEFALL
            Animation                        = Falling
                AnimationName                = MUGblnSwrd_FLYB
                AnimationMode                = LOOP
                AnimationBlendTime            = 10
                AnimationSpeedFactorRange    = 0.7    0.7
            End
        End

        AnimationState                        = STUNNED_FLAILING
            StateName                        = STATE_Flying
            Animation                        = ready_for_sweet_landing
                AnimationName                = MUGblnSwrd_FLYA
                AnimationMode                = LOOP
                AnimationSpeedFactorRange    = 0.4 0.6
                AnimationBlendTime            = 0
            End
            Animation                        = flying
                AnimationName                = MUGblnSwrd_FLYB
                AnimationMode                = LOOP
                AnimationPriority            = 10
                AnimationSpeedFactorRange    = 0.4 0.6
                AnimationBlendTime            = 0
            End
            Flags                            = RANDOMSTART
        End

        AnimationState            = DYING BURNINGDEATH
            Animation
                AnimationName    = MUGblnSwrd_DIEA
                AnimationMode    = ONCE
                AnimationBlendTime = 10
            End
            Animation
                AnimationName    = MUGblnSwrd_DIEB
                AnimationMode    = ONCE
                AnimationBlendTime = 10
            End
            Animation
                AnimationName    = MUGblnSwrd_DIEC
                AnimationMode    = ONCE
                AnimationBlendTime = 10
            End
        End

        AnimationState                        = DYING SPLATTED
            Animation                        = splat
                AnimationName                = MUGblnSwrd_LNDB
                AnimationMode                = ONCE
            End
        End





        AnimationState                        = DYING AFLAME
            StateName                        = STATE_Dead.
            Animation                        = Flaming_Death
                AnimationName                = MUGblnSwrd_MFDA
                AnimationMode                = LOOP
            End
        End

        AnimationState                        = DYING
            StateName                        = STATE_Dead.
            Animation                        = Dying_1
                AnimationName                = MUGblnSwrd_DIEA
                AnimationMode                = ONCE
            End
            Animation                        = Dying_2
                AnimationName                = MUGblnSwrd_DIEB
                AnimationMode                = ONCE
            End
            Animation                        = Dying_2
                AnimationName                = MUGblnSwrd_DIEC
                AnimationMode                = ONCE
            End
            Animation                        = landb
                AnimationName                = MUGblnSwrd_LNDB
                AnimationMode                = ONCE
            End
            Animation                        = landc
                AnimationName                = MUGblnSwrd_LNDC
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
            StateName                        = STATE_Ready
            Animation                        = standing_back_up
                AnimationName                = MUGblnSwrd_GTPA
                AnimationMode                = ONCE

            End
            Animation                        = already_up
                AnimationName                = MUGblnSwrd_IDLB
                AnimationMode                = LOOP
                AnimationBlendTime            = 20
            End
            BeginScript
                if CurDrawablePrevAnimation() == "sweet_landing"
                then
                    return "already_up"
                else
                    return "standing_back_up"
                end
            EndScript
        End

        AnimationState                        = STUNNED
            StateName                        = STATE_Stunned
            Animation                        = splatted_on_ground
                AnimationName                = MUGblnSwrd_LNDC
                AnimationMode                = ONCE
            End
            Animation                        = sweet_landing
                AnimationName                = MUGblnSwrd_LNDA
                AnimationMode                = ONCE
            End
            BeginScript
                if CurDrawablePrevAnimation() == "ready_for_sweet_landing"
                then
                    return "sweet_landing"
                else
                    return "splatted_on_ground"
                end
            EndScript
        End

        AnimationState            = BURNINGDEATH
            Animation
                AnimationName    = MUGblnSwrd_MFDA
                AnimationMode    = LOOP
                Distance        = 30
            End
        End

        AnimationState                        = PARALYZED
            Animation
                AnimationName                = MUGblnSwrd_IDLA
                AnimationMode                = LOOP
            End
        End







        AnimationState = MOVING FIRING_OR_PREATTACK_A
            Animation = TrotAndFire
                AnimationName = MUGblnSwrd_RUNA
                AnimationMode = LOOP
            End
            Flags = RANDOMSTART

        End

        AnimationState                        = MOVING BACKING_UP
            Animation                        = BackingUp
                AnimationName                = MUGblnSwrd_BAKA
                AnimationMode                = LOOP
                AnimationSpeedFactorRange    = 0.9 1.1
            End
            Animation                        = BackingUp
                AnimationName                = MUGblnSwrd_BAKB
                AnimationMode                = LOOP
                AnimationSpeedFactorRange    = 0.9 1.1
            End
            Animation                        = BackingUp
                AnimationName                = MUGblnSwrd_BAKC
                AnimationMode                = LOOP
                AnimationSpeedFactorRange    = 0.9 1.1
            End
            Flags                            = RANDOMSTART
        End

        AnimationState                        = MOVING EMOTION_TERROR
            ShareAnimation                    = Yes
            Animation                        = Moving_1
                AnimationName                = MUGblnSwrd_RUNA
                AnimationMode                = LOOP

                AnimationSpeedFactorRange    = 0.5 0.6
                Distance                    = 20
            End
            Flags                            = RANDOMSTART
            ParticleSysBone                    = None InfantryDustTrails
        End

        AnimationState                        = MOVING
            StateName                        = STATE_Running
            ShareAnimation                    = Yes
            Animation                        = Moving_1
                AnimationName                = MUGblnSwrd_RUNA
                AnimationMode                = LOOP

                AnimationSpeedFactorRange    = 0.5 0.6
                Distance                    = 20
            End

            Flags                            = RANDOMSTART
            ParticleSysBone                    = None InfantryDustTrails
            BeginScript
                Prev = CurDrawablePrevAnimationState()
                if Prev == "STATE_Climbing"  then CurDrawableSetTransitionAnimState("Trans_ClimbingToRunning") return end
                if Prev == "STATE_Rappelling"  then CurDrawableSetTransitionAnimState("Trans_RappellingToRunning") return end
            EndScript
        End
    TransitionState = Trans_ClimbingToRunning
        Animation = Transition
            AnimationName = MUGblnSwrd_WALC
            AnimationMode = ONCE
        End
        Animation = Transition
            AnimationName = MUGblnSwrd_WALH
            AnimationMode = ONCE
        End
    End
    TransitionState = Trans_RappellingToRunning
        Animation = Transition
            AnimationName = MUGblnSwrd_WALF
            AnimationMode = ONCE
        End
    End


        AnimationState                        = FIRING_OR_PREATTACK_A
            StateName                        = STATE_Ready
            Animation                        = ATKA
                AnimationName                = MUGblnSwrd_ATKA
                AnimationMode                = ONCE
                UseWeaponTiming                = Yes
            End
            Animation                        = ATKB
                AnimationName                = MUGblnSwrd_ATKA
                AnimationMode                = ONCE
                UseWeaponTiming                = Yes
            End
            Animation                        = ATKC
                AnimationName                = MUGblnSwrd_ATKC
                AnimationMode                = ONCE
                UseWeaponTiming                = Yes
            End
        End


        AnimationState                        = EMOTION_AFRAID
            Animation                        = FERA
                AnimationName                = MUGblnSwrd_FERA
                AnimationMode                = LOOP
            End
            Animation                        = FERB
                AnimationName                = MUGblnSwrd_FERB
                AnimationMode                = LOOP
            End
            Animation                        = FERC
                AnimationName                = MUGblnSwrd_FERC
                AnimationMode                = LOOP
            End
            Flags                            = RANDOMSTART
        End
        AnimationState                        = EMOTION_TAUNTING
            Animation                        = TNTA
                AnimationName                = MUGblnSwrd_TNTA
                AnimationMode                = LOOP
            End
            Animation                        = TNTB
                AnimationName                = MUGblnSwrd_TNTB
                AnimationMode                = LOOP
            End
            Animation                        = TNTC
                AnimationName                = MUGblnSwrd_TNTC
                AnimationMode                = LOOP
            End
            Flags                            = RANDOMSTART
        End
        AnimationState                        = EMOTION_POINTING
            Animation                        = Pointing1A
                AnimationName                = MUGblnSwrd_PNTA
                AnimationMode                = LOOP
            End
            Animation                        = Pointing1B
                AnimationName                = MUGblnSwrd_PNTB
                AnimationMode                = LOOP
            End
            Animation                        = Pointing1C
                AnimationName                = MUGblnSwrd_PNTC
                AnimationMode                = LOOP
            End
            Flags                            = RANDOMSTART
        End
        AnimationState                        = EMOTION_CELEBRATING
            Animation                        = CHRA
                AnimationName                = MUGblnSwrd_CHRA
                AnimationMode                = LOOP
            End
            Animation                        = CHRB
                AnimationName                = MUGblnSwrd_CHRB
                AnimationMode                = LOOP
            End
            Animation                        = CHRC
                AnimationName                = MUGblnSwrd_CHRC
                AnimationMode                = LOOP
            End
            Flags                            = RANDOMSTART
        End
        AnimationState                        = EMOTION_ALERT
            Animation                        = IDLB
                AnimationName                = MUGblnSwrd_IDLB
                AnimationMode                = LOOP
            End
            Flags                            = RANDOMSTART
        End

        AnimationState                        = RAISING_FLAG
            Animation                        = CHRA
                AnimationName                = MUGblnSwrd_CHRA
                AnimationMode                = LOOP
            End
            Animation                        = CHRB
                AnimationName                = MUGblnSwrd_CHRB
                AnimationMode                = LOOP
            End
            Animation                        = CHRC
                AnimationName                = MUGblnSwrd_CHRC
                AnimationMode                = LOOP
            End
        End



        AnimationState = SELECTED
            Animation                = Selected_Loop
                AnimationName        = MUGblnSwrd_ATNB
                AnimationMode        = LOOP
                AnimationBlendTime    = 10
            End
            StateName                = Selected
            BeginScript
                Prev = CurDrawablePrevAnimationState()
                if Prev == "Idle"    then CurDrawableSetTransitionAnimState("Trans_Down_To_Up") return end
                if Prev == "Selected" then CurDrawableSetTransitionAnimState("Trans_Up_To_Down") end
            EndScript
            Flags = RESTART_ANIM_WHEN_COMPLETE
        End


        TransitionState = Trans_Down_To_Up
            Animation = Transition
                AnimationName = MUGblnSwrd_ATNA
                AnimationMode = ONCE
            End
        End

        TransitionState = Trans_Up_To_Down
            Animation = Transition
                AnimationName = MUGblnSwrd_ATNC
                AnimationMode = ONCE
            End
        End

        IdleAnimationState
            StateName                        = Idle
            Animation                        = IDLA
                AnimationName                = MUGblnSwrd_IDLA
                AnimationMode                = ONCE
                AnimationSpeedFactorRange    = 0.9 1.1
                AnimationPriority            = 10
            End
            Animation                        = IDLB
                AnimationName                = MUGblnSwrd_IDLB
                AnimationMode                = ONCE
                AnimationSpeedFactorRange    = 0.9 1.1
                AnimationPriority            = 10
            End
            Animation                        = IDLC
                AnimationName                = MUGblnSwrd_IDLC
                AnimationMode                = ONCE
                AnimationSpeedFactorRange    = 0.9 1.1
                AnimationPriority            = 5
            End
            Animation                        = IDLD
                AnimationName                = MUGblnSwrd_IDLD
                AnimationMode                = ONCE
                AnimationSpeedFactorRange    = 0.9 1.1
                AnimationPriority            = 5
            End
            Animation                        = IDLE
                AnimationName                = MUGblnSwrd_IDLE
                AnimationMode                = ONCE
                AnimationSpeedFactorRange    = 0.9 1.1
                AnimationPriority            = 5
            End
            BeginScript
                Prev = CurDrawablePrevAnimationState()
                if Prev == "STATE_Planted"    then CurDrawableSetTransitionAnimState("Trans_Down_To_Up") return end

            EndScript
        End
