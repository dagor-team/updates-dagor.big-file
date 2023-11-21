	Draw = W3DScriptedModelDraw ModuleTag_Paralyzed
		DefaultModelConditionState
			Model = None
		End
		AnimationState = DYING

		End
		AnimationState = EMOTION_UNCONTROLLABLY_AFRAID MOUNTED
			ParticleSysBone NONE StunMedium
		End
		AnimationState = EMOTION_UNCONTROLLABLY_AFRAID
			ParticleSysBone NONE StunSmall
		End
		AnimationState = EMOTION_TERROR MOUNTED
			ParticleSysBone NONE StunMedium
		End
		AnimationState = EMOTION_TERROR
			ParticleSysBone NONE StunSmall
		End
	End


