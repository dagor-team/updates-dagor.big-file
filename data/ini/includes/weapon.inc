Weapon BilboRiddles

    LeechRangeWeapon        = Yes
    AttackRange            = CREATE_A_HERO_STEAL_MONEY_RANGE
    MeleeWeapon            = Yes
    FireFX                = FX_CaHStealMoney
    DelayBetweenShots        = CREATE_A_HERO_STEAL_MONEY_DELAYBETWEENSHOTS
    PreAttackDelay            = CREATE_A_HERO_STEAL_MONEY_PREATTACKDELAY
    PreAttackType            = PER_SHOT
    FiringDuration            = CREATE_A_HERO_STEAL_MONEY_FIRINGDURATION

    StealMoneyNugget
        AmountStolenPerAttack    = 500
        RequiredUpgradeNames     = Upgrade_Level_1
    End

        StealMoneyNugget
        AmountStolenPerAttack    = 500
        RequiredUpgradeNames     = Upgrade_Level_10
    End

     ParalyzeNugget
        Radius            = 0.0
        Duration        = 5000
    End

    AttributeModifierNugget
        AttributeModifier        = BilboRiddles1
        Radius             = 0
    End

    AttributeModifierNugget
        AttributeModifier        = BilboRiddles2
        Radius             = 0
    End

    AttributeModifierNugget
        AttributeModifier   = BilboRiddles1
        Radius              = 200
        SpecialObjectFilter = NONE +GasthausBilbo ALLIES

    End
End


Weapon BilboGuardianWeapon
    LeechRangeWeapon        = Yes
    AttackRange            = CREATE_A_HERO_STEAL_MONEY_RANGE
    MeleeWeapon            = Yes
    FireFX                = FX_OriFXSoundRunen
    DelayBetweenShots        = CREATE_A_HERO_STEAL_MONEY_DELAYBETWEENSHOTS
    PreAttackDelay            = CREATE_A_HERO_STEAL_MONEY_PREATTACKDELAY
    PreAttackType            = PER_SHOT
    FiringDuration            = CREATE_A_HERO_STEAL_MONEY_FIRINGDURATION

    AttributeModifierNugget
        AttributeModifier        = BilboGuardianBonus
        Radius             = 0
    End
End


Weapon BilboArkenstonePingWeapon
    AttackRange        = 200
    RangeBonusMinHeight     = 30
    RangeBonus        = 1
    RangeBonusPerFoot    = #MULTIPLY( 200 .003 )
    WeaponSpeed        = 1000
    MinWeaponSpeed        = 121
    MaxWeaponSpeed        = 400
    FireFX            = FX_OriFXSoundRunen
    ScaleWeaponSpeed    = Yes
    HitPercentage        = 100
    ScatterRadius        = 0.0
    DelayBetweenShots    = 1100
    PreAttackDelay        = 1
    PreAttackType        = PER_SHOT
    FiringDuration        = 1000
    IdleAfterFiringDelay    = 1000
    AntiAirborneVehicle    = Yes
    AntiAirborneMonster    = Yes

    ProjectileNugget
        ProjectileTemplateName  = EdainInvisibleProjectile
        WarheadTemplateName     = BilboArkenstonePingWeaponWarhead
    End
End

Weapon BilboArkenstonePingWeaponWarhead
    ProjectileCollidesWith     = ALLIES
    RadiusDamageAffects        = ALLIES
    HitStoredTarget            = Yes

    AttributeModifierNugget
           AttributeModifier   = BilboArkenstoneUpgrade
           DamageFXType     = EVIL_ARROW_PIERCE
           SpecialObjectFilter  = ANY +DwarvenThorin ALLIES
    End
End


Weapon BilboRockThrow
    AttackRange           = HOBBIT_ROCK_RANGE
    WeaponSpeed           = 150.0
    AcceptableAimDelta    = 20
    PreAttackDelay        = 500
    PreAttackType         = PER_SHOT
    HitPercentage          = 0
    ScatterRadius          = 0.0
    FiringDuration            = 1200
    DelayBetweenShots        = 1700
    CanFireWhileMoving        = Yes

    ProjectileNugget
        ProjectileTemplateName = HobbitRockProjectile
        WarheadTemplateName    = HobbitHeroRockThrowWarhead
        ForbiddenUpgradeNames  = Upgrade_Level_6
    End

    ProjectileNugget
        ProjectileTemplateName = BrennendeTannenzapfenProjectile
        WarheadTemplateName    = BilboTannenzapfenWeaponWarhead
        RequiredUpgradeNames   = Upgrade_Level_6
    End
End


Weapon BilboTannenzapfenWeaponWarhead
  ProjectileCollidesWith =  ENEMIES STRUCTURES WALLS
  RadiusDamageAffects =   ENEMIES NEUTRALS NOT_SIMILAR
  HitStoredTarget = Yes

  DamageNugget
    Damage        = 50
    Radius        = 20.0
    DelayTime     = 0
    DamageType    = FLAME
    DamageFXType  = FLAME
    DeathType     = BURNED
    AcceptDamageAdd = No
  End

  DamageNugget
        Damage        = 15
        Radius        = 0.0
        DelayTime     = 0
        DamageType    = HERO_RANGED
        DamageFXType  = SMALL_ROCK
        DeathType     = NORMAL
        DamageScalar  = HERO_DAMAGESCALAR_UNITS ANY +INFANTRY +CAVALRY
        DamageScalar  = HERO_DAMAGESCALAR_HEROES ANY +HERO
    End
End

Weapon DoriWeapon_Level3
  LeechRangeWeapon      = Yes
  AttackRange           = 20.0
  MeleeWeapon           = Yes
  WeaponSpeed           = 799999.2
  DelayBetweenShots     = EOWYN_DELAYBETWEENSHOTS
  PreAttackDelay        = EOWYN_PREATTACKDELAY
  PreAttackType         = PER_SHOT
  FiringDuration        = EOWYN_FIRINGDURATION
  FireFX                = FX_GondorSwordHit

  DamageNugget
    Damage        = 200
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = HERO_DAMAGESCALAR_UNITS ANY +INFANTRY +CAVALRY
    DamageScalar  = HERO_DAMAGESCALAR_HEROES ANY +HERO
  End

   DamageNugget
    Damage        = 50
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = HERO_DAMAGESCALAR_UNITS ANY +INFANTRY +CAVALRY
    DamageScalar  = HERO_DAMAGESCALAR_HEROES ANY +HERO
      RequiredUpgradeNames  = Upgrade_MiniHordeLvl7
  End

    MetaImpactNugget
      HeroResist            = 100%
      ShockWaveAmount        = 25.0
      ShockWaveRadius        = 10
      ShockWaveArc        = 120
      ShockWaveTaperOff = 1
      RequiredUpgradeNames  = Upgrade_MiniHordeLvl5
  End

 DamageNugget
    Damage        = 200
    Radius        = 10.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = HERO_DAMAGESCALAR_UNITS ANY +INFANTRY +CAVALRY
    DamageScalar  = HERO_DAMAGESCALAR_HEROES ANY +HERO
    RequiredUpgradeNames   = Upgrade_MiniHordeLvl10
  End
End

Weapon DoriWeapon_Level5
  LeechRangeWeapon      = Yes
  AttackRange           = 20.0
  MeleeWeapon           = Yes
  WeaponSpeed           = 799999.2
  DelayBetweenShots     = EOWYN_DELAYBETWEENSHOTS
  PreAttackDelay        = EOWYN_PREATTACKDELAY
  PreAttackType         = PER_SHOT
  FiringDuration        = EOWYN_FIRINGDURATION
  FireFX                = FX_GondorSwordHit

  DamageNugget
    Damage        = 200
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = HERO_DAMAGESCALAR_UNITS ANY +INFANTRY +CAVALRY
    DamageScalar  = HERO_DAMAGESCALAR_HEROES ANY +HERO
  End

   DamageNugget
    Damage        = 50
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = HERO_DAMAGESCALAR_UNITS ANY +INFANTRY +CAVALRY
    DamageScalar  = HERO_DAMAGESCALAR_HEROES ANY +HERO
  End

    MetaImpactNugget
      HeroResist            = 100%
      ShockWaveAmount        = 25.0
      ShockWaveRadius        = 10
      ShockWaveArc        = 120
      ShockWaveTaperOff = 1
  End

 DamageNugget
    Damage        = 200
    Radius        = 10.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = HERO_DAMAGESCALAR_UNITS ANY +INFANTRY +CAVALRY
    DamageScalar  = HERO_DAMAGESCALAR_HEROES ANY +HERO
    RequiredUpgradeNames   = Upgrade_MiniHordeLvl10
  End
End

Weapon DoriWeapon_Level7
  LeechRangeWeapon      = Yes
  AttackRange           = 20.0
  MeleeWeapon           = Yes
  WeaponSpeed           = 799999.2
  DelayBetweenShots     = EOWYN_DELAYBETWEENSHOTS
  PreAttackDelay        = EOWYN_PREATTACKDELAY
  PreAttackType         = PER_SHOT
  FiringDuration        = EOWYN_FIRINGDURATION
  FireFX                = FX_GondorSwordHit

  DamageNugget
    Damage        = 200
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = HERO_DAMAGESCALAR_UNITS ANY +INFANTRY +CAVALRY
    DamageScalar  = HERO_DAMAGESCALAR_HEROES ANY +HERO
  End

   DamageNugget
    Damage        = 100
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = HERO_DAMAGESCALAR_UNITS ANY +INFANTRY +CAVALRY
    DamageScalar  = HERO_DAMAGESCALAR_HEROES ANY +HERO
  End

    MetaImpactNugget
      HeroResist            = 100%
      ShockWaveAmount        = 25.0
      ShockWaveRadius        = 10
      ShockWaveArc        = 120
      ShockWaveTaperOff = 1
  End

 DamageNugget
    Damage        = 200
    Radius        = 10.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = HERO_DAMAGESCALAR_UNITS ANY +INFANTRY +CAVALRY
    DamageScalar  = HERO_DAMAGESCALAR_HEROES ANY +HERO
    RequiredUpgradeNames   = Upgrade_MiniHordeLvl10
  End
End

Weapon DoriWeapon_Level10
  LeechRangeWeapon      = Yes
  AttackRange           = 20.0
  MeleeWeapon           = Yes
  WeaponSpeed           = 799999.2
  DelayBetweenShots     = EOWYN_DELAYBETWEENSHOTS
  PreAttackDelay        = EOWYN_PREATTACKDELAY
  PreAttackType         = PER_SHOT
  FiringDuration        = EOWYN_FIRINGDURATION
  FireFX                = FX_GondorSwordHit


   DamageNugget
    Damage        = 100
    Radius        = 0.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = HERO_DAMAGESCALAR_UNITS ANY +INFANTRY +CAVALRY
    DamageScalar  = HERO_DAMAGESCALAR_HEROES ANY +HERO
  End

    MetaImpactNugget
      HeroResist            = 100%
      ShockWaveAmount        = 25.0
      ShockWaveRadius        = 10
      ShockWaveArc        = 120
      ShockWaveTaperOff = 1
  End

 DamageNugget
    Damage        = 400
    Radius        = 10.0
    DelayTime     = 0
    DamageType    = HERO
    DamageFXType  = SWORD_SLASH
    DeathType     = NORMAL
    DamageScalar  = HERO_DAMAGESCALAR_UNITS ANY +INFANTRY +CAVALRY
    DamageScalar  = HERO_DAMAGESCALAR_HEROES ANY +HERO
  End
End

Weapon GimliDiplomacyPingWeapon
    AttackRange        = 200
    RangeBonusMinHeight     = 30
    RangeBonus        = 1
    RangeBonusPerFoot    = #MULTIPLY( 200 .003 )
    WeaponSpeed        = 1000
    MinWeaponSpeed        = 121
    MaxWeaponSpeed        = 400
    FireFX            = FX_OriFXSoundRunen
    ScaleWeaponSpeed    = Yes
    HitPercentage        = 100
    ScatterRadius        = 0.0
    DelayBetweenShots    = 1100
    PreAttackDelay        = 1
    PreAttackType        = PER_SHOT
    FiringDuration        = 1000
    IdleAfterFiringDelay    = 1000
    AntiAirborneVehicle    = Yes
    AntiAirborneMonster    = Yes

    ProjectileNugget
        ProjectileTemplateName  = EdainInvisibleProjectile
        WarheadTemplateName     = GimliDiplomacyPingWeaponWarhead
    End
End

Weapon GimliDiplomacyPingWeaponWarhead
    ProjectileCollidesWith     = ALLIES
    RadiusDamageAffects        = ALLIES
    HitStoredTarget            = Yes

    AttributeModifierNugget
           AttributeModifier   = GimliDiplomacyUpgrade
           DamageFXType     = EVIL_ARROW_PIERCE
           SpecialObjectFilter  = ANY +DwarfBarracks_Dain_Summoned +DwarfBarracks_Dain ALLIES
    End
End


Weapon ArveduiFavourPingWeapon
    AttackRange        = 200
    RangeBonusMinHeight     = 30
    RangeBonus        = 1
    RangeBonusPerFoot    = #MULTIPLY( 200 .003 )
    WeaponSpeed        = 1000
    MinWeaponSpeed        = 121
    MaxWeaponSpeed        = 400
    FireFX            = FX_OriFXSoundRunen
    ScaleWeaponSpeed    = Yes
    HitPercentage        = 100
    ScatterRadius        = 0.0
    DelayBetweenShots    = 1100
    PreAttackDelay        = 1
    PreAttackType        = PER_SHOT
    FiringDuration        = 1000
    IdleAfterFiringDelay    = 1000
    AntiAirborneVehicle    = Yes
    AntiAirborneMonster    = Yes

    ProjectileNugget
        ProjectileTemplateName  = EdainInvisibleProjectile
        WarheadTemplateName     = ArveduiFavourPingWeaponWarhead
    End
End

Weapon ArveduiFavourPingWeaponWarhead
    ProjectileCollidesWith     = ALLIES
    RadiusDamageAffects        = ALLIES
    HitStoredTarget            = Yes

    AttributeModifierNugget
           AttributeModifier   = FavourArveduiUpgrade
           DamageFXType     = EVIL_ARROW_PIERCE
           SpecialObjectFilter  = ARNOR_LEADERSHIP_HEROES_OBF
           Radius        = 10.0
    End
End


Weapon AraphantAbwehrPingWeapon
    AttackRange        = 200
    RangeBonusMinHeight     = 30
    RangeBonus        = 1
    RangeBonusPerFoot    = #MULTIPLY( 200 .003 )
    WeaponSpeed        = 1000
    MinWeaponSpeed        = 121
    MaxWeaponSpeed        = 400
    FireFX            = FX_OriFXSoundRunen
    ScaleWeaponSpeed    = Yes
    HitPercentage        = 100
    ScatterRadius        = 0.0
    DelayBetweenShots    = 1100
    PreAttackDelay        = 1
    PreAttackType        = PER_SHOT
    FiringDuration        = 1000
    IdleAfterFiringDelay    = 1000
    AntiAirborneVehicle    = Yes
    AntiAirborneMonster    = Yes

    ProjectileNugget
        ProjectileTemplateName  = EdainInvisibleProjectile
        WarheadTemplateName     = AraphantAbwehrPingWeaponWarhead
    End

    ProjectileNugget
        ProjectileTemplateName  = EdainInvisibleProjectile
        WarheadTemplateName     = AraphantAbwehrFavourPingWeaponWarhead
        RequiredUpgradeNames    = Upgrade_FavourArvedui
    End
End

Weapon AraphantAbwehrFavourPingWeaponWarhead
    ProjectileCollidesWith     = ALLIES
    RadiusDamageAffects        = ALLIES
    HitStoredTarget            = Yes

    AttributeModifierNugget
           AttributeModifier   = BonusFavourAbwehstrategie
           DamageFXType     = EVIL_ARROW_PIERCE
           SpecialObjectFilter  = ANY +STRUCTURE -COMMANDCENTER -HERO -INFANTRY -CAVALRY SAME_PLAYER
           Radius        = 10.0
    End
End

Weapon AraphantAbwehrPingWeaponWarhead
    ProjectileCollidesWith     = ALLIES
    RadiusDamageAffects        = ALLIES
    HitStoredTarget            = Yes

    AttributeModifierNugget
           AttributeModifier   = BonusAbwehstrategie
           DamageFXType     = EVIL_ARROW_PIERCE
           SpecialObjectFilter  = ANY +STRUCTURE -COMMANDCENTER -HERO -INFANTRY -CAVALRY SAME_PLAYER
           Radius        = 10.0
    End
End
