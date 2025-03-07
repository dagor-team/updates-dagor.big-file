

		IdleAnimationState
			StateName = Idle
			Animation = IDLA
				AnimationName = RUTreeberd_IDLA
				AnimationBlendTime  = 5
			End
			BeginScript
				CurDrawableHideSubObjectPermanently("ROCK")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "Moving" and CurDrawablePrevAnimFraction()>0.875 then CurDrawableSetTransitionAnimState("TRANS_Stop00") return end
				if Prev == "Moving" and CurDrawablePrevAnimFraction()>0.625 then CurDrawableSetTransitionAnimState("TRANS_Stop75") return end
				if Prev == "Moving" and CurDrawablePrevAnimFraction()>0.375 then CurDrawableSetTransitionAnimState("TRANS_Stop50") return end
				if Prev == "Moving" and CurDrawablePrevAnimFraction()>0.125 then CurDrawableSetTransitionAnimState("TRANS_Stop25") return end
				if Prev == "Moving" then CurDrawableSetTransitionAnimState("TRANS_Stop00") return end
        if Prev == "STATE_JustBuilt" then CurDrawableSetTransitionAnimState("TRANS_Sprout") end
			EndScript
      ParticleSysBone     = BAT_SPINE1 TreeBeardIdleLeaves FollowBone: No
		End




		AnimationState = DYING BURNINGDEATH
			Animation
				AnimationName = RUTreeberd_DIEA
				AnimationMode = ONCE
				AnimationBlendTime = 10
			End





		End

		AnimationState			= BURNINGDEATH
			Animation
				AnimationName	= RUTreeberd_MFDA
				AnimationMode	= LOOP
				Distance		= 100
			End
			BeginScript
				CurDrawableHideSubObjectPermanently("ROCK")
			EndScript
		End

		AnimationState = DYING DEATH_2
			Animation = Die
				AnimationName = RUTreeberd_MOTC
				AnimationMode = ONCE_BACKWARDS
			End
      Flags = START_FRAME_LAST
		End

		AnimationState = AFLAME DYING SPLATTED
			Animation = DieSplat
				AnimationName = RUTreeberd_LNDA
				AnimationMode = ONCE
			End
			ParticleSysBone = BAT_SPINE1 TreebeardSplatDust1 FollowBone:Yes
		End

		AnimationState = AFLAME DYING
			Animation = Die
				AnimationName = RUTreeberd_DIEA
				AnimationMode = ONCE
			End
			ParticleSysBone = BAT_SPINE1 TreebeardSplatDust FollowBone:Yes
		End

		AnimationState = DYING SPLATTED
			Animation = DieSplat
				AnimationName	= RUTreeberd_LNDA
				AnimationMode	= ONCE
			End
			ParticleSysBone = BAT_SPINE1 TreebeardSplatDust1 FollowBone:Yes
		End

		AnimationState = DYING WEAPONSET_TOGGLE_1
			Animation = Die
				AnimationName = RUTreeberd_DIEB
				AnimationMode = ONCE
			End
			ParticleSysBone = BAT_SPINE1 TreebeardSplatDust FollowBone:Yes
		End

		AnimationState = DYING
			Animation = Die
				AnimationName = RUTreeberd_DIEA
				AnimationMode = ONCE
			End
			ParticleSysBone = BAT_SPINE1 TreebeardSplatDust FollowBone:Yes
		End




		AnimationState   = JUST_BUILT
			StateName		= STATE_JustBuilt
			Animation = Sprout
				AnimationName = RUTreeberd_MOTC
				AnimationMode = ONCE
				AnimationBlendTime = 0
				AnimationSpeedFactorRange = 0.5 0.5
			End
			BeginScript
				CurDrawableShowSubObjectPermanently("ROCK")
			EndScript
			FXEvent	= Frame:25 Name:FX_EntSprout
			FXEvent = Frame:25 Name:FX_EntSproutButterflies
		End

    AnimationState = PREPARING
    StateName = STATE_Debate
      Animation = Debate
        AnimationName = RUTreeberd_MOTB
        AnimationMode = LOOP
        AnimationBlendTime = 30
        AnimationSpeedFactorRange = 0.8 1.1
      End
      Flags = RANDOMSTART
      BeginScript
        Prev = CurDrawablePrevAnimationState()
        if Prev == "STATE_JustBuilt" then CurDrawableSetTransitionAnimState("TRANS_Sprout") end
        CurDrawableHideSubObjectPermanently("ROCK")
      EndScript
    End

    TransitionState = TRANS_Sprout
      Animation = Sprout
        AnimationName = RUTreeberd_MOTA
        AnimationMode = ONCE
        AnimationBlendTime = 0
        AnimationSpeedFactorRange = 0.5 0.5
      End

      FXEvent = Frame:25 Name:FX_EntSprout
      FXEvent = Frame:25 Name:FX_EntSproutButterflies
    End




    AnimationState = AFLAME STUNNED_FLAILING
      Animation = StunFlail
        AnimationName = RUTreeberd_FLYA
        AnimationMode = LOOP
      End
      Flags = RANDOMSTART
      BeginScript
        CurDrawableHideSubObjectPermanently("ROCK")
      EndScript
    End

    AnimationState = AFLAME STUNNED
      Animation = Stun
        AnimationName = RUTreeberd_LNDA
        AnimationMode = ONCE
      End
      ParticleSysBone = BAT_SPINE1 TreebeardSplatDust1 FollowBone:Yes
      BeginScript
        CurDrawableHideSubObjectPermanently("ROCK")
      EndScript
    End

    AnimationState = AFLAME STUNNED_STANDING_UP
      Animation = Stun
        AnimationName = RUTreeberd_GTPA
        AnimationMode = ONCE
      End
      BeginScript
        CurDrawableHideSubObjectPermanently("ROCK")
      EndScript
    End

		AnimationState        = STUNNED_FLAILING
			Animation           = StunFlail
				AnimationName     = RUTreeberd_FLYA
				AnimationMode      = LOOP
			End
			Flags               = RANDOMSTART
		End

		AnimationState        = STUNNED
			Animation           = Stun
				AnimationName     = RUTreeberd_LNDA
				AnimationMode      = ONCE
			End
			ParticleSysBone = BAT_SPINE1 TreebeardSplatDust1 FollowBone:Yes
		End

		AnimationState        = STUNNED_STANDING_UP
			Animation           = Stun
				AnimationName     = RUTreeberd_GTPA
				AnimationMode      = ONCE
			End
		End




		AnimationState				= INITIAL_ENRAGED
			StateName				= Enraged
			Animation				= RUTreeBerd_MADA
				AnimationName		= RUTreeBerd_MADA
				AnimationMode		= ONCE
			End
      BeginScript
        CurDrawableHideSubObjectPermanently("ROCK")
      EndScript
		End

		AnimationState = USER_3
			Animation = OnFire
				AnimationName = RUTreeberd_RCTD
				AnimationMode = ONCE
				AnimationBlendTime = 20
			End
			FXEvent	= Frame:54 Name:FX_EntRightFootStep
		End




		AnimationState = MOVING FIRING_OR_PREATTACK_A WEAPONSET_ENRAGED
			Animation = RunAndFire
				AnimationName       = RUTreeberd_ATRB
				AnimationMode       = LOOP
			End
		End



		AnimationState        = WEAPONSET_ENRAGED TURN_LEFT
			Animation           = Walk
				AnimationName     = RUTreeberd_TRNL
				AnimationMode     = LOOP
				AnimationSpeedFactorRange = 1.1 1.1
			End
      BeginScript
        CurDrawableHideSubObjectPermanently("ROCK")
      EndScript
		End

		AnimationState        = WEAPONSET_ENRAGED TURN_RIGHT
			Animation           = Walk
				AnimationName     = RUTreeberd_TRNR
				AnimationMode     = LOOP
				AnimationSpeedFactorRange = 1.1 1.1
			End
      BeginScript
        CurDrawableHideSubObjectPermanently("ROCK")
      EndScript
		End


		AnimationState = FIRING_OR_PREATTACK_A WEAPONSET_ENRAGED
			Animation = Punch
				AnimationName		= RUTreeberd_ATKA
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				UseWeaponTiming		= Yes
			End
			Animation = Punt
				AnimationName		= RUTreeberd_ATKD
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				UseWeaponTiming		= Yes
			End
			Animation = FrontKick
				AnimationName		= RUTreeberd_ATKE
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				UseWeaponTiming		= Yes
			End
			Animation = KirkPunch
				AnimationName		= RUTreeberd_ATKF
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				UseWeaponTiming		= Yes
			End
			BeginScript
				if CurDrawableIsCurrentTargetKindof("MONSTER") then
					if GetClientRandomNumberReal(0,1) > 0.50 then
						return ("FrontKick")
					else
						return ("KirkPunch")
					end
				else
					if GetClientRandomNumberReal(0,1) > 0.50 then
						return ("Punch")
					else
						return ("Punt")
					end
				end
			EndScript
		End

		AnimationState = FIRING_OR_PREATTACK_B WEAPONSET_ENRAGED
			Animation = FrontKickOnBuilding
				AnimationName		= RUTreeberd_ATKE
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				UseWeaponTiming		= Yes
			End
			Animation = KirkPunchOnBuilding
				AnimationName		= RUTreeberd_ATKF
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				UseWeaponTiming		= Yes
			End
		End



		AnimationState = WEAPONSET_ENRAGED MOVING PANICKING
			Animation = Jump
				AnimationName				= RUTreeberd_MFDA
				AnimationMode				= LOOP
				AnimationSpeedFactorRange	= 0.5 0.5
				AnimationBlendTime			= 5
				Distance					= 50
			End
			BeginScript
				CurDrawableHideSubObjectPermanently("ROCK")
			EndScript
			FXEvent	= Frame:4 Name:FX_EntLeftFootStep
			FXEvent	= Frame:18 Name:FX_EntRightFootStep
		End

    AnimationState = WEAPONSET_ENRAGED AFLAME WADING
      Animation = Splash
        AnimationName = RUTreeberd_SPLA
        AnimationMode = LOOP
        AnimationBlendTime = 5
      End
      BeginScript
        CurDrawableHideSubObjectPermanently("ROCK")
      EndScript
    End

		AnimationState        = WEAPONSET_ENRAGED MOVING
			Animation           = AngryStompWalk
				AnimationName     = RUTreeberd_WLKC
				AnimationMode      = LOOP
				AnimationBlendTime  = 5
				Distance			= 50
			End
			BeginScript
				CurDrawableHideSubObjectPermanently("ROCK")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "Idle" then CurDrawableSetTransitionAnimState("TRANS_AccelerateENR") end
				if Prev == "Turn" then CurDrawableSetTransitionAnimState("TRANS_AccelerateENR") end
			EndScript
			Flags = MAINTAIN_FRAME_ACROSS_STATES
			FXEvent	= Frame:0 Name:FX_EntLeftFootStep
			FXEvent	= Frame:39 Name:FX_EntRightFootStep
			FXEvent	= Frame:79 Name:FX_EntLeftFootStep
			FXEvent	= Frame:129 Name:FX_EntRightFootStep
		End

		AnimationState						= WEAPONSET_ENRAGED HIT_REACTION HIT_LEVEL_1
			Animation						= Hit_Level_1_a
				AnimationName				= RUTreeberd_HITA
				AnimationMode				= ONCE
			End
		End

		AnimationState						= WEAPONSET_ENRAGED
			Animation						= AngryIdle
				AnimationName				= RUTreeberd_IDLC
				AnimationMode				= LOOP
			End
			BeginScript
				CurDrawableHideSubObjectPermanently("ROCK")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "Moving" and CurDrawablePrevAnimFraction()>0.875 then CurDrawableSetTransitionAnimState("TRANS_Stop00ENR") return end
				if Prev == "Moving" and CurDrawablePrevAnimFraction()>0.625 then CurDrawableSetTransitionAnimState("TRANS_Stop75ENR") return end
				if Prev == "Moving" and CurDrawablePrevAnimFraction()>0.375 then CurDrawableSetTransitionAnimState("TRANS_Stop50ENR") return end
				if Prev == "Moving" and CurDrawablePrevAnimFraction()>0.125 then CurDrawableSetTransitionAnimState("TRANS_Stop25ENR") return end
				if Prev == "Moving" then CurDrawableSetTransitionAnimState("TRANS_Stop00") return end
        if Prev == "STATE_JustBuilt" then CurDrawableSetTransitionAnimState("TRANS_Sprout") end
			EndScript
      ParticleSysBone     = BAT_SPINE1 TreeBeardIdleLeaves FollowBone: No
		End




    AnimationState = AFLAME TURN_LEFT
      Animation = Walk
        AnimationName = RUTreeberd_TRNL
        AnimationMode = LOOP
      End
      BeginScript
        CurDrawableHideSubObjectPermanently("ROCK")
      EndScript
    End
    AnimationState = AFLAME TURN_RIGHT
      Animation = Walk
        AnimationName = RUTreeberd_TRNR
        AnimationMode = LOOP
      End
      BeginScript
        CurDrawableHideSubObjectPermanently("ROCK")
      EndScript
    End
    AnimationState = AFLAME MOVING
      Animation = Jump
        AnimationName = RUTreeberd_MFDA
        AnimationMode = LOOP
        AnimationSpeedFactorRange = 0.5 0.5
        AnimationBlendTime  = 5
        Distance = 50
      End
      Flags = MAINTAIN_FRAME_ACROSS_STATES
      FXEvent = Frame:4 Name:FX_EntLeftFootStep
      FXEvent = Frame:18 Name:FX_EntRightFootStep
      BeginScript
        CurDrawableHideSubObjectPermanently("ROCK")
        CurDrawablePlaySound("EntRunFire")
      EndScript
    End
    AnimationState = AFLAME WADING
      Animation = Splash
        AnimationName = RUTreeberd_SPLA
        AnimationMode = LOOP
        AnimationBlendTime = 5
      End
      BeginScript
        CurDrawableHideSubObjectPermanently("ROCK")
      EndScript
    End




		AnimationState = RELOADING_A WEAPONSET_TOGGLE_1
			Animation
				AnimationName		= RUTreeberd_GRBA
				AnimationMode		= ONCE
				AnimationBlendTime	= 0
			End
			FXEvent	= Frame:20	Name: FX_EntRockGrab
			FXEvent	= Frame:24	Name: FX_EntRockYank
			BeginScript
				CurDrawableShowSubObjectPermanently("ROCK")
			EndScript
		End

		AnimationState				= TURN_RIGHT WEAPONSET_TOGGLE_1
			StateName				= Turn
			Animation
				AnimationName		= RUTreeberd_TNR2
				AnimationMode		= LOOP
				AnimationSpeedFactorRange = 1.1 1.1
			End
		End

		AnimationState				= TURN_LEFT WEAPONSET_TOGGLE_1
			StateName				= Turn
			Animation
				AnimationName		= RUTreeberd_TNL2
				AnimationMode		= LOOP
				AnimationSpeedFactorRange = 1.1 1.1
			End
		End

		AnimationState = FIRING_OR_PREATTACK_A AIM_NEAR WEAPONSET_TOGGLE_1
			Animation = CloseRock
				AnimationName		= RUTreeberd_THRC
				AnimationMode		= ONCE
				UseWeaponTiming		= Yes

			End
			BeginScript
				CurDrawableShowSubObjectPermanently("ROCK")
			EndScript
			FrameForPristineBonePositions = 39
		End

		AnimationState = FIRING_OR_PREATTACK_A WEAPONSET_TOGGLE_1
			Animation = FarRock
				AnimationName		= RUTreeberd_THRB
				AnimationMode		= ONCE
				UseWeaponTiming		= Yes

			End
			BeginScript
				CurDrawableShowSubObjectPermanently("ROCK")
			EndScript
			FrameForPristineBonePositions = 40
		End




		AnimationState = MOVING FIRING_OR_PREATTACK_A
			Animation = RunAndFire
				AnimationName       = RUTreeberd_ATRA
				AnimationMode       = LOOP
			End
		End

		AnimationState				= TURN_RIGHT
			StateName				= Turn
			Animation				= Walk
				AnimationName		= RUTreeberd_TRNR
				AnimationMode		= LOOP
			End
		End

		AnimationState				= TURN_LEFT
			StateName				= Turn
			Animation				= Walk
				AnimationName		= RUTreeberd_TRNL
				AnimationMode		= LOOP
			End
		End

		AnimationState = FIRING_OR_PREATTACK_A
			Animation = Punch
				AnimationName		= RUTreeberd_ATKA
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				UseWeaponTiming		= Yes
			End
			Animation = Punt
				AnimationName		= RUTreeberd_ATKD
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				UseWeaponTiming		= Yes
			End
			Animation = FrontKick
				AnimationName		= RUTreeberd_ATKE
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				UseWeaponTiming		= Yes
			End
			Animation = KirkPunch
				AnimationName		= RUTreeberd_ATKF
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				UseWeaponTiming		= Yes
			End
			BeginScript
				if CurDrawableIsCurrentTargetKindof("MONSTER") then
					if GetClientRandomNumberReal(0,1) > 0.50 then
						return ("FrontKick")
					else
						return ("KirkPunch")
					end
				else
					if GetClientRandomNumberReal(0,1) > 0.50 then
						return ("Punch")
					else
						return ("Punt")
					end
				end
			EndScript
		End

		AnimationState = FIRING_OR_PREATTACK_B
			Animation = FrontKickOnBuilding
				AnimationName		= RUTreeberd_ATKE
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				UseWeaponTiming		= Yes
			End
			Animation = KirkPunchOnBuilding
				AnimationName		= RUTreeberd_ATKF
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				UseWeaponTiming		= Yes
			End
		End




		AnimationState = PACKING GRAB_BUILDING_CHUNK
			Animation = Pack
				AnimationName		= RUTreeberd_GBB2
				AnimationMode		= ONCE
				AnimationBlendTime	= 0
			End
		End

		AnimationState = UNPACKING GRAB_BUILDING_CHUNK
			Animation = Pack
				AnimationName		= RUTreeberd_GBB1
				AnimationMode		= ONCE
				AnimationBlendTime	= 20
			End
			ParticleSysBone = ParticleNode01 TreeBeardAttackLeavesFir
		End

		AnimationState = PACKING
			Animation = Pack
				AnimationName	= RUTreeberd_GBA2
				AnimationMode	= ONCE
			End
		End

		AnimationState = UNPACKING
			Animation = Pack
				AnimationName	= RUTreeberd_GBA1
				AnimationMode	= ONCE
			End
		End



		AnimationState = MOVING PANICKING
			Animation = Jump
				AnimationName				= RUTreeberd_MFDA
				AnimationMode				= LOOP
				AnimationSpeedFactorRange	= 0.5 0.5
				AnimationBlendTime			= 5
				Distance					= 50
			End
			BeginScript
				CurDrawableHideSubObjectPermanently("ROCK")
			EndScript
			FXEvent	= Frame:4 Name:FX_EntLeftFootStep
			FXEvent	= Frame:18 Name:FX_EntRightFootStep
		End

		AnimationState				= MOVING WEAPONSET_TOGGLE_1
			StateName				= Moving
			Animation
				AnimationName		= RUTreeberd_WLKE
				Distance			= 50
				AnimationMode		= LOOP
				AnimationBlendTime	= 5
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "Idle" then CurDrawableSetTransitionAnimState("TRANS_AccelerateR") end
				if Prev == "Turn" then CurDrawableSetTransitionAnimState("TRANS_AccelerateR") end
			EndScript
			Flags = MAINTAIN_FRAME_ACROSS_STATES
			FXEvent	= Frame:0 Name:FX_EntLeftFootStep
			FXEvent	= Frame:26 Name:FX_EntRightFootStep
		End

		AnimationState				= MOVING
			StateName				= Moving
			Animation				= Walk
				AnimationName		= RUTreeberd_WLKC
				Distance			= 50
				AnimationMode		= LOOP
				AnimationBlendTime	= 5
			End
			BeginScript
				CurDrawableHideSubObjectPermanently("ROCK")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "Idle" then CurDrawableSetTransitionAnimState("TRANS_Accelerate") end
				if Prev == "Turn" then CurDrawableSetTransitionAnimState("TRANS_Accelerate") end
			EndScript
			Flags = MAINTAIN_FRAME_ACROSS_STATES
			FXEvent	= Frame:0 Name:FX_EntLeftFootStep
			FXEvent	= Frame:39 Name:FX_EntRightFootStep
			FXEvent	= Frame:79 Name:FX_EntLeftFootStep
			FXEvent	= Frame:129 Name:FX_EntRightFootStep
		End


		AnimationState						= HIT_REACTION HIT_LEVEL_1 WEAPONSET_TOGGLE_1
			Animation						= Hit_Level_1_a
				AnimationName				= RUTreeberd_HITB
				AnimationMode				= ONCE
			End
		End

		AnimationState						= HIT_REACTION HIT_LEVEL_1
			Animation						= Hit_Level_1_a
				AnimationName				= RUTreeberd_HITA
				AnimationMode				= ONCE
			End
		End

		AnimationState						= WEAPONSET_TOGGLE_1
			StateName						= Idle
			Animation
				AnimationName				= RUTreeberd_IDLB
				AnimationMode				= LOOP
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_JustBuilt" then CurDrawableShowSubObjectPermanently("ROCK") return end
				if Prev == "Moving" and CurDrawablePrevAnimFraction()>0.875 then CurDrawableSetTransitionAnimState("TRANS_Stop00R") return end
				if Prev == "Moving" and CurDrawablePrevAnimFraction()>0.625 then CurDrawableSetTransitionAnimState("TRANS_Stop75R") return end
				if Prev == "Moving" and CurDrawablePrevAnimFraction()>0.375 then CurDrawableSetTransitionAnimState("TRANS_Stop50R") return end
				if Prev == "Moving" and CurDrawablePrevAnimFraction()>0.125 then CurDrawableSetTransitionAnimState("TRANS_Stop25R") return end
				if Prev == "Moving" then CurDrawableSetTransitionAnimState("TRANS_Stop00R") return end
			EndScript
			ParticleSysBone     = BAT_SPINE1 TreeBeardIdleLeaves FollowBone: No
		End




		TransitionState = TRANS_Accelerate
			Animation = Transition
				AnimationName		= RUTreeberd_ACLA
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				AnimationSpeedFactorRange 0.75 0.75
			End
		End

		TransitionState = TRANS_Stop75
			Animation = Transition
				AnimationName		= RUTreeberd_DCLC
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				AnimationSpeedFactorRange 0.66 0.66
			End
		End

		TransitionState = TRANS_Stop50
			Animation = Transition
				AnimationName		= RUTreeberd_DCLB
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				AnimationSpeedFactorRange 0.66 0.66
			End
		End

		TransitionState = TRANS_Stop25
			Animation = Transition
				AnimationName		= RUTreeberd_DCLD
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				AnimationSpeedFactorRange 0.66 0.66
			End
		End

		TransitionState = TRANS_Stop00
			Animation = Transition
				AnimationName		= RUTreeberd_DCLA
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				AnimationSpeedFactorRange 0.66 0.66
			End
		End




		TransitionState = TRANS_AccelerateR
			Animation = Transition
				AnimationName		= RUTreeberd_ACLB
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				AnimationSpeedFactorRange 0.75 0.75
			End
		End

		TransitionState = TRANS_Stop75R
			Animation
				AnimationName		= RUTreeberd_DCLG
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				AnimationSpeedFactorRange 0.66 0.66
			End
		End

		TransitionState = TRANS_Stop50R
			Animation
				AnimationName		= RUTreeberd_DCLF
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				AnimationSpeedFactorRange 0.66 0.66
			End
		End

		TransitionState = TRANS_Stop25R
			Animation
				AnimationName		= RUTreeberd_DCLH
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				AnimationSpeedFactorRange 0.66 0.66
			End
		End

		TransitionState = TRANS_Stop00R
			Animation
				AnimationName		= RUTreeberd_DCLE
				AnimationMode		= ONCE
				AnimationBlendTime	= 5
				AnimationSpeedFactorRange 0.66 0.66
			End
		End




		TransitionState = TRANS_AccelerateENR
			Animation = Transition
				AnimationName		= RUTreeberd_ACLB
				AnimationMode		= ONCE
				AnimationBlendTime	= 5

			End
		End

		TransitionState = TRANS_Stop75ENR
			Animation
				AnimationName		= RUTreeberd_DCLG
				AnimationMode		= ONCE
				AnimationBlendTime	= 5

			End
		End

		TransitionState = TRANS_Stop50ENR
			Animation
				AnimationName		= RUTreeberd_DCLF
				AnimationMode		= ONCE
				AnimationBlendTime	= 5

			End
		End

		TransitionState = TRANS_Stop25ENR
			Animation
				AnimationName		= RUTreeberd_DCLH
				AnimationMode		= ONCE
				AnimationBlendTime	= 5

			End
		End

		TransitionState = TRANS_Stop00ENR
			Animation
				AnimationName		= RUTreeberd_DCLE
				AnimationMode		= ONCE
				AnimationBlendTime	= 5

			End
		End

