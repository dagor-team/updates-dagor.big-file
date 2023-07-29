#define GOOD_EXPANDABLE MordorGoblinSwordsman MordorGoblinFighterHorde 

#define GOOD_EXPANDABLE_SUMMONED MordorMorgulOrk_Summoned MordorMorgulOrkHorde_Summoned 

#define GOOD_CHEAP GoblinFighterHordeUpgraded GoblinFighterUpgraded 

#define GOOD_CHEAP_SUMMONED RhudaurSpearman_Summoned IsengardWildman_Summoned 

#define GOOD_BASIC EvilmenHaradSword EvilmenHaradSwordHorde 

#define GOOD_REGULAR_15 MordorEasterling MordorEasterlingHorde

#define GOOD_REGULAR_15_SUMMONED IsengardFighter_Summoned IsengardFighterHorde_Summoned IsengardPikeman_Summoned 


#define GOOD_REGULAR WildMarauder WildMarauderHorde WildMarauderHordeFormation 

#define GOOD_REGULAR_SUMMONED MordorBlackUruk_Summoned MordorBlackUrukBow_Summoned 

#define GOOD_ADVANCED WildGundabadPike WildGundabadPikesHorde WildGundabadPikesHordePorcupine 

#define GOOD_ADVANCED_8 AngmarHillTrollEdain AngmarHillTrollEdain_Summoned AngmarSnowTrollEdain 

#define GOOD_ELITE WildTribeLeaderBodyGuard WildGundabadBodyGuardHorde EasterlingGuard EasterlingGuardHorde

#define GOOD_ELITE_TRIO IsengardManSlayer IsengardManSlayerHorde UnderworldSoulCollector UnderworldSoulCollectorHorde

#define GOOD_FIRST_AGE_REGULAR ThlimDoldronBanner ThlimDoldronArcher 

#define GOOD_FIRST_AGE_ELITE AngmarNumElite2 IronNumenorsHorde




#define GOOD_BASIC_CAV AngmarWolfReiter AngmarWolfReiterHorde 

#define GOOD_REGULAR_CAV AngmarBannerWolfRider EvilmenRhunrider 

#define GOOD_ADVANCED_CAV GundabadWargPack GundabadWargPackHorde 

#define GOOD_ELITE_CAV AngmarShadowKnight AngmarShadowKnightHorde 





#define GOOD_CHEAP_BEASTS AngmarDireWolfHorde AngmarDireWolf WildMiniSpiderForShelobh WildMiniSpiderHordeForShelobh WildMiniSpiderHordeForShelobhFast WildKankraSpiderMember WildKankraSpiderMemberHorde WildKankraSpiderMemberHordeProduce WildZuchtspinnen WildZuchtspinnenHorde

#define GOOD_BASIC_BEASTS WildMiniSpider WildMiniSpiderHorde MordorBannerSpiderling MordorSpiderling MordorSpiderlingHorde WildSpiderlingHordeMemberForCreep ingHordeMemberForCreepHorde WildSpiderling WildSpiderlingForShelobh WildSpiderlingHordeForShelobh WildSpiderlingHordeForShelobhFast WildSpiderlingHordeMember WildSpiderlingHorde IsengardWargPack IsengardWargPackHorde WildWargPackHorde

#define GOOD_FIRST_AGE_REGULAR_BEASTS TolinGaurhothWolf TolinGaurhothWolfHorde TolinGaurhothVampiresMinion TolinGaurhothVampires_Slaved

#define GOOD_FIRST_AGE_BEST_BEASTS AngbandBabyDrake AngbandBabyDrakeHorde



#define GOOD_FIRST_AGE_REGULAR_FLYING TolinGaurhothVampires

#define GOOD_FIRST_AGE_BETTER_FLYING UnderworldDragon UnderworldDragon_Slaved

#define GOOD_FIRST_AGE_LEGENDARY_FLYING AngbandDragon 

#define GOOD_FIRST_AGE_ELITE_MONSTER AngbandFireDrake TolinGaurhothWereWolf ThargelionCharriot

#define GOOD_FIRST_AGE_LEGENDARY_MONSTER AngbandBalrog AngbandBalrogCaptian_Summoned AngbandBalrogCaptian UnderworldDeamon ThargelionMumakil






ExperienceLevel    Evil_Expandable_Infantry_Summoned
    TargetNames                       =    GOOD_EXPANDABLE_SUMMONED
    RequiredExperience                =    EXPERIENCE_REQUIRED_EXPANDABLE_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_EXPANDABLE_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END



ExperienceLevel    Evil_Expandable_Infantry_Level1
    TargetNames                       =    GOOD_EXPANDABLE
    RequiredExperience                =    EXPERIENCE_REQUIRED_EXPANDABLE_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_EXPANDABLE_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Expandable_InfantryLevel2
    TargetNames                       =    GOOD_EXPANDABLE
    RequiredExperience                =    EXPERIENCE_REQUIRED_EXPANDABLE_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_EXPANDABLE_HORDE_2
    Rank                              =    2
    Upgrades                          =    Upgrade_ObjectLevel2
    AttributeModifiers                =    ExpandableHordeBonusRank2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level2
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Expandable_InfantryLevel3
    TargetNames                       =    GOOD_EXPANDABLE
    RequiredExperience                =    EXPERIENCE_REQUIRED_EXPANDABLE_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_EXPANDABLE_HORDE_3
    Rank                              =    3
    Upgrades                          =    Upgrade_ObjectLevel3
    AttributeModifiers                =    ExpandableHordeBonusRank3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level3
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Expandable_InfantryLevel4
    TargetNames                       =    GOOD_EXPANDABLE
    RequiredExperience                =    EXPERIENCE_REQUIRED_EXPANDABLE_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_EXPANDABLE_HORDE_4
    Rank                              =    4
    Upgrades                          =    Upgrade_ObjectLevel4
    AttributeModifiers                =    ExpandableHordeBonusRank4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level4
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Expandable_InfantryLevel5
    TargetNames                       =    GOOD_EXPANDABLE
    RequiredExperience                =    EXPERIENCE_REQUIRED_EXPANDABLE_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_EXPANDABLE_HORDE_5
    Rank                              =    5
    Upgrades                          =    Upgrade_ObjectLevel5
    AttributeModifiers                =    ExpandableHordeBonusRank5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level5
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END


;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

ExperienceLevel    Evil_Cheap_Infantry_Summoned
    TargetNames                       =    GOOD_CHEAP_SUMMONED
    RequiredExperience                =    EXPERIENCE_REQUIRED_CHEAP_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_CHEAP_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Cheap_Infantry_Level1
    TargetNames                       =    GOOD_CHEAP
    RequiredExperience                =    EXPERIENCE_REQUIRED_CHEAP_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_CHEAP_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Cheap_InfantryLevel2
    TargetNames                       =    GOOD_CHEAP
    RequiredExperience                =    EXPERIENCE_REQUIRED_CHEAP_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_CHEAP_HORDE_2
    Rank                              =    2
    Upgrades                          =    Upgrade_ObjectLevel2
    AttributeModifiers                =    CheapHordeBonusRank2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level2
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Cheap_InfantryLevel3
    TargetNames                       =    GOOD_CHEAP
    RequiredExperience                =    EXPERIENCE_REQUIRED_CHEAP_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_CHEAP_HORDE_3
    Rank                              =    3
    Upgrades                          =    Upgrade_ObjectLevel3
    AttributeModifiers                =    CheapHordeBonusRank3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level3
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Cheap_InfantryLevel4
    TargetNames                       =    GOOD_CHEAP
    RequiredExperience                =    EXPERIENCE_REQUIRED_CHEAP_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_CHEAP_HORDE_4
    Rank                              =    4
    Upgrades                          =    Upgrade_ObjectLevel4
    AttributeModifiers                =    CheapHordeBonusRank4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level4
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Cheap_InfantryLevel5
    TargetNames                       =    GOOD_CHEAP
    RequiredExperience                =    EXPERIENCE_REQUIRED_CHEAP_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_CHEAP_HORDE_5
    Rank                              =    5
    Upgrades                          =    Upgrade_ObjectLevel5
    AttributeModifiers                =    CheapHordeBonusRank5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level5
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

;---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


ExperienceLevel    Evil_Basic_Infantry_Level1
    TargetNames                       =    GOOD_BASIC
    RequiredExperience                =    EXPERIENCE_REQUIRED_BASIC_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_BASIC_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Basic_InfantryLevel2
    TargetNames                       =    GOOD_BASIC
    RequiredExperience                =    EXPERIENCE_REQUIRED_BASIC_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_BASIC_HORDE_2
    Rank                              =    2
    Upgrades                          =    Upgrade_ObjectLevel2
    AttributeModifiers                =    BasicHordeBonusRank2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level2
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Basic_InfantryLevel3
    TargetNames                       =    GOOD_BASIC
    RequiredExperience                =    EXPERIENCE_REQUIRED_BASIC_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_BASIC_HORDE_3
    Rank                              =    3
    Upgrades                          =    Upgrade_ObjectLevel3
    AttributeModifiers                =    BasicHordeBonusRank3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level3
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Basic_InfantryLevel4
    TargetNames                       =    GOOD_BASIC
    RequiredExperience                =    EXPERIENCE_REQUIRED_BASIC_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_BASIC_HORDE_4
    Rank                              =    4
    Upgrades                          =    Upgrade_ObjectLevel4
    AttributeModifiers                =    BasicHordeBonusRank4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level4
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Basic_InfantryLevel5
    TargetNames                       =    GOOD_BASIC
    RequiredExperience                =    EXPERIENCE_REQUIRED_BASIC_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_BASIC_HORDE_5
    Rank                              =    5
    Upgrades                          =    Upgrade_ObjectLevel5
    AttributeModifiers                =    BasicHordeBonusRank5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level5
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

;--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

ExperienceLevel    Evil_Regular15_Infantry_Summoned
    TargetNames                       =    GOOD_REGULAR_15_SUMMONED
    RequiredExperience                =    EXPERIENCE_REQUIRED_REGULAR_15_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_REGULAR_15_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Regular15_Infantry_Level1
    TargetNames                       =    GOOD_REGULAR_15
    RequiredExperience                =    EXPERIENCE_REQUIRED_REGULAR_15_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_REGULAR_15_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Regular15_InfantryLevel2
    TargetNames                       =    GOOD_REGULAR_15
    RequiredExperience                =    EXPERIENCE_REQUIRED_REGULAR_15_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_REGULAR_15_HORDE_2
    Rank                              =    2
    Upgrades                          =    Upgrade_ObjectLevel2
    AttributeModifiers                =    Regular15HordeBonusRank2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level2
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Regular15_InfantryLevel3
    TargetNames                       =    GOOD_REGULAR_15
    RequiredExperience                =    EXPERIENCE_REQUIRED_REGULAR_15_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_REGULAR_15_HORDE_3
    Rank                              =    3
    Upgrades                          =    Upgrade_ObjectLevel3
    AttributeModifiers                =    Regular15HordeBonusRank3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level3
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Regular15_InfantryLevel4
    TargetNames                       =    GOOD_REGULAR_15
    RequiredExperience                =    EXPERIENCE_REQUIRED_REGULAR_15_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_REGULAR_15_HORDE_4
    Rank                              =    4
    Upgrades                          =    Upgrade_ObjectLevel4
    AttributeModifiers                =    Regular15HordeBonusRank4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level4
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Regular15_InfantryLevel5
    TargetNames                       =    GOOD_REGULAR_15
    RequiredExperience                =    EXPERIENCE_REQUIRED_REGULAR_15_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_REGULAR_15_HORDE_5
    Rank                              =    5
    Upgrades                          =    Upgrade_ObjectLevel5
    AttributeModifiers                =    BasicHordeBonusRank5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level5
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END


;----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


ExperienceLevel    Evil_Regular_Infantry_Summoned
    TargetNames                       =    GOOD_REGULAR_SUMMONED
    RequiredExperience                =    EXPERIENCE_REQUIRED_REGULAR_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_REGULAR_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Regular_Infantry_Level1
    TargetNames                       =    GOOD_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_REGULAR_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_REGULAR_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Regular_InfantryLevel2
    TargetNames                       =    GOOD_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_REGULAR_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_REGULAR_HORDE_2
    Rank                              =    2
    Upgrades                          =    Upgrade_ObjectLevel2
    AttributeModifiers                =    RegularHordeBonusRank2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level2
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Regular_InfantryLevel3
    TargetNames                       =    GOOD_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_REGULAR_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_REGULAR_HORDE_3
    Rank                              =    3
    Upgrades                          =    Upgrade_ObjectLevel3
    AttributeModifiers                =    RegularHordeBonusRank3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level3
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Regular_InfantryLevel4
    TargetNames                       =    GOOD_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_REGULAR_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_REGULAR_HORDE_4
    Rank                              =    4
    Upgrades                          =    Upgrade_ObjectLevel4
    AttributeModifiers                =    RegularHordeBonusRank4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level4
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Regular_InfantryLevel5
    TargetNames                       =    GOOD_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_REGULAR_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_REGULAR_HORDE_5
    Rank                              =    5
    Upgrades                          =    Upgrade_ObjectLevel5
    AttributeModifiers                =    RegularHordeBonusRank5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level5
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

;---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



ExperienceLevel    Evil_Advanced_Infantry_Level1
    TargetNames                       =    GOOD_ADVANCED
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Advanced_InfantryLevel2
    TargetNames                       =    GOOD_ADVANCED
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_HORDE_2
    Rank                              =    2
    Upgrades                          =    Upgrade_ObjectLevel2
    AttributeModifiers                =    AdvancedHordeBonusRank2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level2
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Advanced_InfantryLevel3
    TargetNames                       =    GOOD_ADVANCED
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_HORDE_3
    Rank                              =    3
    Upgrades                          =    Upgrade_ObjectLevel3
    AttributeModifiers                =    AdvancedHordeBonusRank3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level3
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Advanced_InfantryLevel4
    TargetNames                       =    GOOD_ADVANCED
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_HORDE_4
    Rank                              =    4
    Upgrades                          =    Upgrade_ObjectLevel4
    AttributeModifiers                =    AdvancedHordeBonusRank4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level4
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Advanced_InfantryLevel5
    TargetNames                       =    GOOD_ADVANCED
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_HORDE_5
    Rank                              =    5
    Upgrades                          =    Upgrade_ObjectLevel5
    AttributeModifiers                =    AdvancedHordeBonusRank5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level5
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

;---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



ExperienceLevel    Evil_Advanced8_Infantry_Level1
    TargetNames                       =    GOOD_ADVANCED_8
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_8_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_8_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Advanced8_InfantryLevel2
    TargetNames                       =    GOOD_ADVANCED_8
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_8_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_8_HORDE_2
    Rank                              =    2
    Upgrades                          =    Upgrade_ObjectLevel2
    AttributeModifiers                =    Advanced8HordeBonusRank2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level2
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Advanced8_InfantryLevel3
    TargetNames                       =    GOOD_ADVANCED_8
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_8_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_8_HORDE_3
    Rank                              =    3
    Upgrades                          =    Upgrade_ObjectLevel3
    AttributeModifiers                =    Advanced8HordeBonusRank3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level3
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Advanced8_InfantryLevel4
    TargetNames                       =    GOOD_ADVANCED_8
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_8_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_8_HORDE_4
    Rank                              =    4
    Upgrades                          =    Upgrade_ObjectLevel4
    AttributeModifiers                =    Advanced8HordeBonusRank4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level4
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Advanced8_InfantryLevel5
    TargetNames                       =    GOOD_ADVANCED_8
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_8_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_8_HORDE_5
    Rank                              =    5
    Upgrades                          =    Upgrade_ObjectLevel5
    AttributeModifiers                =    Advanced8HordeBonusRank5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level5
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

;---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------



ExperienceLevel    Evil_Advanced8_Infantry_Level1
    TargetNames                       =    GOOD_ADVANCED_8
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_8_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_8_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Advanced8_InfantryLevel2
    TargetNames                       =    GOOD_ADVANCED_8
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_8_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_8_HORDE_2
    Rank                              =    2
    Upgrades                          =    Upgrade_ObjectLevel2
    AttributeModifiers                =    Advanced8HordeBonusRank2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level2
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Advanced8_InfantryLevel3
    TargetNames                       =    GOOD_ADVANCED_8
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_8_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_8_HORDE_3
    Rank                              =    3
    Upgrades                          =    Upgrade_ObjectLevel3
    AttributeModifiers                =    Advanced8HordeBonusRank3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level3
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Advanced8_InfantryLevel4
    TargetNames                       =    GOOD_ADVANCED_8
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_8_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_8_HORDE_4
    Rank                              =    4
    Upgrades                          =    Upgrade_ObjectLevel4
    AttributeModifiers                =    Advanced8HordeBonusRank4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level4
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Advanced8_InfantryLevel5
    TargetNames                       =    GOOD_ADVANCED_8
    RequiredExperience                =    EXPERIENCE_REQUIRED_ADVANCED_8_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_ADVANCED_8_HORDE_5
    Rank                              =    5
    Upgrades                          =    Upgrade_ObjectLevel5
    AttributeModifiers                =    Advanced8HordeBonusRank5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level5
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END



;----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

ExperienceLevel    Evil_Elite_InfantryLevel1
    TargetNames                       =    GOOD_ELITE
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_HORDE_1
    InformUpdateModule                =    Yes
    Rank                              =    1
    Upgrades                          =    Upgrade_EliteHordeLvl1
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite_InfantryLevel2
    TargetNames                       =    GOOD_ELITE
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_HORDE_2
    InformUpdateModule                =    Yes
    Rank                              =    2
    AttributeModifiers                =    EliteHordeBonusRank2
    Upgrades                          =    Upgrade_EliteHordeLvl2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite_InfantryLevel3
    TargetNames                       =    GOOD_ELITE
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_HORDE_3
    InformUpdateModule                =    Yes
    Rank                              =    3
    AttributeModifiers                =    EliteHordeBonusRank3
    Upgrades                          =    Upgrade_EliteHordeLvl3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite_InfantryLevel4
    TargetNames                       =    GOOD_ELITE
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_HORDE_4
    InformUpdateModule                =    Yes
    Rank                              =    4
    AttributeModifiers                =    EliteHordeBonusRank4
    Upgrades                          =    Upgrade_EliteHordeLvl4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite_InfantryLevel5
    TargetNames                       =    GOOD_ELITE
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_HORDE_5
    InformUpdateModule                =    Yes
    Rank                              =    5
    AttributeModifiers                =    EliteHordeBonusRank5
    Upgrades                          =    Upgrade_EliteHordeLvl5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite_InfantryLevel6
    TargetNames                       =    GOOD_ELITE
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_6
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_HORDE_6
    InformUpdateModule                =    Yes
    Rank                              =    6
    AttributeModifiers                =    EliteHordeBonusRank6
    Upgrades                          =    Upgrade_EliteHordeLvl6
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite_InfantryLevel7
    TargetNames                       =    GOOD_ELITE
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_7
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_HORDE_7
    InformUpdateModule                =    Yes
    Rank                              =    7
    AttributeModifiers                =    EliteHordeBonusRank7
    Upgrades                          =    Upgrade_EliteHordeLvl7 Upgrade_FormenosForgedBlades
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite_InfantryLevel8
    TargetNames                       =    GOOD_ELITE
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_8
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_HORDE_8
    InformUpdateModule                =    Yes
    Rank                              =    8
    AttributeModifiers                =    EliteHordeBonusRank8
    Upgrades                          =    Upgrade_EliteHordeLvl8
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite_InfantryLevel9
    TargetNames                       =    GOOD_ELITE
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_9
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_HORDE_9
    InformUpdateModule                =    Yes
    Rank                              =    9
    AttributeModifiers                =    EliteHordeBonusRank9
    Upgrades                          =    Upgrade_EliteHordeLvl9
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite_InfantryLevel10
    TargetNames                       =    GOOD_ELITE
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_10
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_HORDE_10
    InformUpdateModule                =    Yes
    Rank                              =    10
    AttributeModifiers                =    EliteHordeBonusRank10
    Upgrades                          =    Upgrade_EliteHordeLvl10
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End


;----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

ExperienceLevel    Evil_Elite3_InfantryLevel1
    TargetNames                       =    GOOD_GOOD_ELITE_TRIO
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_TRIO_HORDE_1
    InformUpdateModule                =    Yes
    Rank                              =    1
    Upgrades                          =    Upgrade_EliteHordeLvl1
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite3_InfantryLevel2
    TargetNames                       =    GOOD_GOOD_ELITE_TRIO
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_TRIO_HORDE_2
    InformUpdateModule                =    Yes
    Rank                              =    2
    AttributeModifiers                =    Elite3HordeBonusRank2
    Upgrades                          =    Upgrade_EliteHordeLvl2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite3_InfantryLevel3
    TargetNames                       =    GOOD_GOOD_ELITE_TRIO
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_TRIO_HORDE_3
    InformUpdateModule                =    Yes
    Rank                              =    3
    AttributeModifiers                =    Elite3HordeBonusRank3
    Upgrades                          =    Upgrade_EliteHordeLvl3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite3_InfantryLevel4
    TargetNames                       =    GOOD_GOOD_ELITE_TRIO
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_TRIO_HORDE_4
    InformUpdateModule                =    Yes
    Rank                              =    4
    AttributeModifiers                =    Elite3HordeBonusRank4
    Upgrades                          =    Upgrade_EliteHordeLvl4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite3_InfantryLevel5
    TargetNames                       =    GOOD_GOOD_ELITE_TRIO
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_TRIO_HORDE_5
    InformUpdateModule                =    Yes
    Rank                              =    5
    AttributeModifiers                =    Elite3HordeBonusRank5
    Upgrades                          =    Upgrade_EliteHordeLvl5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite3_InfantryLevel6
    TargetNames                       =    GOOD_GOOD_ELITE_TRIO
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_6
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_TRIO_HORDE_6
    InformUpdateModule                =    Yes
    Rank                              =    6
    AttributeModifiers                =    Elite3HordeBonusRank6
    Upgrades                          =    Upgrade_EliteHordeLvl6
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite3_InfantryLevel7
    TargetNames                       =    GOOD_GOOD_ELITE_TRIO
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_7
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_TRIO_HORDE_7
    InformUpdateModule                =    Yes
    Rank                              =    7
    AttributeModifiers                =    Elite3HordeBonusRank7
    Upgrades                          =    Upgrade_EliteHordeLvl7 Upgrade_FormenosForgedBlades
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite3_InfantryLevel8
    TargetNames                       =    GOOD_GOOD_ELITE_TRIO
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_8
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_TRIO_HORDE_8
    InformUpdateModule                =    Yes
    Rank                              =    8
    AttributeModifiers                =    Elite3HordeBonusRank8
    Upgrades                          =    Upgrade_EliteHordeLvl8
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite3_InfantryLevel9
    TargetNames                       =    GOOD_GOOD_ELITE_TRIO
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_9
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_TRIO_HORDE_9
    InformUpdateModule                =    Yes
    Rank                              =    9
    AttributeModifiers                =    Elite3HordeBonusRank9
    Upgrades                          =    Upgrade_EliteHordeLvl9
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_Elite3_InfantryLevel10
    TargetNames                       =    GOOD_GOOD_ELITE_TRIO
    RequiredExperience                =    EXPERIENCE_REQUIRED_ELITE_HORDE_10
    ExperienceAward                   =    EXPERIENCE_AWARD_ELITE_TRIO_HORDE_10
    InformUpdateModule                =    Yes
    Rank                              =    10
    AttributeModifiers                =    Elite3HordeBonusRank10
    Upgrades                          =    Upgrade_EliteHordeLvl10
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

;----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

ExperienceLevel    Evil_First_Age_RegularInfantryLevel1
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_REGULAR_HORDE_1
    InformUpdateModule                =    Yes
    Rank                              =    1
    Upgrades                          =    Upgrade_EliteHordeLvl1
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_RegularInfantryLevel2
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_REGULAR_HORDE_2
    InformUpdateModule                =    Yes
    Rank                              =    2
    AttributeModifiers                =    First_Age_RegularInfantryHordeBonusRank2
    Upgrades                          =    Upgrade_EliteHordeLvl2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_RegularInfantryLevel3
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_REGULAR_HORDE_3
    InformUpdateModule                =    Yes
    Rank                              =    3
    AttributeModifiers                =    First_Age_RegularInfantryHordeBonusRank3
    Upgrades                          =    Upgrade_EliteHordeLvl3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_RegularInfantryLevel4
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_REGULAR_HORDE_4
    InformUpdateModule                =    Yes
    Rank                              =    4
    AttributeModifiers                =    First_Age_RegularInfantryHordeBonusRank4
    Upgrades                          =    Upgrade_EliteHordeLvl4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_RegularInfantryLevel5
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_REGULAR_HORDE_5
    InformUpdateModule                =    Yes
    Rank                              =    5
    AttributeModifiers                =    First_Age_RegularInfantryHordeBonusRank5
    Upgrades                          =    Upgrade_EliteHordeLvl5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_RegularInfantryLevel6
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_6
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_REGULAR_HORDE_6
    InformUpdateModule                =    Yes
    Rank                              =    6
    AttributeModifiers                =    First_Age_RegularInfantryHordeBonusRank6
    Upgrades                          =    Upgrade_EliteHordeLvl6
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_RegularInfantryLevel7
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_7
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_REGULAR_HORDE_7
    InformUpdateModule                =    Yes
    Rank                              =    7
    AttributeModifiers                =    First_Age_RegularInfantryHordeBonusRank7
    Upgrades                          =    Upgrade_EliteHordeLvl7 Upgrade_FormenosForgedBlades
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_RegularInfantryLevel8
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_8
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_REGULAR_HORDE_8
    InformUpdateModule                =    Yes
    Rank                              =    8
    AttributeModifiers                =    First_Age_RegularInfantryHordeBonusRank8
    Upgrades                          =    Upgrade_EliteHordeLvl8
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_RegularInfantryLevel9
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_9
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_REGULAR_HORDE_9
    InformUpdateModule                =    Yes
    Rank                              =    9
    AttributeModifiers                =    First_Age_RegularInfantryHordeBonusRank9
    Upgrades                          =    Upgrade_EliteHordeLvl9
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_RegularInfantryLevel10
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_10
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_REGULAR_HORDE_10
    InformUpdateModule                =    Yes
    Rank                              =    10
    AttributeModifiers                =    First_Age_RegularInfantryHordeBonusRank10
    Upgrades                          =    Upgrade_EliteHordeLvl10
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End


;----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


ExperienceLevel    Evil_First_Age_EliteInfantryLevel1
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_ELITE_HORDE_1
    InformUpdateModule                =    Yes
    Rank                              =    1
    Upgrades                          =    Upgrade_EliteHordeLvl1
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_EliteInfantryLevel2
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_ELITE_HORDE_2
    InformUpdateModule                =    Yes
    Rank                              =    2
    AttributeModifiers                =    First_Age_EliteInfantryHordeBonusRank2
    Upgrades                          =    Upgrade_EliteHordeLvl2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_EliteInfantryLevel3
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_ELITE_HORDE_3
    InformUpdateModule                =    Yes
    Rank                              =    3
    AttributeModifiers                =    First_Age_EliteInfantryHordeBonusRank3
    Upgrades                          =    Upgrade_EliteHordeLvl3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_EliteInfantryLevel4
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_ELITE_HORDE_4
    InformUpdateModule                =    Yes
    Rank                              =    4
    AttributeModifiers                =    First_Age_EliteInfantryHordeBonusRank4
    Upgrades                          =    Upgrade_EliteHordeLvl4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_EliteInfantryLevel5
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_ELITE_HORDE_5
    InformUpdateModule                =    Yes
    Rank                              =    5
    AttributeModifiers                =    First_Age_EliteInfantryHordeBonusRank5
    Upgrades                          =    Upgrade_EliteHordeLvl5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_EliteInfantryLevel6
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_6
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_ELITE_HORDE_6
    InformUpdateModule                =    Yes
    Rank                              =    6
    AttributeModifiers                =    First_Age_EliteInfantryHordeBonusRank6
    Upgrades                          =    Upgrade_EliteHordeLvl6
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_EliteInfantryLevel7
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_7
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_ELITE_HORDE_7
    InformUpdateModule                =    Yes
    Rank                              =    7
    AttributeModifiers                =    First_Age_EliteInfantryHordeBonusRank7
    Upgrades                          =    Upgrade_EliteHordeLvl7 Upgrade_FormenosForgedBlades
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_EliteInfantryLevel8
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_8
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_ELITE_HORDE_8
    InformUpdateModule                =    Yes
    Rank                              =    8
    AttributeModifiers                =    First_Age_EliteInfantryHordeBonusRank8
    Upgrades                          =    Upgrade_EliteHordeLvl8
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_EliteInfantryLevel9
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_9
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_ELITE_HORDE_9
    InformUpdateModule                =    Yes
    Rank                              =    9
    AttributeModifiers                =    First_Age_EliteInfantryHordeBonusRank9
    Upgrades                          =    Upgrade_EliteHordeLvl9
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

ExperienceLevel    Evil_First_Age_EliteInfantryLevel10
    TargetNames                       =    GOOD_FIRST_AGE_REGULAR
    RequiredExperience                =    EXPERIENCE_REQUIRED_FIRST_AGE_REGULAR_HORDE_10
    ExperienceAward                   =    EXPERIENCE_AWARD_FIRST_AGE_ELITE_HORDE_10
    InformUpdateModule                =    Yes
    Rank                              =    10
    AttributeModifiers                =    First_Age_EliteInfantryHordeBonusRank10
    Upgrades                          =    Upgrade_EliteHordeLvl10
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER

    SelectionDecal
        Texture                       =    decal_I_level4
        Texture2                      =    decal_evil_CO
        Style                         =    SHADOW_MERGE_DECAL
        OpacityMin                    =    80%
        OpacityMax                    =    100%
        MinRadius                     =    40
        MaxRadius                     =    200
        MaxSelectedUnits              =    40
    End
End

;----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------


ExperienceLevel    Evil_Basic_Cavalry_Level1
    TargetNames                       =    GOOD_BASIC_CAV
    RequiredExperience                =    EXPERIENCE_REQUIRED_BASIC_CAV_HORDE_1
    ExperienceAward                   =    EXPERIENCE_AWARD_BASIC_CAV_HORDE_1
    Rank                              =    1
    Upgrades                          =    Upgrade_ObjectLevel1
    SelectionDecal
        Texture               =    decal_I_level1
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Basic_CavalryLevel2
    TargetNames                       =    GOOD_BASIC_CAV
    RequiredExperience                =    EXPERIENCE_REQUIRED_BASIC_CAV_HORDE_2
    ExperienceAward                   =    EXPERIENCE_AWARD_BASIC_CAV_HORDE_2
    Rank                              =    2
    Upgrades                          =    Upgrade_ObjectLevel2
    AttributeModifiers                =    BasicCavHordeBonusRank2
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level2
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Basic_CavalryLevel3
    TargetNames                       =    GOOD_BASIC_CAV
    RequiredExperience                =    EXPERIENCE_REQUIRED_BASIC_CAV_HORDE_3
    ExperienceAward                   =    EXPERIENCE_AWARD_BASIC_CAV_HORDE_3
    Rank                              =    3
    Upgrades                          =    Upgrade_ObjectLevel3
    AttributeModifiers                =    BasicCavHordeBonusRank3
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level3
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Basic_CavalryLevel4
    TargetNames                       =    GOOD_BASIC_CAV
    RequiredExperience                =    EXPERIENCE_REQUIRED_BASIC_CAV_HORDE_4
    ExperienceAward                   =    EXPERIENCE_AWARD_BASIC_CAV_HORDE_4
    Rank                              =    4
    Upgrades                          =    Upgrade_ObjectLevel4
    AttributeModifiers                =    BasicCavHordeBonusRank4
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level4
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

ExperienceLevel    Evil_Basic_CavalryLevel5
    TargetNames                       =    GOOD_BASIC_CAV
    RequiredExperience                =    EXPERIENCE_REQUIRED_BASIC_CAV_HORDE_5
    ExperienceAward                   =    EXPERIENCE_AWARD_BASIC_CAV_HORDE_5
    Rank                              =    5
    Upgrades                          =    Upgrade_ObjectLevel5
    AttributeModifiers                =    BasicCavHordeBonusRank5
    LevelUpFx                         =    FX:EvilLevelUp1FX
    LevelUpTintColor                  =    R:255 G:255 B:255
    LevelUpTintPreColorTime           =    500
    LevelUpTintPostColorTime          =    3000
    LevelUpTintSustainColorTime       =    500
    EmotionType                       =    CHEER
    SelectionDecal
        Texture               =    decal_I_level5
        Texture2              =    decal_evil_CO
        Style                 =    SHADOW_MERGE_DECAL
        OpacityMin            =    80%
        OpacityMax            =    100%
        MinRadius             =    70
        MaxRadius             =    200
        MaxSelectedUnits      =    40
    End
END

