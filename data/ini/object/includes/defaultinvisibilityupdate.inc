
	Behavior = InvisibilityUpdate ModuleTag_ElvenCamouflage
		InvisibilityNugget
			InvisibilityType	= CAMOUFLAGE
			DetectionRange		= CAMOUFLAGE_RADIUS
			ForbiddenConditions	= AWAY_FROM_TREES MOVING FIRING_ANY
		End
		UpdatePeriod			= 2000
		StartsActive			= Yes


		UnitSpecificSoundNameToUseAsVoiceMoveToStealthyArea = VoiceMoveToTrees
		UnitSpecificSoundNameToUseAsVoiceEnterStateMoveToStealthyArea = VoiceEnterStateMoveToTrees
	End


