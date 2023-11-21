



		AnimationState			= FIRING_E
			Animation
				AnimationName	= GURanger_BMB2
				AnimationMode   = LOOP
				AnimationSpeedFactorRange	= 2.0 2.5
				AnimationBlendTime = 30
			End
		End


		AnimationState						= THROWN_PROJECTILE WEAPONSTATE_CLOSE_RANGE
			Animation						= FLYA
				AnimationName				= GURanger_FLYB
				AnimationMode				= LOOP
			End
		End

		AnimationState						= THROWN_PROJECTILE
			Animation						= FLYA
				AnimationName				= GURanger_FLYA
				AnimationMode				= LOOP
			End
		End

		AnimationState						= PASSENGER FREEFALL WEAPONSTATE_CLOSE_RANGE
			Animation						= FLLB
				AnimationName				= GURanger_FLLB
				AnimationMode				= LOOP
			End
			StateName						= Sword
		End

		AnimationState						= PASSENGER FREEFALL
			Animation						= FLLA
				AnimationName				= GURanger_FLLA
				AnimationMode				= LOOP
			End
			StateName						= Bow
		End

		AnimationState						= FREEFALL WEAPONSTATE_CLOSE_RANGE
			StateName						= STATE_Freefall
			Animation						= FLYB
				AnimationName				= GURanger_FLYB
				AnimationMode				= LOOP
				AnimationBlendTime			= 10
				AnimationSpeedFactorRange	= 0.7	0.7
			End
		End

		AnimationState						= FREEFALL
			SimilarRestart					= Yes
			StateName						= STATE_Freefall
			Animation						= FLYA
				AnimationName				= GURanger_FLYA
				AnimationMode				= LOOP
				AnimationBlendTime			= 10
				AnimationSpeedFactorRange	= 0.65	0.65
			End
		End


		AnimationState					=	STUNNED_FLAILING
			Animation					=	StunFlail
				AnimationName			=	GURanger_FLYA
				AnimationMode			=	LOOP
				AnimationSpeedFactorRange	= 0.4 0.6
			End
			Flags						=	RANDOMSTART
		End



		AnimationState						= DYING DEATH_2
			Animation
				AnimationName				= GURanger_IDLA
				AnimationMode				= LOOP
				AnimationBlendTime			= 10
			End
		End

		AnimationState						= DYING BURNINGDEATH
			Animation
				AnimationName				= GURanger_DIEA
				AnimationMode				= ONCE
				AnimationBlendTime			= 10
			End
		End
		AnimationState						= DYING SPLATTED WEAPONSTATE_CLOSE_RANGE
			Animation						= Splattered
				AnimationName				= GURanger_LNDB
				AnimationMode				= ONCE
			End
		End

		AnimationState						= DYING SPLATTED
			Animation						= Splattered
				AnimationName				= GURanger_LNDA
				AnimationMode				= ONCE
			End
		End

		AnimationState						= DYING WEAPONSTATE_CLOSE_RANGE
			Animation						= Die
				AnimationName				= GURanger_DIEB
				AnimationMode				= ONCE
			End
		End

		AnimationState						= DYING
			Animation						= Die
				AnimationName				= GURanger_DIEA
				AnimationMode				= ONCE
			End
		End

		AnimationState						= BURNINGDEATH
			Animation
				AnimationName				= GURanger_MFDA
				AnimationMode				= LOOP
				Distance					= 20
			End
		End

		AnimationState						= PARALYZED
			Animation
				AnimationName				= GURanger_IDLC
				AnimationMode				= LOOP
			End
		End


		AnimationState						= STUNNED_STANDING_UP WEAPONSTATE_CLOSE_RANGE
			Animation						= GTPA
				AnimationName				= GURanger_GTPB
				AnimationMode				= ONCE
				AnimationSpeedFactorRange	= 0.7 1.1
			End
		End

		AnimationState						= STUNNED_STANDING_UP
			Animation						= GTPA
				AnimationName				= GURanger_GTPA
				AnimationMode				= ONCE
				AnimationSpeedFactorRange	= 0.7 1.1
			End
		End

		AnimationState						= STUNNED WEAPONSTATE_CLOSE_RANGE
			Animation						= Stun
				AnimationName				= GURanger_LNDB
				AnimationMode				= ONCE
			End
		End

		AnimationState						= STUNNED
			Animation						= Stun
				AnimationName				= GURanger_LNDA
				AnimationMode				= ONCE
			End
		End




		AnimationState        =  FIRING_OR_PREATTACK_B
			Animation           = ATKD
				AnimationName     = GURanger_ATKA
				AnimationMode     = ONCE
				UseWeaponTiming		= Yes
			End
			Animation           = ATKE
				AnimationName     = GURanger_ATKB
				AnimationMode     = ONCE
				UseWeaponTiming		= Yes
			End

    		StateName           = STATE_Sword
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrownock")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bow" then CurDrawableSetTransitionAnimState("TRANS_SwitchToSwords") end
			EndScript
		End



		AnimationState						= PREATTACK_A
			StateName						= STATE_Firing
			Animation						= ReadyToDrawn
				AnimationName				= GURanger_ATKD1
				AnimationMode				= ONCE

				AnimationSpeedFactorRange	= 1.5 1.5
				AnimationBlendTime			= 10
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End

		AnimationState						= FIRING_OR_RELOADING_A
			StateName						= STATE_Firing
			Animation						= OneFrameOfShooting
				AnimationName				= GURanger_ATKD2
				AnimationMode				= ONCE

				AnimationSpeedFactorRange	= 1.0 1.0
				AnimationBlendTime			= 0
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End

		AnimationState						= PREATTACK_C
			StateName						= STATE_Firing
			Animation						= ReadyToDrawn
				AnimationName				= GURanger_ATKD1
				AnimationMode				= ONCE

				AnimationSpeedFactorRange	= 1.5 1.5
				AnimationBlendTime			= 10
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End

		AnimationState						= FIRING_OR_RELOADING_C
			StateName						= STATE_Firing
			Animation						= OneFrameOfShooting
				AnimationName				= GURanger_ATKD2
				AnimationMode				= ONCE

				AnimationSpeedFactorRange	= 1.0 1.0
				AnimationBlendTime			= 0
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End






		AnimationState					= MOVING EMOTION_TERROR
			Animation					= Terror
				AnimationName			= GURanger_RUNC
				AnimationMode			= LOOP
				Distance				= 26
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End

		AnimationState						= MOVING WEAPONSTATE_CLOSE_RANGE
			StateName						= STATE_Sword
			Animation						= RunWithSword
				AnimationName				= GURanger_RUNB
				AnimationMode				= LOOP
				Distance					= 28
			End
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrownock")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Bow" then CurDrawableSetTransitionAnimState("TRANS_Bow_To_Sword") end
			EndScript
		End

		AnimationState						= MOVING
			StateName						= STATE_Bow
			Animation						= RunWithSword
				AnimationName				= GURanger_RUNA
				AnimationMode				= LOOP
				Distance					= 28
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Sword" then CurDrawableSetTransitionAnimState("TRANS_Sword_To_Bow") end
			EndScript
		End


		AnimationState					= CONTINUOUS_FIRE_MEAN
			StateName					=	STATE_Firing
			Animation					=	HangFrameWhileCoasting
				AnimationName			=	GURanger_ATKD2
				AnimationMode			=	MANUAL
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End

		AnimationState						= CONTINUOUS_FIRE_SLOW
			StateName						= STATE_Idle
			Animation						= PutAwayArrow
				AnimationName				= GURanger_ATKD3
				AnimationMode				= ONCE
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End
















		AnimationState						= EMOTION_AFRAID WEAPONSTATE_CLOSE_RANGE
			ShareAnimation					= Yes
			StateName						= STATE_Sword
			Animation						= FearWithSword
				AnimationName				= GURanger_FERB
				AnimationMode				= LOOP
			End
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrownock")
			EndScript
		End
		AnimationState						= EMOTION_AFRAID
			ShareAnimation					= Yes
			StateName						= STATE_Bow
			Animation						= FERA
				AnimationName				= GURanger_FERA
				AnimationMode				= LOOP
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End

		AnimationState						= EMOTION_TAUNTING
			ShareAnimation					= Yes
			Animation						= Taunting
				AnimationName				= GURanger_TNTA
				AnimationMode				= ONCE
			End
			Animation						= Taunting2
				AnimationName				= GURanger_TNTB
				AnimationMode				= ONCE
			End
			Flags							= RANDOMSTART RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End

		AnimationState						= EMOTION_POINTING WEAPONSTATE_CLOSE_RANGE
			Animation						= Point
				AnimationName				= GURanger_PNTA
				AnimationMode				= LOOP
			End
			Flags				= RANDOMSTART
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrownock")
			EndScript
		End
		AnimationState						= EMOTION_POINTING
			Animation						= Pointing1
				AnimationName				= GURanger_PNTA
				AnimationMode				= LOOP
			End
			Flags						= RANDOMSTART
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End

		AnimationState						= EMOTION_CELEBRATING WEAPONSTATE_CLOSE_RANGE
			Animation						= &&CHEER WITH SWORD&&
				AnimationName				= GURanger_IDLA
				AnimationMode				= LOOP
			End
			BeginScript
				CurDrawableHideSubObject("arrow")
				CurDrawableHideSubObject("arrownock")
			EndScript
		End
		AnimationState						= EMOTION_CELEBRATING
			ShareAnimation					= Yes
			Animation						= CHRA
				AnimationName				= GURanger_CHRA
				AnimationMode				= Once
			End
			Animation						= CHRB
				AnimationName				= GURanger_CHRB
				AnimationMode				= Once
			End
			Flags							= RESTART_ANIM_WHEN_COMPLETE
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
			EndScript
		End

		AnimationState						= EMOTION_ALERT
			StateName						= STATE_Alert
			Animation						= Alert
				AnimationName				= GURanger_IDLA
				AnimationMode				= ONCE
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")


			EndScript
		End

		AnimationState						= RAISING_FLAG
			ShareAnimation					= Yes
			Animation						= CHRA
				AnimationName				= GURanger_CHRA
				AnimationMode				= Once
				AnimationSpeedFactorRange	= 0.9 1.1
			End
			Animation						= CHRB
				AnimationName				= GURanger_CHRB
				AnimationMode				= Once
				AnimationSpeedFactorRange	= 0.9 1.1
			End
			Flags							= RESTART_ANIM_WHEN_COMPLETE
		End



		AnimationState						= SELECTED
			StateName						= STATE_Selected
			Animation						= Selected
				AnimationName				= GURanger_IDLD
				AnimationMode				= LOOP
			End
			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")


			EndScript
		End



		IdleAnimationState
			StateName						= STATE_Bow_Idle

			Animation						= IdleBowG
				AnimationName				= GURanger_IDLC
				AnimationMode				= ONCE
				AnimationPriority			= 6
			End
			Animation						= IdleBowG
				AnimationName				= GURanger_IDLC
				AnimationMode				= ONCE
				AnimationPriority			= 6
			End
			Animation						= IdleBowG
				AnimationName				= GURanger_IDLF
				AnimationMode				= ONCE
			End
			Animation						= IdleBowF
				AnimationName				= GURanger_IDLG
				AnimationMode				= ONCE
			End

			Flags							= RESTART_ANIM_WHEN_COMPLETE

			BeginScript
				CurDrawableShowSubObject("arrow")
				CurDrawableShowSubObject("arrownock")
				Prev = CurDrawablePrevAnimationState()
				if Prev == "STATE_Sword" then CurDrawableSetTransitionAnimState("TRANS_Sword_To_Bow") end
				if Prev == "STATE_Selected" then CurDrawableSetTransitionAnimState("TRANS_AttentionToIdle") end
			EndScript
		End


		TransitionState						= TRANS_Bow_To_Sword
			Animation						= DrawSwords
				AnimationName				= GURanger_STHA
				AnimationMode				= ONCE
				AnimationSpeedFactorRange	= 0.9 1.1
			End
		End

		TransitionState						= TRANS_Sword_To_Bow
			Animation						= DrawBow
				AnimationName				= GURanger_STHB
				AnimationMode				= ONCE
				AnimationSpeedFactorRange	= 0.9 1.1
			End
		End

		TransitionState       = TRANS_IdleToAttention
			Animation           = ATNA
				AnimationName     = GURanger_ATNA
				AnimationMode     = ONCE
			End
		End

		TransitionState       = TRANS_AttentionToIdle
			Animation           = ATND
				AnimationName     = GURanger_ATNA
				AnimationMode     = ONCE_BACKWARDS
			End
			Flags				= START_FRAME_LAST
		End

		TransitionState       = TRANS_IdleToAttention
			Animation           = ATNA
				AnimationName     = GURanger_ATNC
				AnimationMode     = ONCE
			End
		End

		TransitionState       = TRANS_AttentionToIdle
			Animation           = ATND
				AnimationName     = GURanger_ATNC
				AnimationMode     = ONCE_BACKWARDS
			End
			Flags				= START_FRAME_LAST
		End


