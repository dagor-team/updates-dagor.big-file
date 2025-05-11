	Behavior = OCLSpecialPower ModuleTag_SummonBloodLineOfTheKings
		SpecialPowerTemplate = SpellBookBloodLineOfTheKing
		OCL                  = OCL_BlutliniederKonige_neu
                TriggerFX            = FX_FogSummon
		CreateLocation       = CREATE_AT_LOCATION
		AvailableAtStart     = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_SummonRadagastRohan
		SpecialPowerTemplate = SpellBookRadagastRohan
		OCL                  = OCL_SpawnRadagastRohanEgg
                TriggerFX	     = FX_EredLuinGandalfSummon
		CreateLocation       = CREATE_AT_LOCATION
		AvailableAtStart	 = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_FloodOarni
		SpecialPowerTemplate = SpellBookFlood
		OCL                  = OCL_SpellBookFloodOarni
		CreateLocation       = CREATE_AT_LOCATION
		AvailableAtStart	 = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_SummonThlimEcthel
		SpecialPowerTemplate    = SpellBookThlimEcthel
		OCL                     = OCL_ThlimEcthelEgg
        TriggerFX				= FX_FogSummon
		CreateLocation          = CREATE_AT_LOCATION
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = SpecialPowerModule ModuleTag_ForestLothlorien
        SpecialPowerTemplate             = SpellBookForestLothlorien
        AttributeModifier                = SpellBookForestLothlorienModifier
        AttributeModifierRange           = 150
        AttributeModifierAffects         = ALL -HERO -STRUCTURE ENEMIES
        TriggerFX                        = FX_ElvenWoodSpellFX
	UpdateModuleStartsAttack	= No
	AvailableAtStart		= No
	RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
        AntiCategory                     = LEADERSHIP BUFF
    End

	Behavior = OCLSpecialPower ModuleTag_SummonEredLuinGandalf
		SpecialPowerTemplate = SpellBookEredLuinGandalf
		OCL                  = OCL_SpawnEredLuinGandalfEgg
                TriggerFX	     = FX_EredLuinGandalfSummon
		CreateLocation       = CREATE_AT_LOCATION
		AvailableAtStart	 = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = OCLSpecialPower ModuleTag_SteppenRohans
        SpecialPowerTemplate        = SpellBookSteppenRohans
        TriggerFX                   = FX_SteppenRohansFX
        OCL                         = OCL_SpecialPowerSteppenRohans
        CreateLocation              = CREATE_AT_LOCATION
        UpdateModuleStartsAttack    = No
        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SternEarendils
        SpecialPowerTemplate = SpellBookSternEarendils
        OCL                  = OCL_SpecialPowerSternEarendils
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = OCLSpecialPower ModuleTag_SummonNoldorAman
		SpecialPowerTemplate    = SpellBookNoldorAman
		OCL                     = OCL_NoldorAmanEgg
        TriggerFX		= FX_FogSummon
		CreateLocation          = CREATE_AT_LOCATION
		AvailableAtStart	= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = SpecialPowerModule ModuleTag_WindOfProtection
	SpecialPowerTemplate		= SpellBookWindsOfProtection
	AttributeModifier		= SpellBookWindsOfProtectionBonus
	AttributeModifierRange		= 50
	AttributeModifierAffects	= ANY ALLIES +STRUCTURE
	TriggerFX			= FX_WindsOfProtection
	UpdateModuleStartsAttack	= No
	AvailableAtStart		= No
	RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_LothlorienPfeilsalve
        SpecialPowerTemplate = SpellBookLothlorienPfeilsalve
        OCL                  = OCL_SpellBookArrowVolley
        CreateLocation       = USE_SECONDARY_OBJECT_LOCATION
        NearestSecondaryObjectFilter = NONE SAME_PLAYER +CASTLE_KEEP
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = CloudBreakSpecialPower    ModuleTag_ElberethGilthoniel
        SpecialPowerTemplate            = SpellBookElberethGilthoniel
        SunbeamObject                   = LorienElberethObject
        ObjectSpacing                   = 300
        AttributeModifier               = SpellbookElberethStructureBonus
        AttributeModifierAffects        = ANY +STRUCTURE +NEED_BASE_FOUNDATION ALLIES
        AttributeModifierWeatherBased   = Yes
        WeatherDuration                 = 30000
        ChangeWeather                   = CLOUDY
        AvailableAtStart                = No
        RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = PlayerHealSpecialPower ModuleTag_RebuildArnor
        SpecialPowerTemplate = SpellBookRebuildArnor
        HealAffects          = STRUCTURE
        HealAsPercent        = No
        HealAmount           = 100000
        HealRadius           = SPELL_REBUILD_RADIUS_STRUCTURE_SCAN
        HealFX               = FX_SpellRebuild
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = OCLSpecialPower ModuleTag_SummonHaldirElben
		SpecialPowerTemplate = SpellBookHaldirElben
		OCL                  = OCL_SpawnElbenEgg
                TriggerFX	     = FX_ElvenAlliesSummon
		CreateLocation       = CREATE_AT_LOCATION
		AvailableAtStart     = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

      Behavior = PlayerHealSpecialPower ModuleTag_HealLothlorien
        SpecialPowerTemplate  = SpellBookHealLothlorien
        HealAffects              = INFANTRY CAVALRY MONSTER MACHINE SHIP DOZER HERO
        HealAmount              = 0.6
        HealRadius              = SPELL_HEAL_RADIUS_UNIT_SCAN
        HealFX                  = FX_SpellHealUnitHealBuff

        HealOCL               = OCL_HealSpellHordeReplenishPing
        AvailableAtStart      = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = PlayerHealSpecialPower ModuleTag_HealRohan
        SpecialPowerTemplate  = SpellBookHealRohan
        HealAffects              = INFANTRY CAVALRY MONSTER MACHINE SHIP DOZER HERO
        HealAmount              = 0.6
        HealRadius              = SPELL_HEAL_RADIUS_UNIT_SCAN
        HealFX                  = FX_SpellHealUnitHealBuff

        HealOCL               = OCL_HealSpellHordeReplenishPing
        AvailableAtStart      = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = PlayerHealSpecialPower ModuleTag_HealImladris
        SpecialPowerTemplate  = SpellBookHealImladris
        HealAffects              = INFANTRY CAVALRY MONSTER MACHINE SHIP DOZER HERO
        HealAmount              = 0.6
        HealRadius              = SPELL_HEAL_RADIUS_UNIT_SCAN
        HealFX                  = FX_SpellHealUnitHealBuff

        HealOCL               = OCL_HealSpellHordeReplenishPing
        AvailableAtStart      = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = ElvenWoodSpecialPower ModuleTag_WalderCardolans
        SpecialPowerTemplate        = SpellBookWalderCardolans
        ElvenGroveObject            = ElvenGrove
        ElvenWoodRadius             = SPELLBOOK_TAINT_RADIUS
        ElvenWoodFX                 = FX_ElvenWoodSpellFX
        ElvenWoodOCL                = OCL_TyrnGorthad
        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = CloudBreakSpecialPower    ModuleTag_CloudBreakRohan
        SpecialPowerTemplate            = SpellBookCloudBreakRohan
        SunbeamObject                    = CloudBreakSunbeam
        ObjectSpacing                    = 300
        AttributeModifierAffects        = ANY +INFANTRY +CAVALRY +MONSTER -HERO ENEMIES
        ReEnableAntiCategory            = Yes
        AttributeModifierWeatherBased    = Yes
        WeatherDuration                    = SPELL_CLOUDBREAK_DURATION
        ChangeWeather                    = SUNNY
        AvailableAtStart                = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

     Behavior   = OCLSpecialPower ModuleTag_Erschutterung
        SpecialPowerTemplate    = SpellBookErschutterung
        OCL                     = OCL_SpellBookErschutterung
        CreateLocation          = CREATE_AT_LOCATION
        AvailableAtStart        = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_EnshroudingMistImladris
        SpecialPowerTemplate = SpellBookEnshroudingMistImladris
        OCL                  = OCL_SpecialPowerEnshroudingMist
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_VerzaubertesWasser
        SpecialPowerTemplate = SpellBookVerzauberterFluss
        OCL                  = OCL_SpellBookVerzauberterFluss
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = SpecialPowerModule ModuleTag_SpellBookHornderNoldor
        SpecialPowerTemplate        = SpellBookHornderNoldor
        AttributeModifier            = SpellBookRallyingCallModifier
        AttributeModifierRange        = 100
        AttributeModifierAffects    = ANY +HORDE +INFANTRY -HERO -DOZER -IsengardFanatic -IsengardBerserkerHorde  -DwarvenZerker -DwarvenZerkerHorde -NoldorWarrior -NoldorWarriorHorde
        TriggerFX                    = FX_SpellNoldorHorn
        UpdateModuleStartsAttack    = No
        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
	
	Behavior = SpecialPowerModule ModuleTag_SpellBookHornderLorien
        SpecialPowerTemplate        = SpellBookHornderLorien
        AttributeModifier            = SpellBookRallyingCallModifier
        AttributeModifierRange        = 100
        AttributeModifierAffects    = ANY +HORDE +INFANTRY -HERO -DOZER -IsengardFanatic -IsengardBerserkerHorde  -DwarvenZerker -DwarvenZerkerHorde -NoldorWarrior -NoldorWarriorHorde
        TriggerFX                    = FX_SpellGaladhrimHorn
        UpdateModuleStartsAttack    = No
        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = SpecialPowerModule ModuleTag_SpellBookWaffenderNoldor
        SpecialPowerTemplate        = SpellBookWaffenderNoldor
        AttributeModifier            = SpellBookRallyingCallModifier
        AttributeModifierRange        = 100
        AttributeModifierAffects    = ANY +HORDE +INFANTRY -HERO -DOZER -IsengardFanatic -IsengardBerserkerHorde  -DwarvenZerker -DwarvenZerkerHorde -NoldorWarrior -NoldorWarriorHorde
        TriggerFX                    = FX_SpellNoldorHorn
        UpdateModuleStartsAttack    = No
        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
	
	Behavior = PlayerUpgradeSpecialPower    ModuleTag_SpellBookTomBombadil
        SpecialPowerTemplate        	= SpellBookTomBombadil
        UpgradeName             		= Upgrade_ImladrisGelehrtenWeisheit 
        UpdateModuleStartsAttack    	= No
        AffectAllies            		= No
        AvailableAtStart        		= No
        RequirementsFilterMPSkirmish 	= SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic 	= SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End
    
	Behavior = OCLSpecialPower ModuleTag_TomBombadilundGoldbeere
        SpecialPowerTemplate = SpellBookTomBombadilundGoldbeere
        OCL                  = OCL_SpawnTomBombadilEgg
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_TomBombadilundGoldbeereLothlorien
        SpecialPowerTemplate = SpellBookTomBombadilundGoldbeereLothlorien
        OCL                  = OCL_SpawnTomBombadilEgg
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookKhazadDumFaction
		SpecialPowerTemplate		= SpellBookKhazadDumFaction
		UpgradeName 			= Upgrade_KhazadDumFaction
		UpdateModuleStartsAttack	= No
		AffectAllies			= No
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_SummonDieGraueScharMM
		SpecialPowerTemplate = SpellBookDieGraueSchaarMM
		OCL                  = OCL_SpawndieGraueScharSBEgg
                TriggerFX	     = FX_DunedainSummon
		CreateLocation       = CREATE_AT_LOCATION
		AvailableAtStart     = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_SummonDieGraueScharGondor
		SpecialPowerTemplate = SpellBookDieGraueSchaar
		OCL                  = OCL_SpawndieGraueScharGondorEgg
                TriggerFX	     = FX_DunedainSummon
		CreateLocation       = CREATE_AT_LOCATION
		AvailableAtStart     = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = OCLSpecialPower ModuleTag_BeistandEisenberge
        SpecialPowerTemplate  = SpellBookBeistandEisenberge
        OCL                   = OCL_SpawnBeistandEisenbergeEgg
        TriggerFX             = FX_RohirimSummon
        CreateLocation        = CREATE_AT_LOCATION

        AvailableAtStart      = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SummonRohanMM
        SpecialPowerTemplate = SpellBookSummonRohanMM
        OCL                  = OCL_SpawnRohanMinasThiritEgg
        TriggerFX             = FX_RohirimSummon
        CreateLocation       = CREATE_AT_LOCATION
        UpgradeName             = Upgrade_RohanAllies
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SummonRohanGondor
        SpecialPowerTemplate = SpellBookSummonRohanGondor
        OCL                  = OCL_SpawnRohanGondorEgg
        TriggerFX            = FX_RohirimSummon
        CreateLocation       = CREATE_AT_LOCATION
        UpgradeName          = Upgrade_RohanAllies
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SummonBeistandGandalfs
        SpecialPowerTemplate = SpellBookSummonBeistandGandalfs
        OCL                  = OCL_SpawnBeistandGandalfsEgg
        TriggerFX            = FX_RohirimSummon
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = SpecialPowerModule ModuleTag_TrotzderZwerge
        SpecialPowerTemplate          = SpellBookTrotzderZwerge
        AttributeModifier             = SpellBookTodestrotz
        AttributeModifierRange        = 100
        AttributeModifierAffects      = ANY +HORDE +INFANTRY +CAVALRY -HERO -DOZER
        UpdateModuleStartsAttack      = No
        AvailableAtStart              = No
        RequirementsFilterMPSkirmish  = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic   = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = OCLSpecialPower ModuleTag_SummonGandalfforHK
		SpecialPowerTemplate     = SpellBookGandalfderWeiﬂefor_HK
		OCL                      = OCL_SpawnGandalfderWeiﬂeforHK
                TriggerFX	         = FX_DunedainSummon
		CreateLocation           = CREATE_AT_LOCATION

		AvailableAtStart	 = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = OCLSpecialPower ModuleTag_SummonErkenbrandWestfold_forHK
        SpecialPowerTemplate = SpellBookErkenbrandWestfold_forHK
        OCL                  = OCL_ErkenbrandandUnitsSummonEgg_forHK
        TriggerFX             = FX_GamlingHeroldSummon
        CreateLocation       = CREATE_AT_LOCATION
        UpgradeName             = Upgrade_RohanAllies
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior   = OCLSpecialPower ModuleTag_GeschenkeLoriens
        SpecialPowerTemplate    = SpellBookGeschenkeLoriens
        OCL                     = OCL_SpellBookGeschenkeLoriens
        CreateLocation          = CREATE_AT_LOCATION
        AvailableAtStart        = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SpawnLoneTowerGondorEdain
        SpecialPowerTemplate = SpellBookSpawnLoneTower_Edain
        OCL                  = OCL_GondorSpellBookSpawnLoneTower
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC


    End

    Behavior = ElvenWoodSpecialPower ModuleTag_ElvenWoodImladris
        SpecialPowerTemplate        = SpellBookElvenWoodImladris
        ElvenGroveObject            = ElvenGrove
        ElvenWoodRadius             = SPELLBOOK_TAINT_RADIUS
        ElvenWoodFX                 = FX_ElvenWoodSpellFX
        ElvenWoodOCL                = OCL_ElvenWoodSeed

        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = ElvenWoodSpecialPower ModuleTag_WalderIthilliens
        SpecialPowerTemplate        = SpellBookWalderIthilliens
        ElvenGroveObject            = ElvenGrove
        ElvenWoodRadius             = SPELLBOOK_TAINT_RADIUS
        ElvenWoodFX                 = FX_ElvenWoodSpellFX
        ElvenWoodOCL                = OCL_ElvenWoodSeed

        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = PlayerHealSpecialPower ModuleTag_Zwergenbier
        SpecialPowerTemplate  = SpellBookZwergenbier
        HealAffects           = INFANTRY CAVALRY MONSTER DOZER HERO
        HealAmount            = 0.8
        HealRadius            = SPELL_HEAL_RADIUS_UNIT_SCAN
        HealFX                = FX_SpellZwergenbierHealUnitHealBuff
        HealOCL               = OCL_ZwergenbierSpellHordeReplenishPing
        AvailableAtStart      = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SummonGondorRitter
        SpecialPowerTemplate = SpellBookGondorRitter
        OCL                  = OCL_SpawnGondorRitterEgg
        TriggerFX             = FX_RohirimSummon
        CreateLocation       = CREATE_AT_LOCATION

        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_Allwissenheit
        SpecialPowerTemplate = SpellBookAllwissenheit
        OCL                  = SpecialPowerIvoryTowerVision

        CreateLocation       = CREATE_AT_LOCATION

        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = OCLSpecialPower ModuleTag_Adler
		SpecialPowerTemplate = SpellBookAdler
		OCL                  = OCL_SpawnAdler
		CreateLocation       = CREATE_ABOVE_LOCATION
		AvailableAtStart	 = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_AdlerArnor
		SpecialPowerTemplate = SpellBookAdlerArnor
		OCL                  = OCL_SpawnAdler
		CreateLocation       = CREATE_ABOVE_LOCATION
		AvailableAtStart	 = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_ZwergeAdler
		SpecialPowerTemplate = SpellBookZwergeAdler
		OCL                  = OCL_SpawnAdler
		CreateLocation       = CREATE_ABOVE_LOCATION
		AvailableAtStart	 = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookAnduril
		SpecialPowerTemplate		= SpellBookAnduril
		UpgradeName 			= Upgrade_Anduril
		UpdateModuleStartsAttack	= No
		AffectAllies			= No
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookGandalfWhite
		SpecialPowerTemplate		= SpellBookGandalftheWhite
		UpgradeName 			= Upgrade_GandalfWhite
		UpdateModuleStartsAttack	= No
		AffectAllies			= No
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = OCLSpecialPower ModuleTag_SummonBeistandDolAmroths
        SpecialPowerTemplate = SpellBookBeistandDolAmroths
        OCL                  = OCL_SpawnBeistandDolAmroths
        TriggerFX             = FX_RohirimSummon
        CreateLocation       = CREATE_AT_LOCATION

        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End


	Behavior = OCLSpecialPower ModuleTag_Valar
		SpecialPowerTemplate 		= SpellBookValar
		OCL                  		= OCL_SpellBookValarSeed
		CreateLocation       		= USE_SECONDARY_OBJECT_LOCATION
		NearestSecondaryObjectFilter 	= NONE SAME_PLAYER +CASTLE_KEEP
		AvailableAtStart	 	= No
		RequirementsFilterMPSkirmish 	= SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic 	= SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End


	Behavior = OCLSpecialPower ModuleTag_Windhauch
		SpecialPowerTemplate 		= SpellBookWindhauch
		OCL                  		= OCL_SpellBookWindhauch
		CreateLocation       		= CREATE_AT_LOCATION
		AvailableAtStart	 	= No
		RequirementsFilterMPSkirmish 	= SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic 	= SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookHerrinLicht
		SpecialPowerTemplate		= SpellBookHerrindesLichts
		UpgradeName 			= Upgrade_HerrinLicht
		UpdateModuleStartsAttack	= No
		AffectAllies			= No
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower SpellBookLuthiens_ModuleTag
		SpecialPowerTemplate 		= SpellBookGesangLuthiens
		OCL                  		= OCL_SpellBookGesangLuthiens
		CreateLocation       		= CREATE_AT_LOCATION
		TriggerFX			= FX_UnSummonElvenAllies
		AvailableAtStart	 	= No
		RequirementsFilterMPSkirmish 	= SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic 	= SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookAbendstern
		SpecialPowerTemplate		= SpellBookArwenAbendstern
		UpgradeName 			= Upgrade_AbendsternSpellbook
		UpdateModuleStartsAttack	= No
		AffectAllies			= No
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_SummonBandderGefahrten
		SpecialPowerTemplate = SpellBookBandderGefahrten
		OCL                  = OCL_SpawnBandderGefahrtenEgg
                TriggerFX	     = FX_DunedainSummon
		CreateLocation       = CREATE_AT_LOCATION
		AvailableAtStart     = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

  	Behavior = SpecialPowerModule	SpellBookDraft_Draft
		SpecialPowerTemplate		= SpellBookDraft
		AttributeModifier		= SpellBookDraftMod
		AttributeModifierRange		= 999999
		AttributeModifierAffects	= NONE +RohanPeasant_modneu
		AffectAllies			= Yes
		UpdateModuleStartsAttack	= No
		AttributeModifierFX		= FX_PeasantVoiceDraftUpgrade
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = OCLSpecialPower ModuleTag_SpawnLoneTowerArnor
        SpecialPowerTemplate = SpellBookSpawnLoneTowerArnor
        OCL                  = OCL_GondorSpellBookSpawnLoneTower
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC


    End

	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookRadagastderBraune
		SpecialPowerTemplate		= SpellBookRadagastderBraune
		UpgradeName 			= Upgrade_ThorinOrkrist
		UpdateModuleStartsAttack	= No
		AffectAllies			= No
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookZuchtpferde
		SpecialPowerTemplate		= SpellBookZuchtpferde
		UpgradeName 			= Upgrade_RohanZuchtpferde
		UpdateModuleStartsAttack	= No
		AffectAllies			= No
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior   = OCLSpecialPower ModuleTag_SpellBookEinzugsbefehl
        SpecialPowerTemplate    = SpellBookEinzugsbefehl
        OCL                     = OCL_SpellBookEinzugsbefehl
        CreateLocation          = CREATE_AT_LOCATION
        AvailableAtStart        = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

      Behavior = PlayerHealSpecialPower ModuleTag_HealingOfTheOld
        SpecialPowerTemplate    = SpellBookHealingOfTheOld
        HealAffects             = INFANTRY CAVALRY MONSTER MACHINE SHIP DOZER HERO
        HealAmount              = 0.6
        HealRadius              = SPELL_HEAL_RADIUS_UNIT_SCAN
        HealFX                  = FX_JustAOldHealingFX
        HealOCL                 = OCL_HealSpellHordeReplenishPing2
        AvailableAtStart        = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic  = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = SpecialPowerModule      ModuleTag_HornOfArnor
        SpecialPowerTemplate         = SpellBookHornOfArnor
        AttributeModifier            = SpellBookWarChant
        AttributeModifierRange       = 100
        AttributeModifierAffects     = GENERIC_BUFF_RECIPIENT_OBJECT_FILTER
        TriggerFX                    = FX_SpellEnduraceOfArnor
        UpdateModuleStartsAttack     = No
        AvailableAtStart             = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = CloudBreakSpecialPower    ModuleTag_StarOfTheNorth
        SpecialPowerTemplate            = SpellBookStarOfTheNorth
        SunbeamObject                   = CloudBreakSunbeam
        ObjectSpacing                   = 300
        AttributeModifierAffects        = ANY +INFANTRY +CAVALRY +MONSTER -HERO -DOZER ENEMIES
        ReEnableAntiCategory            = Yes
        AttributeModifierWeatherBased   = Yes
        WeatherDuration                 = SPELL_CLOUDBREAK_DURATION
        ChangeWeather                   = SUNNY
        AvailableAtStart                = No
        RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = OCLSpecialPower ModuleTag_ArnorSummonHobbits
		SpecialPowerTemplate = SpellBookArnorSummonHobbits
		OCL                  = OCL_SpawnArnorHobbitBowEgg
                TriggerFX            = FX_HobbitSummon
		CreateLocation       = CREATE_AT_LOCATION
		UpgradeName	     = Upgrade_HobbitFriends
		AvailableAtStart     = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior   = OCLSpecialPower ModuleTag_SchwerterderWesternis
        SpecialPowerTemplate    = SpellBookSchwerterderWesternis
        OCL                     = OCL_SpellBookSchwerterWesternis
        CreateLocation          = CREATE_AT_LOCATION
        AvailableAtStart        = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookMerciForHealing
		SpecialPowerTemplate		= SpellBookGiftOfTheKingdom
		UpgradeName 			= Upgrade_AMerciOfDaKing
		UpdateModuleStartsAttack	= No
		AffectAllies		        = No
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_ArnorWaterwaveComin
		SpecialPowerTemplate 		= SpellBookRunBitchWatersComin
		OCL                  		= OCL_SpellArnorWaterwave
		CreateLocation       		= CREATE_AT_LOCATION
		AvailableAtStart	 	= No
		RequirementsFilterMPSkirmish 	= SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic 	= SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_SummonEaglesLothlorien
		SpecialPowerTemplate = SpellBookEagleAlliesLothlorien
		OCL                  = OCL_SpawnAdler
		CreateLocation       = CREATE_ABOVE_LOCATION
		AvailableAtStart	 = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_ZwergenVariantenSpell
		SpecialPowerTemplate = SpellBookZwergenVariantenSpell
		OCL                  = OCL_ZwergenVariantenSpell
                TriggerFX	     = FX_ZwergenVariantenSpell
		CreateLocation       = CREATE_AT_LOCATION
		AvailableAtStart     = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_ZwergenVariantenSpellKampagne
		SpecialPowerTemplate = SpellBookZwergenVariantenSpellKampagne
		OCL                  = OCL_ZwergenVariantenSpell
                TriggerFX	     = FX_ZwergenVariantenSpell
		CreateLocation       = CREATE_AT_LOCATION
		UpgradeName	     = Upgrade_ZwergenVariantenSpell
		AvailableAtStart     = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End


    Behavior = SpecialPowerModule ModuleTag_HornRohans
        SpecialPowerTemplate         = SpellBookHornRohans
        AttributeModifier            = SpellBookRallyingCallModifier
        AttributeModifierRange       = 100
        AttributeModifierAffects     = ANY +HORDE +INFANTRY -HERO -IsengardFanatic -IsengardBerserkerHorde  -DwarvenZerker -DwarvenZerkerHorde -NoldorWarrior -NoldorWarriorHorde
        TriggerFX                    = FX_SpellKingAndCountry
        UpdateModuleStartsAttack     = No
        AvailableAtStart             = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic  = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SummonHeerlager
        SpecialPowerTemplate = SpellBookSummonHeerlager
        OCL                  = OCL_SummonRohanHeerlager
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_DurinAlly
        SpecialPowerTemplate = SpellBookDurinAlly
        OCL                  = OCL_SpawnDwarvenDurin
        TriggerFX            = FX_RohirimSummon
        CreateLocation       = CREATE_AT_LOCATION
        UpgradeName          = Upgrade_RohanAllies
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SummonZornFangorns
        SpecialPowerTemplate = SpellBookZornFangorns
        OCL                  = OCL_SpawnZornFangornsEnts
        TriggerFX            = FX_SummonEntAllies
        CreateLocation       = CREATE_AT_LOCATION
        UpgradeName          = Upgrade_EntAllies
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_ZwergeStructureDecreaseKampagne
        SpecialPowerTemplate = SpellBookZwergeStructureDecreaseKampagne
        OCL                  = OCL_ZwergeStructureDecrease
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_ZwergeStructureDecrease
        SpecialPowerTemplate = SpellBookZwergeStructureDecrease
        OCL                  = OCL_ZwergeStructureDecrease
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = CloudBreakSpecialPower    ModuleTag_CloudBreakLothlorien
        SpecialPowerTemplate            = SpellBookCloudBreakLothlorien
        SunbeamObject                    = CloudBreakSunbeam
        ObjectSpacing                    = 300
        AttributeModifierAffects        = ANY +INFANTRY +CAVALRY +MONSTER -DOZER -HERO ENEMIES
        ReEnableAntiCategory            = Yes
        AttributeModifierWeatherBased    = Yes
        WeatherDuration                    = SPELL_CLOUDBREAK_DURATION
        ChangeWeather                    = SUNNY
        AvailableAtStart                = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = CloudBreakSpecialPower    ModuleTag_CloudBreakImladris
        SpecialPowerTemplate           = SpellBookCloudBreakImladris
        SunbeamObject                  = CloudBreakSunbeam
        ObjectSpacing                  = 300
        AttributeModifierAffects       = ANY +INFANTRY +CAVALRY +MONSTER -DOZER -HERO ENEMIES
        ReEnableAntiCategory           = Yes
        AttributeModifierWeatherBased  = Yes
        WeatherDuration                = SPELL_CLOUDBREAK_DURATION
        ChangeWeather                  = SUNNY
        AvailableAtStart               = No
        RequirementsFilterMPSkirmish   = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic    = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = OCLSpecialPower ModuleTag_SummonElkRider
		SpecialPowerTemplate     = SpellBookElkriderSpawn
		OCL                      = OCL_SpawnElkrider
                TriggerFX	         = FX_DunedainSummon
		CreateLocation           = CREATE_AT_LOCATION
		UpgradeName	         = Upgrade_ElvenAllies
		AvailableAtStart	 = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = OCLSpecialPower ModuleTag_SpawnLoneTowerZwerge
        SpecialPowerTemplate = SpellBookSpawnLoneTowerZwerge
        OCL                  = OCL_DwarfSpellBookSpawnLoneTower
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
        OnTriggerRechargeSpecialPower = SpellBookUndermine
    End

    Behavior = SpecialPowerModule ModuleTag_Zwergenhorn
        SpecialPowerTemplate        = SpellBookZwergenhorn
        AttributeModifier            = SpellBookRallyingCallModifier
        AttributeModifierRange        = 100
        AttributeModifierAffects    = ANY +HORDE +INFANTRY -HERO -IsengardFanatic -IsengardBerserkerHorde  -DwarvenZerker -DwarvenZerkerHorde -NoldorWarrior -NoldorWarriorHorde
        TriggerFX                    = FX_SpellRallyingCallIH
        UpdateModuleStartsAttack    = No
        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = OCLSpecialPower ModuleTag_SummonSBLetzteAllianzArnor
		SpecialPowerTemplate    = SpellBookSBLetzteAllianzArnor
		OCL                     = OCL_LetzteAllianzSBSummonEgg
                TriggerFX		= FX_FogSummon
		CreateLocation          = CREATE_AT_LOCATION
		AvailableAtStart	= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = OCLSpecialPower ModuleTag_SummonSBLetzteAllianzImladris
		SpecialPowerTemplate    = SpellBookSBLetzteAllianzImladris
		OCL                     = OCL_LetzteAllianzSBSummonEgg
                TriggerFX		= FX_FogSummon
		CreateLocation          = CREATE_AT_LOCATION
		AvailableAtStart	= No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = OCLSpecialPower ModuleTag_MenOfDaleAlliesKampagne
        SpecialPowerTemplate = SpellBookMenOfDaleAlliesKampagne
        OCL                  = OCL_SpawnMenOfDaleEgg
        TriggerFX             = FX_DunedainSummon
        CreateLocation       = CREATE_AT_LOCATION
        UpgradeName             = Upgrade_MenOfDaleAllies
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_EarthquakeKampagne
        SpecialPowerTemplate = SpellBookEarthquakeKampagne
        OCL                  = OCL_SpellBookEarthquake
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_CitadelKampagne
        SpecialPowerTemplate = SpellBookCitadelKampagne
        OCL                  = OCL_SpellBookCitadel
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_BombardKampagne
        SpecialPowerTemplate = SpellBookBombardKampagne
        OCL                  = OCL_SpellBookBombardSeed
        CreateLocation       = USE_SECONDARY_OBJECT_LOCATION
        NearestSecondaryObjectFilter = NONE SAME_PLAYER +CASTLE_KEEP
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_UndermineKampagne
        SpecialPowerTemplate = SpellBookUndermineKampagne
        OCL                  = OCL_SpellBookUndermine
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_BalinsGrabKampagne
        SpecialPowerTemplate = SpellBookBalinsGrabKampagne
        OCL                  = OCL_DwarvesBalinsGrab
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SpawnLoneTowerDwarfKampagne
        SpecialPowerTemplate = SpellBookSpawnLoneTowerKampagne
        OCL                  = OCL_DwarfSpellBookSpawnLoneTower
        CreateLocation       = CREATE_AT_LOCATION
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC


    End

	Behavior = OCLSpecialPower ModuleTag_EnshroudingMistKampagne
		SpecialPowerTemplate = SpellBookEnshroudingMistKampagne
		OCL                  = OCL_SpecialPowerEnshroudingMist
		CreateLocation       = CREATE_AT_LOCATION
		AvailableAtStart	 = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

    Behavior = CloudBreakSpecialPower    ModuleTag_CloudBreakKampagne
        SpecialPowerTemplate            = SpellBookCloudBreakKampagne
        SunbeamObject                    = CloudBreakSunbeam
        ObjectSpacing                    = 300
        AttributeModifierAffects        = ANY +INFANTRY +CAVALRY +MONSTER -DOZER -HERO ENEMIES
        ReEnableAntiCategory            = Yes
        AttributeModifierWeatherBased    = Yes
        WeatherDuration                    = SPELL_CLOUDBREAK_DURATION
        ChangeWeather                    = SUNNY
        AvailableAtStart                = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = SpecialPowerModule    SpellBookRebuild_ModuleTag2Kampagne
        SpecialPowerTemplate        = SpellBookRebuildKampagne
        AttributeModifier            = SpellBookBuildingHeal
        AttributeModifierRange        = 200
        AttributeModifierAffects    = ANY +STRUCTURE
        TriggerFX                    = FX_Industry
        UpdateModuleStartsAttack    = No
        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = SpecialPowerModule ModuleTag_RallyingCallKampagne
        SpecialPowerTemplate        = SpellBookRallyingCallKampagne
        AttributeModifier            = SpellBookRallyingCallModifier
        AttributeModifierRange        = 100
        AttributeModifierAffects    = ANY +HORDE +INFANTRY -HERO -IsengardFanatic -IsengardBerserkerHorde  -DwarvenZerker -DwarvenZerkerHorde -NoldorWarrior -NoldorWarriorHorde
        TriggerFX                    = FX_SpellRallyingCallGondor
        UpdateModuleStartsAttack    = No
        AvailableAtStart            = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = SpecialPowerModule ModuleTag_SpellBookZwergentrotz
        SpecialPowerTemplate         = SpellBookZwergentrotz
        AttributeModifier            = SpellBookZwergentrotz
        AttributeModifierRange       = 150
        AttributeModifierAffects     = ANY +HORDE +INFANTRY -HERO -IsengardFanatic -IsengardBerserkerHorde  -DwarvenZerker -DwarvenZerkerHorde -NoldorWarrior -NoldorWarriorHorde
        TriggerFX                    = FX_Zwergentrotz
        UpdateModuleStartsAttack     = No
        AvailableAtStart             = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic  = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = OCLSpecialPower ModuleTag_SummonErkenbrandWestfold
        SpecialPowerTemplate = SpellBookErkenbrandWestfold
        OCL                  = OCL_ErkenbrandandUnitsSummonEgg
        TriggerFX            = FX_GamlingHeroldSummon
        CreateLocation       = CREATE_AT_LOCATION
        UpgradeName          = Upgrade_RohanAllies
        AvailableAtStart     = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

	Behavior = OCLSpecialPower ModuleTag_SummonElrondsRat
		SpecialPowerTemplate     = SpellBookSpecialPowerElrondsRat
		OCL                      = OCL_SpawnElrondsRatEgg
                TriggerFX	         = FX_DunedainSummon
		CreateLocation           = CREATE_AT_LOCATION
		UpgradeName		 = Upgrade_ElvenAllies
		AvailableAtStart	 = No
		RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic  = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End

	Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookRuhmdesKonigs
		SpecialPowerTemplate		= SpellBookRuhmdesKonigs
		UpgradeName 			= Upgrade_RuhmdesKonigsUpgrade
		UpdateModuleStartsAttack	= No
		AffectAllies			= No
		AvailableAtStart		= No
		RequirementsFilterMPSkirmish    = SPELL_BOOK_REQUIREMENTS_FILTER
		RequirementsFilterStrategic     = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
	End
	
	Behavior = OCLSpecialPower ModuleTag_GondorSpellSignalFire
		SpecialPowerTemplate = SpellBookGondorSignalFire
		OCL                  = OCL_SpawnLehenGondors
                TriggerFX            = FX_RohirimSummon
		CreateLocation       = CREATE_AT_LOCATION
		AvailableAtStart     = Yes
	End

	Behavior = SpecialPowerModule ModuleTag_ScholarReading
		SpecialPowerTemplate		= SpellBookScholarReading
		AttributeModifier		= WissenaneignenModifierDraft
		AttributeModifierRange		= 999999
		AttributeModifierAffects	= NONE +BruchtalGelehrter
		AffectAllies			= No
		UpdateModuleStartsAttack	= No
		AvailableAtStart		= No
	End









    Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookDorthonionTechnology
	SpecialPowerTemplate		= SpellBookDorthonionTechnology
	UpgradeName 			    = Upgrade_GlobalFirstAgeSpell
	UpdateModuleStartsAttack	= No
	AffectAllies					= No
	AvailableAtStart				= No
	RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic   = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End





    Behavior = PlayerUpgradeSpecialPower	ModuleTag_SSpellBookDorthonionTechnology_forArnor
	SpecialPowerTemplate		= SpellBookDorthonionTechnology_forArnor
	UpgradeName 				= Upgrade_GlobalFirstAgeSpell
	UpdateModuleStartsAttack	= No
	AffectAllies					= No
	AvailableAtStart				= No
	RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic   = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End





    Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookTaniquetilTechnology
	SpecialPowerTemplate		= SpellBookTaniquetilTechnology
	UpgradeName 				= Upgrade_GlobalFirstAgeSpell
	UpdateModuleStartsAttack	= No
	AffectAllies					= No
	AvailableAtStart				= No
	RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic   = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End





    Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookMenegrothTechnology
	SpecialPowerTemplate		= SpellBookMenegrothTechnology
	UpgradeName 				= Upgrade_GlobalFirstAgeSpell
	UpdateModuleStartsAttack	= No
	AffectAllies					= No
	AvailableAtStart				= No
	RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic   = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End





    Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookFormenosTechnology
	SpecialPowerTemplate		= SpellBookFormenosTechnology
	UpgradeName 				= Upgrade_GlobalFirstAgeSpell
	UpdateModuleStartsAttack	= No
	AffectAllies					= No
	AvailableAtStart				= No
	RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic   = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End



    Behavior = PlayerUpgradeSpecialPower	ModuleTag_SpellBookBelegostTechnology
	SpecialPowerTemplate		= SpellBookBelegostTechnology
	UpgradeName 				= Upgrade_GlobalFirstAgeSpell
	UpdateModuleStartsAttack	= No
	AffectAllies					= No
	AvailableAtStart				= No
	RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
	RequirementsFilterStrategic   = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End

    Behavior = PlayerUpgradeSpecialPower    ModuleTag_SpellBookRunesOfPower
        SpecialPowerTemplate        = SpellBookRunesOfPower
        UpgradeName             = Upgrade_AngmarStructureDenBuild
        UpdateModuleStartsAttack    = No
        AffectAllies            = No
        AvailableAtStart        = No
        RequirementsFilterMPSkirmish = SPELL_BOOK_REQUIREMENTS_FILTER
        RequirementsFilterStrategic = SPELL_BOOK_REQUIREMENTS_FILTER_STRATEGIC
    End


    Behavior = SpecialPowerModule ModuleTag_SpellBookGeneralView
        SpecialPowerTemplate            = SpellBookGeneralView
        AvailableAtStart                = No
    End

    Behavior = SpecialPowerModule ModuleTag_SpellBookCommanderView
        SpecialPowerTemplate            = SpellBookCommanderView
        AvailableAtStart                = No
    End

    Behavior = SpecialPowerModule ModuleTag_SpellBookUnitView
        SpecialPowerTemplate            = SpellBookUnitView
        AvailableAtStart                = No
    End

    Behavior = SpecialPowerModule ModuleTag_SpellBookGroundView
        SpecialPowerTemplate            = SpellBookGroundView
        AvailableAtStart                = No
    End

