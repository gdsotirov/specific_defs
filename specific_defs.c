/***************************************************************************
 * Definitions automatically provided by preprocessors of some compilers   *
 * ----------------------------------------------------------------------- *
 * File         : specific-defs.c                                          *
 * Author       : George Dimitrov Sotirov, <astronom@dir.bg>               *
 * Date created : 2001-12-20 16:22 GMT                                     *
 * Date modified: 2003-05-28 20:33 EEST                                    *
 ***************************************************************************/

#include <stdio.h>

int main() {
    printf("Standard definitions:\n");
    printf("-----------------------------------------\n");

    /* Gives the line number where the __LINE__ is placed
     * Type: decimal constant */
    printf("__LINE__            = %d\n", __LINE__);

    /* Gives the file name where the __FILE__ is placed
       Type: string literal */
    printf("__FILE__            = %s\n", __FILE__);

    /* Gives the system date when compilation has started
       Type: string literal */
    printf("__DATE__            = %s\n", __DATE__);

    /* Gives the system time when compilation has started
       Type: string literal */
    printf("__TIME__            = %s\n", __TIME__);

#ifdef __STDC__
    /* ANSI C compliant compiler: 1 - true, 0 - false
       NOTE: May be undefined in case of false */
    printf("__STDC__            = %d\n", __STDC__);
#endif

#ifdef __cplusplus
    /* Defined in almost every C++ compiler */
    printf("__cplusplus         = %d\n", __cplusplus);
#endif

#ifdef _cplusplus
    /* Defined is some C++ compilers */
    printf("_cplusplus          = %d\n", _cplusplus);
#endif

#ifdef c_plusplus
    /* Defined is some C++ compilers */
    printf("c_plusplus          = %d\n", c_plusplus);
#endif

/***************************************************************************
 * C O M P I L E R S
 ***************************************************************************/

    printf("\nCompiler specific definitions:\n");
    printf("-----------------------------------------\n");

/****** Borland compilers ******/
#ifdef __BORLANDC__
    /* Gives the version number of Borland compiler
       Type: decimal constant */
    printf("__BORLANDC__        = %d\n", __BORLANDC__);
#endif

#ifdef __BCPLUSPLUS__
    /* Defined if C++ compilation is selected
       Type: decimal constat */
    printf("__BCPLUSPLUS__      = %d\n", __BCPLUSPLUS__);
#endif

#ifdef __CDECL__
    /* Defined if calling convention is C, else undefined */
    printf("__CDECL__           = %d\n", __CDECL__);
#endif

#ifdef __TURBOC__
    /* Defined in Turbo C and Borland C */
    printf("__TURBOC__          = %d\n", __TURBOC__);
#endif

/****** Watcom Compilers ******/

#ifdef __WATCOMC__
    /* Defined in Watcom compiler (MS-DOS) */
    printf("__WATCOMC__         = %d\n", __WATCOMC__);
#endif

/****** Microsoft compilers ******/
#ifdef __WIN32__
    printf("__WIN32__           = %d\n", __WIN32__);
#endif

#ifdef _WIN32
    printf("_WIN32              = %d\n", _WIN32);
#endif

#ifdef _MSC_VER
    /* MSC++ 4.2 and above */
    printf("_MSC_VER            = %d\n", _MSC_VER);
#endif

#ifdef _WIN32_WCE
    printf("_WIN32_WCE          = %d\n", _WIN32_WCE);
#endif

#ifdef _QC
    /* Microsoft QuickC */
    printf("_QC                 = %d\n", _QC);
#endif

/****** GNU compilers ******/
#ifdef __GNUG__
    /* GNU G++ */
    printf("__GNUG__            = %d\n", __GNUG__);
#endif

#ifdef __GNUC__
    /* GNU GCC
     * Description: If defined gives the major GCC version number.
     * Type       : Decimal constant. */
    printf("__GNUC__            = %d\n", __GNUC__);
#endif

#ifdef __GNUC_MINOR__
    /* GNU GCC
     * Description: If defined gives the minor GCC version number.
     * Type       : Decimal constant. */
    printf("__GNUC_MINOR__      = %d\n", __GNUC_MINOR__);
#endif

#ifdef __GNUC_PATCHLEVEL__
    /* GNU GCC
     * Description: If defined gives the GCC version patch number.
     * Type       : Decimal constant. */
    printf("__GNUC_PATCHLEVEL__ = %d\n", __GNUC_PATCHLEVEL__);
#endif

#ifdef __CYGWIN32__
    /* Defined by GCC when the enviroment is CygWin */
    printf("__CYGWIN32__        = %d\n", __CYGWIN32__);
#endif

#ifdef __EMX__
    /* This is defined by the GNU C port (gcc/emx 0.8e) to OS/2 2.0 */
    printf("__EMX__             = %d\n", __EMX__);
#endif

#ifdef __alpha
    /* Defined by DEC C++ v1.3B (Alpha) */
    printf("__alpha             = %d\n", __alpha);
#endif

#ifdef __SUNPRO_CC
    /* SC 4.0, SC++ 4.1 */
    printf("__SUNPRO_CC         = %d\n", __SUNPRO_CC);
#endif

#ifdef AZTEC_C
    /* Defined by Aztec_C 5.2a compiler */
    printf("AZTEC_C             = %d\n", AZTEC_C);
#endif

#ifdef _DCC
    /* Defined by Dice C (AMIGA) */
    printf("_DCC                = %d\n", _DCC);
#endif

#ifdef __HIGHC__
    /* Defined by MetaWare HIGH C */
    printf("__HIGHC__           = %d\n", __HIGHC__);
#endif

#ifdef __IBMC__
    /* Defined by C-Set++ (OS/2 2.1) */
    printf("__IBMC__            = %d\n", __IBMC__);
#endif

#ifdef MWC
    /* Defined by Mark Williams C (COHERENT) */
    printf("MWC                 = %d\n", MWC);
#endif

#ifdef __MWERKS__
    /* Defined by Metrowerks compilers (Mac, Win32) */
    printf("__MWERKS__          = %d\n", __MWERKS__);
#endif

#ifdef __ZTC__
    /* Defined by Zortech C compiler */
    printf("__ZTC__             = %d\n", __ZTC__);
#endif

/* Defined in VAX C compiler */
#ifdef vaxc
    printf("vaxc                = %d\n", vaxc);
#endif

#ifdef VAXC
    printf("VAXC                = %d\n", VAXC);
#endif

#ifdef vax11c
    printf("vax11c              = %d\n", vax11c);
#endif

#ifdef VAX11
    printf("VAX11               = %d\n", VAX11);
#endif

/***************************************************************************
 * O P E R A T I N G  S Y S T E M S  A N D  P L A T F O R M S
 ***************************************************************************/

printf("\nOS specific definitions:\n");
printf("-----------------------------------------\n");

/* OS: AIX */
#ifdef _AIX
    printf("_AIX                = %d\n", _AIX);
#endif

/* OS: AMIGA */
#ifdef AMIGA
    /* Compiler: Dice C or SAS/C 5.10 */
    printf("AMIGA               = %d\n", AMIGA);
#endif

#ifdef __amigados__
    /* Compiler: GNU CC */
    printf("__amigados__        = %d\n", __amigados__);
#endif

#ifdef MCH_AMIGA
    /* Compiler: AztecC 5.2a */
    printf("MCH_AMIGA           = %d\n", MCH_AMIGA);
#endif


/* OS: ATARI-ST */
#ifdef atarist
    /* Compiler: GNU CC */
    printf("atarist             = %d\n", atarist);
#endif

/* OS: HPUX */
#ifdef hpux
    printf("hpux                = %d\n", hpux);
#endif

/* OS: Linux */
#ifdef linux
    printf("linux               = %d\n", linux);
#endif

/* OS: UNIX */
#ifdef unix
    printf("unix                = %d\n", unix);
#endif

#ifdef __unix__
    /* GNU CC and DJGPP */
    printf("__unix__            = %d\n", __unix__);
#endif

/* OS: Macintosh */
#ifdef macintosh
    /* Compiler: Metrowerks */
    printf("macintosh           = %d\n", macintosh);
#endif

/* OS: DOS/Windows */
#ifdef MSDOS
    /* Compiler: MSC 5.10 and 6.0 */
    printf("MSDOS               = %d\n", MSDOS);
#endif

#ifdef __MSDOS__
    /* Compiler: Turbo C, Borland C, DJGPP */
    printf("__MSDOS__           = %d\n", __MSDOS__);
#endif

#ifdef _Windows
    /* Borland C 3.1 for Windows */
    printf("_Windows            = %d\n", _Windows);
#endif

/* OS: SystemV R2 */
#ifdef SVR2
    printf("SVR2                = %d\n", SVR2);
#endif

/* OS: SunOS */
#ifdef __svr4__
    printf("__svr4__            = %d\n", __svr4__);
#endif

/* OS: ULTRIX (on VAX) */
#ifdef ultrix
    printf("ultrix              = %d\n", ultrix);
#endif

/* OS: Cray OS */
#ifdef _UNICOS
    printf("_UNICOS             = %d\n", _UNICOS);
#endif

/* OS: VMS (on VAX) */
#ifdef vms
    /* Compiler: VAX C */
    printf("vms                 = %d\n", vms);
#endif

/***************************************************************************
 * P R O C E S S O R S
 ***************************************************************************/

/* DEC Alpha */
#ifdef __alpha
    printf("__alpha             = %d\n", __alpha);
#endif

#ifdef __alpha__
    printf("__alpha__           = %d\n", __alpha__);
#endif

/* HP RISC Processor */
#ifdef hp9000s800
    printf("hp9000s800          = %d\n", hp9000s800);
#endif

/* i386 (DJGPP) */
#ifdef i386
    printf("i386                = %d\n", i386);
#endif

#ifdef __i386__
    printf("__i386__            = %d\n", __i386__);
#endif

/* Encore Computer */
#ifdef MULTIMAX
    printf("MULTIMAX            = %d\n", MULTIMAX);
#endif

/* Pyramid 9810 Processor */
#ifdef pyr
    printf("pyr                 = %d\n", pyr);
#endif

/* SGI Inc. Processor */
#ifdef __sgi__
    printf("__sgi__             = %d\n", __sgi__);
#endif

/* SPARC Processor */
#ifdef sparc
    printf("sparc               = %d\n", sparc);
#endif

/* Sequent computer */
#ifdef sequent
    printf("sequent             = %d\n", sequent);
#endif

/* CCI Tahoe Processor */
#ifdef tahoe
    printf("tahoe               = %d\n", tahoe);
#endif

/* VAX Processor */
#ifdef vax
    printf("vax                 = %d\n", vax);
#endif

    return 0;
}

