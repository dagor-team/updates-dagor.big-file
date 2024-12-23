

		IdleAnimationState
			StateName = STATE_Idle
				Animation = IDLA
				AnimationName		= MUOrcArchr_IDLA
				AnimationMode		= ONCE
				AnimationPriority	= 6
				AnimationSpeedFactorRange = 0.8 1.2
				AnimationBlendTime  = 15
			End

			StateName = STATE_Idle
				Animation = IDLA
				AnimationName		= MUOrcArchr_IDLA
				AnimationMode		= ONCE
				AnimationPriority	= 6
				AnimationSpeedFactorRange = 0.8 1.2
				AnimationBlendTime  = 15
			End
			Animation = IDLC
				AnimationName		= MUOrcArchr_IDLC
				AnimationMode		= ONCE
				AnimationPriority	= 1
				AnimationSpeedFactorRange = 0.8 1.2
				AnimationBlendTime  = 15
			End
			Animation = IDLD
				AnimationName		= MUOrcArchr_IDLD
				AnimationMode		= ONCE
				AnimationPriority	= 1
				AnimationSpeedFactorRange = 0.8 1.2
				AnimationBlendTime  = 15
			End














			BeginScript
				CurDrawableShowSubObject("arrownock")

				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Selected"	then CurDrawableSetTransitionAnimState("TRANS_Selected_to_Idle") return end
			EndScript
		End


    AnimationState						= PASSENGER EATING
		Animation						= being_eaten
			AnimationName				= MUOrcArchr_EATA
			AnimationMode				= ONCE
		End
    End

    AnimationState						= PASSENGER
		Animation						= Wiggling
			AnimationName				= MUOrcArchr_FLLA
			AnimationMode				= LOOP
		End
    End

    AnimationState						= THROWN_PROJECTILE
		Animation						= Thrown
			AnimationName				= MUOrcArchr_FLYA
			AnimationMode				= LOOP
		End
    End



	AnimationState						= FREEFALL
		Animation						= Flying_1
			AnimationName				= MUORCARCHR_FLYA
			AnimationMode				= LOOP
			AnimationSpeedFactorRange	= 0.5	0.5
			AnimationBlendTime			= 10
		End
    End



    AnimationState = STUNNED_FLAILING
 		Animation = Flying
			AnimationName = MUOrcArchr_FLYA
			AnimationMode = LOOP
			AnimationSpeedFactorRange	= 0.4 0.6
		End
		Flags = RANDOMSTART
    End



		AnimationState			= DYING BURNINGDEATH
			Animation
				AnimationName	= MUOrcArchr_DIEA
				AnimationMode	= ONCE
				AnimationBlendTime = 10
			End
			Animation
				AnimationName	= MUOrcArchr_DIEB
				AnimationMode	= ONCE
				AnimationBlendTime = 10
			End
			Animation
				AnimationName	= MUOrcArchr_DIEC
				AnimationMode	= ONCE
				AnimationBlendTime = 10
			End
			Animation
				AnimationName	= MUOrcArchr_DIED
				AnimationMode	= ONCE
				AnimationBlendTime = 10
			End
		End


    AnimationState						= USER_1 DYING
		Animation						= Moving
			AnimationName				= MUOrcArchr_DIEC
			AnimationMode				= ONCE
		End
    End

    AnimationState						= DYING SPLATTED
 		Animation						= Splattered_On_Ground
			AnimationName				= MUOrcArchr_LNDA
			AnimationMode				= ONCE
		End
		EnteringStateFX					= FX_OrcHitGround
    End

    AnimationState = DYING AFLAME
 		Animation = Flaming_Death
			AnimationName = MUOrcArchr_MFDA
			AnimationMode = LOOP
		End
		Animation = Flaming_Death2
			AnimationName = MUOrcArchr_MFDB
			AnimationMode = LOOP
		End
    End

    AnimationState = DYING
 		Animation = Dying1
			AnimationName = MUOrcArchr_DIEA
			AnimationMode = ONCE
			AnimationPriority = 20
		End
		Animation = Dying2
			AnimationName = MUOrcArchr_DIEB
			AnimationMode = ONCE
			AnimationPriority = 1
		End
		Animation = Dying3
			AnimationName = MUOrcArchr_DIEC
			AnimationMode = ONCE
			AnimationPriority = 5
		End
		Animation = Dying4
			AnimationName = MUOrcArchr_DIED
			AnimationMode = ONCE
			AnimationPriority = 15
		End
    End

		AnimationState			= BURNINGDEATH
			Animation
				AnimationName	= MUOrcArchr_MFDB
				AnimationMode	= LOOP
				Distance		= 30
			End
		End

	AnimationState						= PARALYZED
		Animation
			AnimationName				= MUOrcArchr_IDLA
			AnimationMode				= LOOP
		End
	End



    AnimationState = STUNNED_STANDING_UP
 		Animation = Standing_Back_Up
			AnimationName = MUOrcArchr_GTPA
			AnimationMode = ONCE
			AnimationSpeedFactorRange = 1.5 1.5
		End
    End

    AnimationState = STUNNED
 		Animation = Splattered_On_Ground
			AnimationName = MUOrcArchr_LNDA
			AnimationMode = ONCE
		End
		EnteringStateFX = FX_OrcHitGround
    End







	AnimationState				= MOVING CLIMBING BACKING_UP
		Animation				= ClimbingDown
			AnimationName		= MUOrcArchr_CLMA
			AnimationMode		= LOOP_BACKWARDS
		End
    End

	AnimationState				= MOVING CLIMBING
		Animation				= ClimbingUp
			AnimationName		= MUOrcArchr_CLMA
			AnimationMode		= LOOP
		End
    End



	AnimationState					= MOVING EMOTION_TERROR EMOTION_LOOK_TO_SKY
		ShareAnimation = Yes
		Animation					= TerrorFromTheSky
			AnimationName			= MUOrcArchr_RUNG
			AnimationMode			= LOOP
		End
	End
	AnimationState					= MOVING EMOTION_TERROR
		ShareAnimation = Yes
		Animation					= Terror
			AnimationName			= MUOrcArchr_RUNF
			AnimationMode			= LOOP
		End
	End



	AnimationState = MOVING BACKING_UP
		ShareAnimation = Yes








 		Animation = Backing_Up_3
			AnimationName = MUOrcArchr_BAKC
			AnimationMode = LOOP
		End
	End



	AnimationState					=	MOVING WANDER
		ShareAnimation = Yes
		Animation					=	Wander1
			AnimationName			=	MUOrcArchr_WLKA
		End
		Animation					=	Wander2
			AnimationName			=	MUOrcArchr_WLKB
		End
		Flags						=	RANDOMSTART
	End

	AnimationState = MOVING
		ShareAnimation = Yes
		Animation = Moving
			AnimationName = MUOrcArchr_RUNB
			AnimationMode = LOOP
			AnimationSpeedFactorRange = 0.8 0.8
		End
		Animation = Moving
			AnimationName = MUOrcArchr_RUNC
			AnimationMode = LOOP
			AnimationSpeedFactorRange = 0.8 0.8
		End
		Animation = Moving
			AnimationName = MUOrcArchr_RUND
			AnimationMode = LOOP
			AnimationSpeedFactorRange = 0.8 0.8
		End
		ParticleSysBone = None InfantryDustTrails
		BeginScript
			CurDrawableShowSubObject("arrownock")
		EndScript
	End


	AnimationState					=	FIRING_OR_PREATTACK_A WEAPONSTATE_CLOSE_RANGE
  		Animation					=	BowPunchWhenClose
  			AnimationName			=	MUOrcArchr_ATKD
  			AnimationMode			=	ONCE
  			UseWeaponTiming			=	Yes
  		End
 		BeginScript
			CurDrawableHideSubObject("arrow")
		EndScript
 	End




	AnimationState					=	PREATTACK_A
		StateName					=	STATE_PreFiring
		Animation					=	ReadyToDrawn
			AnimationName			=	MUOrcArchr_ATA1
			AnimationMode			=	ONCE

			AnimationBlendTime		=	10
		End
	End

	AnimationState					=	FIRING_OR_RELOADING_A
		StateName					=	STATE_Firing
		Animation					=	OneFrameOfShooting
			AnimationName			=	MUOrcArchr_ATA2
			AnimationMode			=	ONCE

			AnimationSpeedFactorRange = 1.1 1.1
			AnimationBlendTime		=	0
		End
	End

	AnimationState					=	PREATTACK_C
		StateName					=	STATE_PreFiring
		Animation					=	ReadyToDrawn
			AnimationName			=	MUOrcArchr_ATA1
			AnimationMode			=	ONCE

			AnimationBlendTime		=	10
		End
	End

	AnimationState					=	FIRING_OR_RELOADING_C
		StateName					=	STATE_Firing
		Animation					=	OneFrameOfShooting
			AnimationName			=	MUOrcArchr_ATA2
			AnimationMode			=	ONCE

			AnimationSpeedFactorRange = 1.1 1.1
			AnimationBlendTime		=	0
		End
	End



	AnimationState					= CONTINUOUS_FIRE_MEAN
		StateName					=	STATE_Coasting
		Animation					=	HangFrameWhileCoasting
			AnimationName			=	MUOrcArchr_ATA2
			AnimationMode			=	MANUAL
		End
		BeginScript
			Prev = CurDrawablePrevAnimationState()
			if Prev == "STATE_Firing" then CurDrawableAllowToContinue() return end
		EndScript
	End

	AnimationState					= CONTINUOUS_FIRE_SLOW
		StateName					= STATE_Idle
		Animation					= PutAwayArrow
			AnimationName			= MUOrcArchr_ATA3
			AnimationMode			= ONCE
		End
	End



	AnimationState = HIT_REACTION
		Animation = Hit_Level_1_a
			AnimationName = MUOrcArchr_HITA
			AnimationMode = ONCE
		End
	End



	AnimationState = WAR_CHANT




		Animation					= TauntingA
			AnimationName			= MUOrcArchr_TNTA
			AnimationMode			= ONCE
		End
		Animation					= TauntingB
			AnimationName			= MUOrcArchr_TNTB
			AnimationMode			= ONCE
		End
		Animation					= TauntingC
			AnimationName			= MUOrcArchr_TNTC
			AnimationMode			= ONCE
		End
		Animation					= TauntingD
			AnimationName			= MUOrcArchr_TNTD
			AnimationMode			= ONCE
		End
		Flags						= RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
	End





		AnimationState							= EMOTION_AFRAID
			ShareAnimation						= Yes
			Animation							= FERA
				AnimationName					= MUOrcArchr_FERA
				AnimationMode					= LOOP
			End
			Animation							= FERB
				AnimationName					= MUOrcArchr_FERB
				AnimationMode					= LOOP
			End
			Animation							= FERC
				AnimationName					= MUOrcArchr_FERC
				AnimationMode					= LOOP
			End
		End



		AnimationState							= EMOTION_TAUNTING
			Animation							= TNTA
				AnimationName					= MUOrcArchr_TNTA
				AnimationMode					= ONCE
				AnimationSpeedFactorRange		= 0.8 1.2
			End
			Animation							= TNTB
				AnimationName					= MUOrcArchr_TNTB
				AnimationMode					= ONCE
				AnimationSpeedFactorRange		= 0.8 1.2
			End
			Animation							= TNTC
				AnimationName					= MUOrcArchr_TNTC
				AnimationMode					= ONCE
				AnimationSpeedFactorRange		= 0.8 1.2
			End
			Animation							= TNTD
				AnimationName					= MUOrcArchr_TNTD
				AnimationMode					= ONCE
				AnimationSpeedFactorRange		= 0.8 1.2
			End
			Flags								= RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
		End



		AnimationState							= EMOTION_POINTING
			Animation							= Pointing1
				AnimationName					= MUOrcArchr_PNTA
				AnimationMode					= LOOP
			End
		End


		AnimationState							= EMOTION_CELEBRATING
			Animation							= CHRA1
				AnimationName					= MUOrcArchr_CHRA
				AnimationMode					= Once
				AnimationSpeedFactorRange		= 0.8 1.2
			End
			Animation							= CHRA2
				AnimationName					= MUOrcArchr_CHRB
				AnimationMode					= Once
				AnimationSpeedFactorRange		= 0.8 1.2
			End
			Animation							= CHRA3
				AnimationName					= MUOrcArchr_CHRC
				AnimationMode					= Once
				AnimationSpeedFactorRange		= 0.8 1.2
			End
			Flags								= RESTART_ANIM_WHEN_COMPLETE
		End



		AnimationState							= EMOTION_ALERT
			Animation							= ALERT
				AnimationName					= MUOrcArchr_IDLB
				AnimationMode					= LOOP
			End
			Flags								= RANDOMSTART
		End

		AnimationState							= RAISING_FLAG
			Animation							= CHRA1
				AnimationName					= MUOrcArchr_CHRA
				AnimationMode					= Once
				AnimationSpeedFactorRange		= 0.9 1.1
			End
			Animation							= CHRA2
				AnimationName					= MUOrcArchr_CHRB
				AnimationMode					= Once
				AnimationSpeedFactorRange		= 0.9 1.1
			End
			Animation							= CHRA3
				AnimationName					= MUOrcArchr_CHRC
				AnimationMode					= Once
				AnimationSpeedFactorRange		= 0.9 1.1
			End
			Flags								= RESTART_ANIM_WHEN_COMPLETE
		End




		AnimationState = SELECTED
			StateName			= STATE_Selected
 			Animation			= Selected
				AnimationName	= MUOrcArchr_ATNB
				AnimationMode	= LOOP
			End
			BeginScript
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Idle"	then CurDrawableSetTransitionAnimState("TRANS_Idle_to_Selected") return end
			EndScript
		End



		TransitionState = TRANS_Idle_to_Selected
			Animation			= Salute
				AnimationName	= MUOrcArchr_ATNA
				AnimationMode	= ONCE
			End
		End

		TransitionState = TRANS_Selected_to_Idle
			Animation			= ATNC
				AnimationName	= MUOrcArchr_ATNC
				AnimationMode	= ONCE
			End
		End


