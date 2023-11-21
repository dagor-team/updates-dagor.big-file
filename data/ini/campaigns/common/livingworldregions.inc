











Region Amon_Sul
	DisplayName				= LW:DisplayNameAmonSul
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP MP Amon Sul Fortress_Gondor"


	SkirmishStillImage		= WOR_Amon_Sul_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Amon_Sul
	RegionPortrait			= LWPAmonSul


	LegendaryBonus			= 10





	ConnectsTo				=
		Connection
			Region = Rhudaur


		End
		Connection
			Region = Lostriand


		End
		Connection
			Region = Buckland


		End
		Connection
			Region = Barrow_Downs


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-260 Y:1400

    HeroArmySpot				= X:-400 Y:1480
    HeroArmySpot				= X:-260 Y:1515
    HeroArmySpot				= X:-210 Y:1310
    HeroArmySpot				= X:-340 Y:1460
    GarrisonArmySpot			= X:-340 Y:1310
    BuildingSpot				= X:-160 Y:1400
    BuildingSpot				= X:-400 Y:1400

    CPLimit					= 480
    AllyCPLimit				= 360

	FortressPortrait			= BPCAmonSul
	FortressDisplayName			= LW:DisplayNameAmonSulCastle
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Angmar
	DisplayName				= LW:DisplayNameAngmar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG Angmar_Gondor"


	SkirmishStillImage		= WOR_Angmar_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Angmar
	RegionPortrait			= LWPAngmar




	AttackBonus				= 5




	ConnectsTo				=
		Connection
			Region = Ettenmoors


		End
		Connection
			Region = CarnDum


		End
		Connection
			Region = Forodwaith


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-65 Y:2085

    HeroArmySpot				= X:-180 Y:2125
    HeroArmySpot				= X:-45 Y:2095
    HeroArmySpot				= X:85 Y:2025
    HeroArmySpot				= X:25 Y:2095
    GarrisonArmySpot			= X:-60 Y:2015
    BuildingSpot				= X:20 Y:2010
    BuildingSpot				= X:-140 Y:2085

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Arnor
	DisplayName				= LW:DisplayNameArthedain
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Arnor_Gondor"


	SkirmishStillImage		= WOR_Arnor_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Arthedain
	RegionPortrait			= LWPArnor






	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Buckland


		End
        Connection
			Region = Ettenmoors


		End
		Connection
			Region = Forlindon


		End
		Connection
			Region = Grey_Havens


		End
		Connection
			Region = The_Shire


		End
		Connection
			Region = Tower_Hills


		End
		Connection
			Region = Fornost


		End
		Connection
			Region = Forodwaith


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-760 Y:2000

    HeroArmySpot				= X:-910 Y:2075
    HeroArmySpot				= X:-760 Y:2100
    HeroArmySpot				= X:-610 Y:2075
    HeroArmySpot				= X:-1005 Y:2035
    GarrisonArmySpot			= X:-855 Y:1850
    BuildingSpot				= X:-960 Y:1925
    BuildingSpot				= X:-845 Y:1975
    BuildingSpot				= X:-690 Y:1860

    CPLimit					= 720
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Barrow_Downs
	DisplayName				= LW:DisplayNameBarrowDowns
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG Barrow Downs"


	SkirmishStillImage		= WOR_Barrow_Downs_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Barrow_Downs
	RegionPortrait			= LWPBarrowDOwns


	LegendaryBonus			= 10





	ConnectsTo				=
		Connection
			Region = Tower_Hills


		End
		Connection
			Region = Buckland


		End
		Connection
			Region = Amon_Sul


		End
		Connection
			Region = Rhudaur
			DetourPoint = X:-117 Y:1224
		End
		Connection
			Region = The_Shire


		End
		Connection
			Region = Cardolan


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-675 Y:1250

    HeroArmySpot				= X:-700 Y:1300
    HeroArmySpot				= X:-450 Y:1235
    HeroArmySpot				= X:-875 Y:1245
    HeroArmySpot				= X:-620 Y:1305
    GarrisonArmySpot			= X:-650 Y:1200
    BuildingSpot				= X:-565 Y:1255
    BuildingSpot				= X:-775 Y:1235

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Buckland
	DisplayName				= LW:DisplayNameNorthDowns
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG North Downs"


	SkirmishStillImage		= WOR_North_Downs_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= North_Downs
	RegionPortrait			= LWPNorthDowns




	DefenseBonus			= 5



	ConnectsTo				=
		Connection
			Region = Arnor


		End
		Connection
			Region = Fornost


		End
		Connection
			Region = Lostriand


		End
		Connection
			Region = Amon_Sul


		End
		Connection
			Region = Barrow_Downs


		End
		Connection
			Region = The_Shire


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-545 Y:1583

    HeroArmySpot				= X:-505 Y:1638
    HeroArmySpot				= X:-615 Y:1515
    HeroArmySpot				= X:-555 Y:1700
    HeroArmySpot				= X:-600 Y:1655
    GarrisonArmySpot			= X:-515 Y:1500
    BuildingSpot				= X:-600 Y:1580
    BuildingSpot				= X:-420 Y:1605

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Cair_Andros
	DisplayName				= LW:DisplayNameCairAndros
	ConqueredNotice				= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Cair Andros"


	SkirmishStillImage			= WOR_Cair_Andros_Loadscreen

	SkirmishMusicTrack				= Shell2MusicForLoadScreen
	SubObject				= Cair_Andros
	RegionPortrait				= LWPCairAndros




	DefenseBonus			= 5



	ConnectsTo				=
        Connection
			Region = Minas_Tirith


	    End
        Connection
			Region = Osgiliath


	    End
		Connection
			Region = Rohan


	    End
	    Connection
			Region = The_Dead_Marshes


		End
	    Connection
			Region = The_Brown_Lands


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1210 Y:200

	HeroArmySpot				= X:1060 Y:200
	HeroArmySpot				= X:1160 Y:200
	HeroArmySpot				= X:1260 Y:200
	HeroArmySpot				= X:1090 Y:275
	GarrisonArmySpot			= X:1325 Y:160
	BuildingSpot				= X:1160 Y:275
	BuildingSpot				= X:975 Y:250

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Cardolan
	DisplayName				= LW:DisplayNameCardolan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Cardolan_Gondor"


	SkirmishStillImage		= WOR_Cardolan_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Cardolan
	RegionPortrait			= LWPCardolan






	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Barrow_Downs


		End
		Connection
			Region = Rhudaur
		End
		Connection
			Region = Dunland


		End
		Connection
			Region = Enedwaith


		End
		Connection
			Region = Minhiriath


		End
		Connection
			Region = Tower_Hills


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-520 Y:1000

    HeroArmySpot				= X:-755 Y:1015
    HeroArmySpot				= X:-650 Y:1075
    HeroArmySpot				= X:-480 Y:1100
    HeroArmySpot				= X:-375 Y:1065
    GarrisonArmySpot			= X:-455 Y:965
    BuildingSpot				= X:-655 Y:970
    BuildingSpot				= X:-520 Y:915
    BuildingSpot				= X:-265 Y:1095

    CPLimit					= 720
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region CarnDum
	DisplayName				= LW:DisplayNameCarnDum
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG Carn Dum_Gondor"


	SkirmishStillImage		= WOR_CarnDum_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Carn_Dum
	RegionPortrait			= LWPCarnDum


	LegendaryBonus			= 10





	ConnectsTo				=
		Connection
			Region = Angmar
		End
        Connection
			Region = Forodwaith
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-155 Y:2295

    HeroArmySpot				= X:-260 Y:2260
    HeroArmySpot				= X:-190 Y:2225
    HeroArmySpot				= X:-125 Y:2210
    HeroArmySpot				= X:-75 Y:2310
    GarrisonArmySpot				= X:-50 Y:2220
    BuildingSpot				= X:-290 Y:2330

     CPLimit					= 600
    AllyCPLimit				= 360

	CreateAutoFort				= Yes
	FortressPortrait			= BPCCarnDum
	FortressDisplayName			= LW:DisplayNameCarnDumCastle
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Carrock
	DisplayName				= LW:DisplayNameCarrock
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Carrock"


	SkirmishStillImage		= WOR_Carrock_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Carrock
	RegionPortrait			= LWPCarrock





	ExperienceBonus			= 5


	ConnectsTo				=
		Connection
			Region = High_Pass


		End
        Connection
			Region = Mirkwood


		End
        Connection
			Region = Lothlorien


		End
        Connection
			Region = MountGundabad
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:580 Y:1885

    HeroArmySpot				= X:445 Y:2070
    HeroArmySpot				= X:545 Y:1975
    HeroArmySpot				= X:625 Y:2045
    HeroArmySpot				= X:740 Y:1760
    GarrisonArmySpot			= X:605 Y:1860
    BuildingSpot				= X:660 Y:1710
    BuildingSpot				= X:810 Y:1715

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Celduin
	DisplayName				= LW:DisplayNameCelduin
	ConqueredNotice				= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Celduin"


	SkirmishStillImage			= WOR_Celduin_Loadscreen

	SkirmishMusicTrack				= Shell2MusicForLoadScreen
	SubObject				= Celduin
	RegionPortrait				= LWPCelduin

	ResourceBonus			= 10






	ConnectsTo				=
        Connection
		Region = Dagorlad


		End
		Connection
		Region = Erebor


		End
		Connection
		Region = Iron_Hills


		End
        Connection
		Region = Mirkwood


		End
		Connection
		Region = Rhun


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1920 Y:1575

        HeroArmySpot				= X:1770 Y:1650
        HeroArmySpot				= X:1920 Y:1675
        HeroArmySpot				= X:2070 Y:1650
    	HeroArmySpot				= X:1670 Y:1695
        GarrisonArmySpot			= X:1920 Y:1475
        BuildingSpot				= X:1770 Y:1500
        BuildingSpot				= X:2070 Y:1500

        CPLimit					= 480
        AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Dagorlad
	DisplayName				= LW:DisplayNameDagorlad
	ConqueredNotice				= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dagorlad"


	SkirmishStillImage			= WOR_Dagorlad_Loadscreen

	SkirmishMusicTrack				= Shell2MusicForLoadScreen
	SubObject				= Dagorlad
	RegionPortrait				= LWPDagorlad



	AttackBonus			= 5




	ConnectsTo				=
        Connection
		Region = Celduin


		End
		Connection
		Region = Dol_Guldur


		End
        Connection
		Region = Mirkwood


		End
		Connection
		Region = Rhun


		End
		Connection
		Region = The_Dead_Marshes


		End
		Connection
		Region = The_Brown_Lands


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1975 Y:1060

        HeroArmySpot				= X:1825 Y:1135
        HeroArmySpot				= X:1975 Y:1160
        HeroArmySpot				= X:2125 Y:1135
    	HeroArmySpot				= X:1700 Y:1125
        GarrisonArmySpot			= X:1975 Y:960
        BuildingSpot				= X:1825 Y:985
        BuildingSpot				= X:2125 Y:985

        CPLimit					= 480
        AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Dol_Guldur
	DisplayName				= LW:DisplayNameDolGuldur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dol Guldur"


	SkirmishStillImage		= WOR_Dol_Guldur_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Dol_Guldur
	RegionPortrait			= LWPDolGuldor


	LegendaryBonus			= 10





	ConnectsTo				=
        Connection
			Region = Dagorlad


		End
        Connection
			Region = Fangorn


		End
		Connection
			Region = Lothlorien


		End
        Connection
			Region = Mirkwood


		End
		Connection
			Region = The_Brown_Lands


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1230 Y:1100

    HeroArmySpot				= X:1230 Y:1175
    HeroArmySpot				= X:1355 Y:1150
    HeroArmySpot				= X:1105 Y:1050
    HeroArmySpot				= X:1425 Y:1110
    GarrisonArmySpot			= X:1230 Y:1025
	BuildingSpot				= X:1355 Y:1050

    CPLimit					= 600
    AllyCPLimit				= 360

	CreateAutoFort				= Yes
	FortressPortrait			= BPCDolGuldurCastle
	FortressDisplayName			= LW:DisplayNameDolGuldur
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Dunland
	DisplayName				= LW:DisplayNameDunland
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dunland"


	SkirmishStillImage		= WOR_Dunland_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Dunland
	RegionPortrait			= LWPDunland



	AttackBonus				= 5




	ConnectsTo				=
        Connection
			Region = Enedwaith


		End
		Connection
			Region = Gap_Of_Rohan


		End
        Connection
			Region = Isengard


		End
		Connection
			Region = Cardolan


		End
        Connection
			Region = Rhudaur


		End
		Connection
			Region = Rivendell


		End
		Connection
			Region = Redhorn_Pass


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-60 Y:950

    HeroArmySpot				= X:-20 Y:1100
    HeroArmySpot				= X:120 Y:1100
    HeroArmySpot				= X:-150 Y:950
    HeroArmySpot				= X:90 Y:1020
    GarrisonArmySpot			= X:30 Y:950
    BuildingSpot				= X:-240 Y:850
    BuildingSpot				= X:-20 Y:850

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Enedwaith
	DisplayName				= LW:DisplayNameEnedwaith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Enedwaith"


	SkirmishStillImage		= WOR_Enedwaith_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Enedwaith
	RegionPortrait			= LWPEnedwaith

	ResourceBonus			= 10






	ConnectsTo				=
        Connection
			Region = Dunland


		End
        Connection
			Region = Gap_Of_Rohan


		End
        Connection
			Region = Anfalas


	        End
        Connection
			Region = Helms_Deep


		End
		Connection
			Region = Minhiriath


		End
		Connection
			Region = Cardolan


		End

	CustomCenterPoint			= Yes
    CenterPoint				= X:-360 Y:325

    HeroArmySpot				= X:-510 Y:400
	HeroArmySpot				= X:-360 Y:425
	HeroArmySpot				= X:-210 Y:400
    HeroArmySpot				= X:-300 Y:590
	GarrisonArmySpot			= X:-360 Y:225
	BuildingSpot				= X:-510 Y:250
	BuildingSpot				= X:-210 Y:250

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Erebor
	DisplayName				= LW:DisplayNameErebor
	ConqueredNotice				= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Erebor"


	SkirmishStillImage			= WOR_Erebor_Loadscreen

	SkirmishMusicTrack				= Shell2MusicForLoadScreen
	SubObject				= Erebor
	RegionPortrait				= LWPErebor



	LegendaryBonus			= 10





	ConnectsTo				=
		Connection
			Region = Celduin


		End
		Connection
			Region = Iron_Hills


		End
		Connection
			Region = Mirkwood


		End

	CustomCenterPoint			= Yes
    CenterPoint				= X:1628 Y:1925

    HeroArmySpot				= X:1405 Y:2000
    HeroArmySpot				= X:1550 Y:2000
    HeroArmySpot				= X:1705 Y:2000
    HeroArmySpot				= X:1895 Y:1895
    GarrisonArmySpot			= X:1855 Y:2000
	BuildingSpot				= X:1780 Y:1925

    CPLimit					= 600
    AllyCPLimit				= 360

	CreateAutoFort				= Yes
	FortressPortrait			= BPCThroneofErebor
	FortressDisplayName			= LW:DisplayNameErebor
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Ettenmoors
	DisplayName				= LW:DisplayNameEttenmoors
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Ettenmoors"


	SkirmishStillImage		= WOR_Ettenmoors_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Ettenmoors
	RegionPortrait			= LWPEttenmoors





	DefenseBonus			= 5



	ConnectsTo				=
		Connection
			Region = Angmar


		End
		Connection
			Region = Rhudaur


		End
		Connection
			Region = Lostriand


		End
		Connection
			Region = Fornost


		End
		Connection
			Region = Arnor


		End
		Connection
			Region = Forodwaith


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-137 Y:1900

    HeroArmySpot				= X:-325 Y:2055
    HeroArmySpot				= X:-120 Y:1835
    HeroArmySpot				= X:80 Y:1881
    HeroArmySpot				= X:-200 Y:1915
    GarrisonArmySpot			= X:-210 Y:1995
    BuildingSpot				= X:-210 Y:1840
    BuildingSpot				= X:-20 Y:1820

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Fangorn
	DisplayName				= LW:DisplayNameFangorn
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Fangorn"


	SkirmishStillImage		= WOR_Fangorn_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Fangorn
	RegionPortrait			= LWPFangorn


	ResourceBonus			= 10







	ConnectsTo				=
        Connection
			Region = Dol_Guldur


		End
        Connection
			Region = Gap_Of_Rohan


	        End
        Connection
			Region = Isengard


		End
		Connection
			Region = Lothlorien


		End
		Connection
			Region = Rohan


		End
        Connection
			Region = The_Brown_Lands


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:660 Y:800

    HeroArmySpot				= X:535 Y:825
    HeroArmySpot				= X:660 Y:875
    HeroArmySpot				= X:785 Y:875
    HeroArmySpot				= X:880 Y:860
    GarrisonArmySpot			= X:660 Y:725
    BuildingSpot				= X:535 Y:725
    BuildingSpot				= X:785 Y:775

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Forlindon
	DisplayName				= LW:DisplayNameForlindon
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Forlindon"


	SkirmishStillImage		= WOR_Forlindon_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Forlindon
	RegionPortrait			= LWPForlindon




	AttackBonus			= 5




	ConnectsTo				=
		Connection
			Region = Arnor


		End
		Connection
			Region = Grey_Havens


		End

	CustomCenterPoint			= Yes
    CenterPoint				= X:-1680 Y:2050

    HeroArmySpot				= X:-1342 Y:2250
    HeroArmySpot				= X:-1174 Y:2250
    HeroArmySpot				= X:-2024 Y:1790
    HeroArmySpot				= X:-1255 Y:2300
    GarrisonArmySpot			= X:-1856 Y:1790
    BuildingSpot				= X:-1960 Y:1640
    BuildingSpot				= X:-1278 Y:2100

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Fornost
	DisplayName				= LW:DisplayNameFornost
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG Fornost_Gondor"


	SkirmishStillImage		= WOR_Fornost_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Fornost
	RegionPortrait			= LWPFornost





	ExperienceBonus		= 5


	ConnectsTo				=
		Connection
			Region = Arnor


		End
		Connection
			Region = Ettenmoors


		End
		Connection
			Region = Lostriand


		End
		Connection
			Region = Buckland


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-415 Y:1835

    HeroArmySpot				= X:-550 Y:1920
    HeroArmySpot				= X:-490 Y:1950
    HeroArmySpot				= X:-450 Y:1750
    HeroArmySpot				= X:-300 Y:1770
    GarrisonArmySpot			= X:-390 Y:1760
    BuildingSpot				= X:-510 Y:1850

    CPLimit					= 600
    AllyCPLimit				= 360

	CreateAutoFort				= Yes
	FortressPortrait			= BPCFornost
	FortressDisplayName			= LW:DisplayNameFornostCastle
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End




Region Forodwaith
	DisplayName			= LW:DisplayNameForodwaith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "MAP WOR Forodwaith"


	SkirmishStillImage		= WOR_Forodwaith_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject			= Forodwaith
	RegionPortrait			= LWPForodwaith



	AttackBonus			= 5




	ConnectsTo				=
		Connection
			Region = Arnor
		End
		Connection
			Region = Ettenmoors
		End
		Connection
			Region = Angmar
		End
		Connection
			Region = MountGundabad
			DetourPoint = X:-10 Y:2480
		End
		Connection
			Region = CarnDum
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-465 Y:2340

    HeroArmySpot				= X:-430 Y:2450
    HeroArmySpot				= X:-385 Y:2500
    HeroArmySpot				= X:40 Y:2480
    HeroArmySpot				= X:-475 Y:2420
    GarrisonArmySpot			= X:135 Y:2480
    BuildingSpot				= X:-645 Y:2355
    BuildingSpot				= X:-500 Y:2350

    CPLimit					= 480
    AllyCPLimit				= 360

	CreateAutoFort				= No

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Gap_Of_Rohan
	DisplayName				= LW:DisplayNameGapofRohan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Gap of Rohan"


	SkirmishStillImage		= WOR_Gap_Of_Rohan_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Gap_Of_Rohan
	RegionPortrait			= LWPGapofRohan










	ConnectsTo				=
        Connection
			Region = Dunland


		End
		Connection
			Region = Enedwaith


		End
        Connection
			Region = Fangorn


	        End
	    Connection
			Region = Helms_Deep


		End
		Connection
			Region = Isengard


		End
        Connection
			Region = Rohan


	    End

	CustomCenterPoint			= Yes
	CenterPoint				= X:140 Y:460

	HeroArmySpot				= X:-85 Y:500
    HeroArmySpot				= X:65 Y:460
    HeroArmySpot				= X:215 Y:460
    HeroArmySpot				= X:-115 Y:620
    GarrisonArmySpot			= X:415 Y:460
    BuildingSpot				= X:365 Y:505

    CPLimit					= 360
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Anfalas
	DisplayName				= LW:DisplayNameAnfalas
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map mp anfalas"


	SkirmishStillImage		= WOR_Anfalas_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Anfalas
	RegionPortrait			= LWPAnfalas





	DefenseBonus			= 5



	ConnectsTo				=
		Connection
			Region = Enedwaith


		End
		Connection
			Region = Belfalas


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-150 Y:-135

	HeroArmySpot				= X:-300 Y:-260
	HeroArmySpot				= X:00 Y:-260
	HeroArmySpot				= X:135 Y:-205
    HeroArmySpot				= X:-345 Y:-125
	GarrisonArmySpot			= X:-140 Y:-135
	BuildingSpot				= X:-150 Y:-230
	BuildingSpot				= X:-430 Y:-300

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Belfalas
	DisplayName				= LW:DisplayNameBelfalas
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Belfalas"


	SkirmishStillImage		= WOR_Gondor_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Belfalas
	RegionPortrait			= LWPGondor







	FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Umbar


		End
		Connection
			Region = Anfalas


		End
		Connection
			Region = Osgiliath


		End
		Connection
			Region = Ithilien


		End
        Connection
			Region = Minas_Tirith


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:790 Y:-410

	HeroArmySpot				= X:520 Y:-360
	HeroArmySpot				= X:840 Y:-320
	HeroArmySpot				= X:1080 Y:-400
    HeroArmySpot				= X:395 Y:-505
	GarrisonArmySpot			= X:800 Y:-460
	BuildingSpot				= X:645 Y:-465
	BuildingSpot				= X:955 Y:-410
	BuildingSpot				= X:1170 Y:-360

        CPLimit					= 720
        AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Grey_Havens
	DisplayName				= LW:DisplayNameGreyHavens
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Grey Havens"


	SkirmishStillImage		= WOR_Grey_Havens_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Grey_Havens
	RegionPortrait			= LWPGreyHavens



	LegendaryBonus			= 10





	ConnectsTo				=
		Connection
			Region = Arnor


		End
		Connection
			Region = Forlindon


		End
		Connection
			Region = Harlindon



		End
		Connection
			Region = Tower_Hills


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-1430 Y:1715

	HeroArmySpot				= X:-1430 Y:1790
    HeroArmySpot				= X:-1330 Y:1865
    HeroArmySpot				= X:-1230 Y:1790
    HeroArmySpot				= X:-1580 Y:1550
    GarrisonArmySpot			= X:-1330 Y:1715
    BuildingSpot				= X:-1430 Y:1600
    BuildingSpot				= X:-1730 Y:1600

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Harad
	DisplayName				= LW:DisplayNameHarad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Harad"


	SkirmishStillImage		= WOR_Harad_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Harad
	RegionPortrait			= LWPHarad







	FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Umbar


		End
		Connection
			Region = Ithilien


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1870 Y:-900

    HeroArmySpot				= X:1550 Y:-800
    HeroArmySpot				= X:1720 Y:-900
    HeroArmySpot				= X:1620 Y:-650
    HeroArmySpot				= X:2030 Y:-970
    GarrisonArmySpot			= X:1765 Y:-715
    BuildingSpot				= X:2425 Y:-1000
    BuildingSpot				= X:1880 Y:-1000
    BuildingSpot				= X:2170 Y:-1000

    CPLimit					= 720
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Harlindon
	DisplayName				= LW:DisplayNameHarlindon
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Harlindon"


	SkirmishStillImage		= WOR_Harlindon_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Harlindon
	RegionPortrait			= LWPHarlindon






	ExperienceBonus			= 5


	ConnectsTo				=
		Connection
			Region = Grey_Havens



		End
		Connection
			Region = Minhiriath


		End
		Connection
			Region = Tower_Hills


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-1475 Y:1000

    HeroArmySpot				= X:-1780 Y:1260
    HeroArmySpot				= X:-1630 Y:1260
    HeroArmySpot				= X:-1420 Y:925
    HeroArmySpot				= X:-1500 Y:955
    GarrisonArmySpot			= X:-1575 Y:985
    BuildingSpot				= X:-1650 Y:1100
    BuildingSpot				= X:-1300 Y:930

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Helms_Deep
	DisplayName				= LW:DisplayNameHelmsDeep
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Helms Deep"


	SkirmishStillImage		= WOR_Helms_Deep_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Helms_Deep
	RegionPortrait			= LWPHelmsDeep



	LegendaryBonus			= 10





	ConnectsTo				=
        Connection
			Region = Enedwaith


		End
		Connection
			Region = Gap_Of_Rohan


		End
		Connection
			Region = Rohan


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:140 Y:300

	HeroArmySpot				= X:25 Y:310
	HeroArmySpot				= X:65 Y:345
	HeroArmySpot				= X:140 Y:360
    HeroArmySpot				= X:70 Y:280
	GarrisonArmySpot			= X:215 Y:345
	BuildingSpot				= X:275 Y:290

    CPLimit					= 600
    AllyCPLimit				= 360

	CreateAutoFort				= Yes
	FortressPortrait			= BPCHelmsDeep
	FortressDisplayName			= LW:DisplayNameHelmsDeep
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region High_Pass
	DisplayName				= LW:DisplayNameHighPass
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR High Pass"


	SkirmishStillImage		= WOR_High_Pass_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= High_Pass
	RegionPortrait			= LWPHighPass









	ConnectsTo				=
		Connection
			Region = Rhudaur


		End
		Connection
			Region = Carrock


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:415 Y:1725

    HeroArmySpot			= X:360 Y:1770
    HeroArmySpot			= X:400 Y:1780
    HeroArmySpot			= X:440 Y:1820
    HeroArmySpot				= X:445 Y:1765
    GarrisonArmySpot		= X:490 Y:1715
    BuildingSpot			= X:425 Y:1670

    CPLimit					= 360
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Iron_Hills
	DisplayName				= LW:DisplayNameIronHills
	ConqueredNotice				= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Iron Hills"


	SkirmishStillImage			= WOR_Iron_Hills_Loadscreen

	SkirmishMusicTrack				= Shell2MusicForLoadScreen
	SubObject				= Iron_Hills
	RegionPortrait				= LWPIronHills






	ExperienceBonus		= 5
	FertileTerritoryBonus 		= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
		Region = Celduin


		End
		Connection
		Region = Erebor


		End
		Connection
		Region = Rhun


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:2460 Y:1895

        HeroArmySpot				= X:2310 Y:1970
        HeroArmySpot				= X:2460 Y:1995
        HeroArmySpot				= X:2610 Y:1970
    HeroArmySpot				= X:2170 Y:1950
        GarrisonArmySpot			= X:2360 Y:1765
        BuildingSpot				= X:2260 Y:1820
        BuildingSpot				= X:2460 Y:1820
        BuildingSpot				= X:2660 Y:1820

        CPLimit					= 720
	AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Isengard
	DisplayName				= LW:DisplayNameIsengard
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Isengard"


	SkirmishStillImage		= WOR_Isengard_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Isengard
	RegionPortrait			= LWPIsengard



	LegendaryBonus			= 10





	ConnectsTo				=
        Connection
			Region = Dunland


		End
        Connection
			Region = Fangorn


		End
		Connection
			Region = Gap_Of_Rohan


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:140 Y:640

	HeroArmySpot				= X:70 Y:660
	HeroArmySpot				= X:90 Y:600
	HeroArmySpot				= X:210 Y:600
    HeroArmySpot				= X:125 Y:710
	GarrisonArmySpot			= X:230 Y:660
	BuildingSpot				= X:150 Y:560

    CPLimit					= 600
	AllyCPLimit				= 360

	CreateAutoFort				= Yes
	FortressPortrait			= BPCOrthanc
	FortressDisplayName			= LW:DisplayNameIsengard
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Ithilien
	DisplayName				= LW:DisplayNameIthilien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Ithilien"


	SkirmishStillImage		= WOR_Ithilien_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Ithilien
	RegionPortrait			= LWPIthilien





	ExperienceBonus			= 5


	ConnectsTo				=
        Connection
			Region = Belfalas


		End
		Connection
			Region = Harad


		End
		Connection
			Region = Umbar


		End
	    Connection
			Region = Osgiliath


		End
	    Connection
			Region = The_Dead_Marshes


		End
	    Connection
			Region = Minas_Morgul


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1525 Y:-380

	HeroArmySpot				= X:1400 Y:-340
	HeroArmySpot				= X:1525 Y:-335
	HeroArmySpot				= X:1650 Y:-340
    HeroArmySpot				= X:1570 Y:-210
	GarrisonArmySpot			= X:1525 Y:-480
	BuildingSpot				= X:1400 Y:-455
	BuildingSpot				= X:1650 Y:-455

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Lostriand
	DisplayName				= LW:DisplayNameLostriand
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Lostriand"


	SkirmishStillImage		= WOR_Lostriand_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Lostriand
	RegionPortrait			= LWPLostriand

	ResourceBonus			= 5






	ConnectsTo				=
		Connection
			Region = Fornost


		End
		Connection
			Region = Ettenmoors


		End
		Connection
			Region = Rhudaur


		End
		Connection
			Region = Amon_Sul


		End
		Connection
			Region = Buckland


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:-145 Y:1663

    HeroArmySpot				= X:-225 Y:1680
    HeroArmySpot				= X:-165 Y:1700
    HeroArmySpot				= X:-100 Y:1680
    HeroArmySpot				= X:-260 Y:1645
    GarrisonArmySpot			= X:-170 Y:1620
    BuildingSpot				= X:-80 Y:1635

    CPLimit					= 360
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Lothlorien
	DisplayName				= LW:DisplayNameLothlorien
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Lorien"


	SkirmishStillImage		= WOR_Lorien_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Lothlorien
	RegionPortrait			= LWPLorien


	LegendaryBonus			= 10





	ConnectsTo				=
        Connection
			Region = Dol_Guldur


		End
		Connection
			Region = Fangorn


		End
		Connection
			Region = Carrock


		End
        Connection
			Region = Mirkwood


		End
        Connection
			Region = Redhorn_Pass


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:825 Y:1300

    HeroArmySpot				= X:725 Y:1450
    HeroArmySpot				= X:925 Y:1450
    HeroArmySpot				= X:725 Y:1300
    HeroArmySpot				= X:770 Y:1055
    GarrisonArmySpot			= X:925 Y:1300
    BuildingSpot				= X:575 Y:1050
    BuildingSpot				= X:725 Y:1150
    BuildingSpot				= X:875 Y:1150

    CPLimit					= 720
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Minas_Morgul
	DisplayName				= LW:DisplayNameMinasMorgul
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Minas Morgul"


	SkirmishStillImage		= WOR_Minas_Morgul_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Minas_Morgul
	RegionPortrait			= LWPMinasMorgul


	LegendaryBonus			= 10





	ConnectsTo				=
		Connection
			Region = Mount_Doom


		End
		Connection
			Region = The_Dead_Marshes


		End
		Connection
			Region = Ithilien


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1740 Y:30

	HeroArmySpot				= X:1760 Y:120
	HeroArmySpot				= X:1780 Y:60
	HeroArmySpot				= X:1800 Y:0
    HeroArmySpot				= X:1740 Y:-55
	GarrisonArmySpot			= X:1820 Y:-60
	BuildingSpot				= X:1670 Y:0

    CPLimit					= 600
    AllyCPLimit				= 360

	CreateAutoFort				= Yes
	FortressPortrait			= BPCMinasMorgulTower
	FortressDisplayName			= LW:DisplayNameMinasMorgul
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Minas_Tirith
	DisplayName				= LW:DisplayNameMinasTirith
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Minas Tirith"


	SkirmishStillImage		= WOR_Minas_Tirith_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Minas_Tirith
	RegionPortrait			= LWPMinas_Tirith


	LegendaryBonus			= 10





	ConnectsTo				=
        Connection
			Region = Cair_Andros


	    End
        Connection
			Region = Belfalas


	    End
	    Connection
			Region = Osgiliath


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1200 Y:-25

	HeroArmySpot				= X:1270 Y:60
    HeroArmySpot				= X:1320 Y:10
    HeroArmySpot				= X:1320 Y:-60
     HeroArmySpot				= X:1220 Y:55
   GarrisonArmySpot			= X:1270 Y:-110
    BuildingSpot				= X:1220 Y:-160

    CPLimit					= 600
    AllyCPLimit				= 360

	CreateAutoFort				= Yes
	FortressPortrait			= BPCMinasTirithKeep
	FortressDisplayName			= LW:DisplayNameMinasTirith
	FortressDisplayDescription	= CONTROLBAR:LW_ToolTip_GenericStronghold

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Minhiriath
	DisplayName				= LW:DisplayNameMinhiriath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Minhiriath"


	SkirmishStillImage		= WOR_Minhiriath_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Minhiriath
	RegionPortrait			= LWPMinhiriath

	ResourceBonus			= 10






	ConnectsTo				=
		Connection
			Region = Cardolan


		End
		Connection
			Region = Tower_Hills


		End
		Connection
			Region = Enedwaith


		End
		Connection
			Region = Harlindon


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-875 Y:720

    HeroArmySpot				= X:-915 Y:910
    HeroArmySpot				= X:-810 Y:830
    HeroArmySpot				= X:-700 Y:760
    HeroArmySpot				= X:-735 Y:560
    GarrisonArmySpot			= X:-940 Y:630
    BuildingSpot				= X:-980 Y:800
    BuildingSpot				= X:-785 Y:650

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Mirkwood
	DisplayName				= LW:DisplayNameMirkwood
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Mirkwood"


	SkirmishStillImage		= WOR_Mirkwood_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Mirkwood
	RegionPortrait			= LWPMirkwood






	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Celduin


		End
        Connection
			Region = Dagorlad


		End
        Connection
			Region = Dol_Guldur


		End
		Connection
			Region = Erebor


		End
		Connection
			Region = Carrock


		End
        Connection
			Region = Lothlorien


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1175 Y:1700

        HeroArmySpot				= X:920 Y:1900
        HeroArmySpot				= X:1150 Y:1900
        HeroArmySpot				= X:1060 Y:1700
     HeroArmySpot				= X:1265 Y:1580
       GarrisonArmySpot			= X:1290 Y:1700
        BuildingSpot				= X:1150 Y:1500
        BuildingSpot				= X:1310 Y:1400
        BuildingSpot				= X:1480 Y:1500

        CPLimit					= 720
        AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region MountGundabad
	DisplayName			= LW:DisplayNameMountGundabad
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName				= "MAP WOR ANG Gundabad"


	SkirmishStillImage		= WOR_Gundabad_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject			= Mount_Gundabad
	RegionPortrait			= LWPMountGundabad








	ConnectsTo				=
		Connection
			Region = Carrock
		End
		Connection
			Region = Forodwaith
			DetourPoint = X:-10 Y:2480
		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:475 Y:2265

	HeroArmySpot				= X:405 Y:2240
    HeroArmySpot				= X:465 Y:2230
    HeroArmySpot				= X:560 Y:2225
    HeroArmySpot				= X:350 Y:2280
    GarrisonArmySpot			= X:635 Y:2230
	BuildingSpot				= X:345 Y:2445

    CPLimit					= 360
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Mordor
	DisplayName				= LW:DisplayNameMordor
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Mordor"


	SkirmishStillImage		= WOR_Mordor_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Mordor
	RegionPortrait			= LWPMordor






	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = Mount_Doom


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:2620 Y:-230

	HeroArmySpot				= X:2230 Y:-320
    HeroArmySpot				= X:2360 Y:-230
    HeroArmySpot				= X:2490 Y:-140
    HeroArmySpot				= X:2120 Y:-325
    GarrisonArmySpot			= X:2620 Y:-50
	BuildingSpot				= X:2230 Y:-420
	BuildingSpot				= X:2480 Y:-230
    BuildingSpot				= X:2720 Y:-50

    CPLimit					= 720
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Mount_Doom
	DisplayName				= LW:DisplayNameMountDoom
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Mount Doom"


	SkirmishStillImage		= WOR_Mount_Doom_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Mount_Doom
	RegionPortrait			= LWPMount_Doom


	LegendaryBonus			= 10





	ConnectsTo				=
		Connection
			Region = Minas_Morgul


		End
		Connection
			Region = Mordor


		End
		Connection
			Region = The_Black_Gate


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:2100 Y:130

	HeroArmySpot				= X:1930 Y:130
	HeroArmySpot				= X:2030 Y:260
	HeroArmySpot				= X:2170 Y:260
    HeroArmySpot				= X:1965 Y:50
	GarrisonArmySpot			= X:2270 Y:130
	BuildingSpot				= X:2030 Y:-50
	BuildingSpot				= X:2170 Y:-50

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Osgiliath
	DisplayName				= LW:DisplayNameOsgiliath
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Osgiliath"


	SkirmishStillImage		= WOR_Osgiliath_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Oshiliath
	RegionPortrait			= LWPOsgiliath

	ResourceBonus			= 5






	ConnectsTo				=
        Connection
		Region = Cair_Andros


	        End
	    Connection
		Region = Ithilien


		End
		Connection
		Region = Minas_Tirith


		End
	    Connection
		Region = The_Dead_Marshes


		End
	    Connection
		Region = Belfalas


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1417 Y:-120

	HeroArmySpot				= X:1380 Y:-175
    HeroArmySpot				= X:1425 Y:-100
	HeroArmySpot				= X:1465 Y:-55
    HeroArmySpot				= X:1430 Y:-180
	GarrisonArmySpot			= X:1325 Y:-220
	BuildingSpot				= X:1430 Y:-5

    CPLimit					= 360
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 1
	End
End





Region Redhorn_Pass
	DisplayName				= LW:DisplayNameRedhornPass
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Redhorn Pass"


	SkirmishStillImage		= WOR_Redhorn_Pass_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Redhorn_Pass
	RegionPortrait			= LWPRedhornPass








	ConnectsTo				=
        Connection
			Region = Dunland


		End
        Connection
			Region = Lothlorien


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:400 Y:1190

    HeroArmySpot				= X:330 Y:1240
    HeroArmySpot				= X:385 Y:1290
    HeroArmySpot				= X:460 Y:1290
    HeroArmySpot				= X:460 Y:1120
    GarrisonArmySpot			= X:515 Y:1240
    BuildingSpot				= X:300 Y:1120

    CPLimit					= 360
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 1
	End
End





Region Rhudaur
	DisplayName				= LW:DisplayNameRhudaur
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR ANG Rhudaur_Gondor"


	SkirmishStillImage		= WOR_Rhudaur_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Rhudaul
	RegionPortrait			= LWPRhudaur






	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
		Connection
			Region = High_Pass


		End
		Connection
			Region = Ettenmoors


		End
		Connection
			Region = Lostriand


		End
		Connection
			Region = Amon_Sul


		End
		Connection
			Region = Rivendell


		End
		Connection
			Region = Dunland


		End
		Connection
			Region = Cardolan
		End
		Connection
			Region = Barrow_Downs
			DetourPoint = X:-117 Y:1224
		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:20 Y:1550

    HeroArmySpot				= X:210 Y:1800
    HeroArmySpot				= X:0 Y:1495
    HeroArmySpot				= X:70 Y:1650
    HeroArmySpot				= X:-10 Y:1430
    GarrisonArmySpot			= X:-25 Y:1330
    BuildingSpot				= X:60 Y:1315
    BuildingSpot				= X:130 Y:1750
    BuildingSpot				= X:-80 Y:1215

    CPLimit					= 720
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Rhun
	DisplayName				= LW:DisplayNameRhun
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Rhun"


	SkirmishStillImage		= WOR_Rhun_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Rhun
	RegionPortrait			= LWPRhun






	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Celduin


		End
		Connection
			Region = Dagorlad


		End
		Connection
			Region = Iron_Hills


		End

    HeroArmySpot				= X:2450 Y:1450
    HeroArmySpot				= X:2600 Y:1550
    HeroArmySpot				= X:2750 Y:1450
    HeroArmySpot				= X:2450 Y:1305
    GarrisonArmySpot			= X:2600 Y:1350
    BuildingSpot				= X:2450 Y:675
    BuildingSpot				= X:2600 Y:825
    BuildingSpot				= X:2750 Y:675

    CPLimit					= 720
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Rivendell
	DisplayName				= LW:DisplayNameRivendell
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Rivendell"


	SkirmishStillImage		= WOR_Rivendell_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Rivendell
	RegionPortrait			= LWPRivendell


	LegendaryBonus			= 10






	ConnectsTo				=
		Connection
			Region = Rhudaur


		End
		Connection
			Region = Dunland


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:185 Y:1505

    HeroArmySpot				= X:160 Y:1550
    HeroArmySpot				= X:140 Y:1505
    HeroArmySpot				= X:170 Y:1405
    HeroArmySpot				= X:210 Y:1435
    GarrisonArmySpot			= X:240 Y:1510
    BuildingSpot				= X:215 Y:1590

    CPLimit					= 600
    AllyCPLimit				= 360

	CreateAutoFort				= Yes
	FortressPortrait			= BPCElrondsHouse
	FortressDisplayName			= LW:DisplayNameRivendell
	FortressDisplayDescription		= CONTROLBAR:LW_ToolTip_GenericStronghold

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 0
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Rohan
	DisplayName				= LW:DisplayNameRohan
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Rohan"


	SkirmishStillImage		= WOR_Rohan_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Rohan
	RegionPortrait			= LWPRohan






	FertileTerritoryBonus 	= FERTILE_TERRITORY_BONUS

	ConnectsTo				=
        Connection
			Region = Cair_Andros


	    End
	    Connection
			Region = Fangorn


		End
        Connection
			Region = Gap_Of_Rohan


	   	End
	   	Connection
			Region = Helms_Deep


		End
		Connection
			Region = The_Brown_Lands


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:770 Y:460

        HeroArmySpot				= X:620 Y:535
        HeroArmySpot				= X:770 Y:560
        HeroArmySpot				= X:920 Y:535
     HeroArmySpot				= X:710 Y:310
       GarrisonArmySpot			= X:540 Y:320
        BuildingSpot				= X:620 Y:385
        BuildingSpot				= X:770 Y:410
        BuildingSpot				= X:920 Y:385

        CPLimit					= 720
        AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region The_Black_Gate
	DisplayName				= LW:DisplayNameBlackGate
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Black Gate"


	SkirmishStillImage		= WOR_Black_Gate_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= The_Black_Gate
	RegionPortrait			= LWPBlackGate



	AttackBonus			= 5




	ConnectsTo				=
		Connection
			Region = Mount_Doom


		End
		Connection
			Region = The_Dead_Marshes


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1780 Y:420

	HeroArmySpot				= X:1780 Y:310
    HeroArmySpot				= X:1830 Y:360
    HeroArmySpot				= X:1880 Y:410
    HeroArmySpot				= X:1800 Y:505
    GarrisonArmySpot			= X:1930 Y:460
	BuildingSpot				= X:1680 Y:430

    CPLimit					= 360
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region The_Dead_Marshes
	DisplayName				= LW:DisplayNameDeadMarshes
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Dead Marshes"


	SkirmishStillImage		= WOR_Dead_Marshes_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Dead_Marshes
	RegionPortrait	= LWPDeadMarshes


	LegendaryBonus			= 10





	ConnectsTo				=
        Connection
			Region = Cair_Andros


		End
		Connection
			Region = Dagorlad


		End
		Connection
			Region = The_Brown_Lands


		End
		Connection
			Region = The_Black_Gate


		End
		Connection
			Region = Osgiliath


		End
		Connection
			Region = Ithilien


		End
		Connection
			Region = Minas_Morgul


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1470 Y:430

	HeroArmySpot			= X:1340 Y:350
	HeroArmySpot			= X:1450 Y:515
	HeroArmySpot			= X:1640 Y:625
    HeroArmySpot				= X:1450 Y:255
	GarrisonArmySpot		= X:1520 Y:110
	BuildingSpot			= X:1425 Y:365
	BuildingSpot			= X:1730 Y:660

    CPLimit					= 480
    AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region The_Brown_Lands
	DisplayName				= LW:DisplayNameBrownLands
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "map mp brown lands"


	SkirmishStillImage		= WOR_Brownlands_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Brown_Lands
	RegionPortrait			= LWPBrownLands

	ResourceBonus			= 10






	ConnectsTo				=
        Connection
			Region = Cair_Andros


		End
		Connection
			Region = Dagorlad


		End
		Connection
			Region = Dol_Guldur


		End
        Connection
			Region = Fangorn


		End
		Connection
			Region = Rohan


		End
		Connection
			Region = The_Dead_Marshes


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:1330 Y:720

	HeroArmySpot				= X:1130 Y:765
	HeroArmySpot				= X:1325 Y:860
	HeroArmySpot				= X:1230 Y:835
    HeroArmySpot				= X:1105 Y:605
	GarrisonArmySpot			= X:1380 Y:690
	BuildingSpot				= X:1250 Y:555
	BuildingSpot				= X:1500 Y:800

	CPLimit					= 480
	AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region The_Shire
	DisplayName				= LW:DisplayNameTheShire
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Shire"


	SkirmishStillImage		= WOR_Shire_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= The_Shire
	RegionPortrait			= LWPShire


	LegendaryBonus			= 10





	ConnectsTo				=
		Connection
			Region = Arnor


		End
		Connection
			Region = Buckland


		End
		Connection
			Region = Barrow_Downs


		End
		Connection
			Region = Tower_Hills


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-830 Y:1530

	HeroArmySpot				= X:-875 Y:1595
	HeroArmySpot				= X:-800 Y:1620
	HeroArmySpot				= X:-725 Y:1525
    HeroArmySpot				= X:-755 Y:1690
	GarrisonArmySpot			= X:-800 Y:1420
	BuildingSpot				= X:-875 Y:1445
	BuildingSpot				= X:-725 Y:1445

	CPLimit					= 480
	AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End





Region Tower_Hills
	DisplayName				= LW:DisplayNameTowerHills
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP WOR Tower Hills"


	SkirmishStillImage		= WOR_Tower_Hills_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Tower_Hills
	RegionPortrait			= LWPTowerHills

	ResourceBonus			= 5






	ConnectsTo				=
		Connection
			Region = Arnor


		End
		Connection
			Region = Grey_Havens


		End
		Connection
			Region = Harlindon


		End
		Connection
			Region = The_Shire


		End
		Connection
			Region = Barrow_Downs


		End
		Connection
			Region = Cardolan


		End
		Connection
			Region = Minhiriath


		End

	CustomCenterPoint			= Yes
	CenterPoint				= X:-1135 Y:1345

	HeroArmySpot				= X:-1210 Y:1580
	HeroArmySpot				= X:-1135 Y:1605
	HeroArmySpot				= X:-1060 Y:1580
    HeroArmySpot				= X:-1055 Y:1190
	GarrisonArmySpot			= X:-1210 Y:1190
	BuildingSpot				= X:-1140 Y:1430

	CPLimit					= 360
	AllyCPLimit				= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End




Region Umbar
	DisplayName				= LW:DisplayNameUmbar
	ConqueredNotice			= APT:LivingWorldRegionTakenNotice
	MapName					= "MAP MP Umbar"


	SkirmishStillImage		= WOR_Umbar_Loadscreen

	SkirmishMusicTrack		= Shell2MusicForLoadScreen
	SubObject				= Umbar
	RegionPortrait			= LWPUmbar




	AttackBonus			= 5




	ConnectsTo				=
		Connection
			Region = Belfalas


		End
		Connection
			Region = Ithilien


		End
		Connection
			Region = Harad


		End

	CustomCenterPoint		= Yes
	CenterPoint				= X:1130 Y:-860

	HeroArmySpot		= X:930 Y:-740
	HeroArmySpot		= X:1085 Y:-665
	HeroArmySpot		= X:1245 Y:-725
    HeroArmySpot				= X:1340 Y:-860
	GarrisonArmySpot	= X:1095 Y:-795
	BuildingSpot		= X:985 Y:-870
	BuildingSpot		= X:1255 Y:-870

	CPLimit				= 480
	AllyCPLimit			= 360

	RestrictBuildings
		Buildings = Fortress
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Armory
		NumberAllowed = 1
	End

	RestrictBuildings
		Buildings = Barracks
		NumberAllowed = 2
	End
End










ConcurrentRegionBonus
	Territory				= LW:TerritoryArnor
	EffectName				= Arnor
	Regions					= Arnor Buckland Ettenmoors The_Shire Tower_Hills Amon_Sul Fornost Lostriand Rhudaur Barrow_Downs Fornost Cardolan






	BuildingDiscountBonus = 200
	UnifiedEvaEvent				= WorldUnifyArnor
	LostEvaEvent				= WorldLostArnor
	LookAtCenter			= X:-1121 Y:2072
	LookAtHeading			= 0
	LookAtZoom				= 0.55
End





ConcurrentRegionBonus
	Territory				= LW:TerritoryEriador
	EffectName				= Eriador
	Regions					= Dunland Enedwaith Forlindon Grey_Havens Harlindon Minhiriath Rivendell






	ExtraStartResourcesBonus = 1000
	UnifiedEvaEvent			= WorldUnifyEriador
	LostEvaEvent			= WorldLostEriador
	LookAtCenter			= X:-1670 Y:-332
	LookAtHeading			= 0
	LookAtZoom				= 0.83
End





ConcurrentRegionBonus
	Territory				= LW:TerritoryGondor
	EffectName				= Gondor
	Regions					= Cair_Andros Gap_Of_Rohan Helms_Deep Minas_Tirith Osgiliath Rohan Belfalas Anfalas






	DiscountedHeroUnitsBonus = 1
	UnifiedEvaEvent			= WorldUnifyGondor
	LostEvaEvent			= WorldLostGondor
	LookAtCenter			= X:455 Y:-630
	LookAtHeading			= 0
	LookAtZoom				= 0.37
End





ConcurrentRegionBonus
	Territory				= LW:TerritoryMordor
	EffectName				= Mordor
	Regions					= Harad Ithilien Minas_Morgul Mordor Mount_Doom The_Black_Gate Umbar






	DiscountedBarracksUnitsBonus = 100
	UnifiedEvaEvent			= WorldUnifyMordor
	LostEvaEvent			= WorldLostMordor
	LookAtCenter			= X:1850 Y:-630
	LookAtHeading			= -0.62
	LookAtZoom				= 0.15
End





ConcurrentRegionBonus
	Territory				= LW:TerritoryRhovanion
	EffectName				= Rhovanion
	Regions					= Dol_Guldur Fangorn High_Pass Isengard Lothlorien Mirkwood Redhorn_Pass Carrock






	DiscountedSeigeUnitsBonus = 1
	UnifiedEvaEvent			= WorldUnifyRhovanion
	LostEvaEvent			= WorldLostRhovanion
	LookAtCenter			= X:1048 Y:1685
	LookAtHeading			= 0
	LookAtZoom				= 0.65
End





ConcurrentRegionBonus
	Territory				= LW:TerritoryRhun
	EffectName				= Rhun
	Regions					= Celduin Erebor Dagorlad Iron_Hills Rhun The_Dead_Marshes The_Brown_Lands






	FreeBuilderBonus		= 1
	UnifiedEvaEvent			= WorldUnifyRhun
	LostEvaEvent			= WorldLostRhun
	LookAtCenter			= X:2122 Y:1442
	LookAtHeading			= -0.47
	LookAtZoom				= 0.71
End




ConcurrentRegionBonus
	Territory				= LW:TerritoryNorthernWaste
	EffectName				= Forodwaith
	Regions					= Angmar MountGundabad CarnDum Forodwaith






	FreeInnUnitsBonus		= 1
	UnifiedEvaEvent			= WorldUnifyNorthernWastes
	LostEvaEvent			= WorldLostNorthernWastes
	LookAtCenter			= X:-65 Y:2085
	LookAtHeading			= 0
	LookAtZoom				= 0.71
End


