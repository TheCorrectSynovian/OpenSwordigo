/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004612D4
 * Mangled: _ZN5Caver17PointLightManager18GetOptimizedLightsERKNS_9RectangleEPNS_10PointLightEi
 * Demangled: Caver::PointLightManager::GetOptimizedLights(Caver::Rectangle const&,Caver::PointLight *,int)
 *
 * Callers: 0
 *
 * Callees: 13
 *   0x00000000001F4DA0  Caver::PointLightGroup::CombinedLight(void)
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F8570  operator new[](ulong)
 *   0x00000000001FB1E0  Caver::Rectangle::RectangleByInsetting(float)
 *   0x00000000002002B0  boost::detail::shared_count::shared_count<Caver::PointLightGroup>(Caver::PointLightGroup *)
 *   0x0000000000200650  Caver::FastVector<Caver::PointLight>::Resize(int)
 *   0x0000000000202950  boost::detail::sp_enable_shared_from_this(...)
 *   0x0000000000203600  Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize(int)
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000461CF8  Caver::PointLightGroup::CombinedLight(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 227
 *   insn=0x00000000004612FC string=0x0000000000461300 "Y"
 *   insn=0x0000000000461300 string=0x0000000000461304 "("
 *   insn=0x0000000000461324 string=0x0000000000461328 ""
 *   insn=0x0000000000461328 string=0x000000000046132C "("
 *   insn=0x0000000000461330 string=0x0000000000461334 "-"
 *   insn=0x0000000000461344 string=0x0000000000461348 ""
 *   insn=0x0000000000461360 string=0x0000000000461364 "W"
 *   insn=0x000000000046136C string=0x0000000000461370 "s"
 *   insn=0x000000000046137C string=0x0000000000461380 ""
 *   insn=0x0000000000461380 string=0x0000000000461384 "Hy"
 *   insn=0x0000000000461380 string=0x00000000004613A0 "\n"
 *   insn=0x00000000004613A0 string=0x00000000004613A4 "K"
 *   insn=0x00000000004613AC string=0x00000000004613B0 ""
 *   insn=0x00000000004613B4 string=0x00000000004613B8 "K\t@"
 *   insn=0x00000000004613BC string=0x00000000004613C0 "@"
 *   insn=0x00000000004613C4 string=0x00000000004613C8 "@"
 *   insn=0x00000000004613CC string=0x00000000004613D0 "@"
 *   insn=0x00000000004613E0 string=0x00000000004613E4 "K"
 *   insn=0x00000000004613EC string=0x00000000004613F0 "lN"
 *   insn=0x00000000004613F0 string=0x00000000001F4DA0 "P'"
 *   insn=0x00000000004613F4 string=0x00000000004613F8 "H"
 *   insn=0x00000000004613FC string=0x0000000000461400 "H"
 *   insn=0x0000000000461404 string=0x0000000000461408 "@"
 *   insn=0x000000000046140C string=0x0000000000461410 "@"
 *   insn=0x0000000000461414 string=0x0000000000461418 "@"
 *   insn=0x000000000046141C string=0x0000000000461420 "@"
 *   insn=0x0000000000461424 string=0x00000000001F4F60 "P'"
 *   insn=0x000000000046142C string=0x0000000000461490 "("
 *   insn=0x0000000000461448 string=0x000000000046144C "L"
 *   insn=0x000000000046144C string=0x0000000000461450 ")"
 *   insn=0x0000000000461450 string=0x0000000000461454 "J"
 *   insn=0x0000000000461454 string=0x0000000000461458 "K"
 *   insn=0x0000000000461458 string=0x000000000046145C ""
 *   insn=0x0000000000461460 string=0x0000000000461464 "K\t@"
 *   insn=0x0000000000461468 string=0x000000000046146C "@"
 *   insn=0x0000000000461470 string=0x0000000000461474 "@"
 *   insn=0x0000000000461478 string=0x000000000046147C "@"
 *   insn=0x0000000000461484 string=0x0000000000461488 "?"
 *   insn=0x0000000000461498 string=0x000000000046149C "!="
 *   insn=0x00000000004614DC string=0x00000000004614E0 ""
 *   insn=0x00000000004614F8 string=0x00000000004614FC ""
 *   insn=0x00000000004614FC string=0x0000000000461500 "\t"
 *   insn=0x0000000000461500 string=0x0000000000461504 "(!"
 *   insn=0x000000000046150C string=0x0000000000461510 "A"
 *   insn=0x000000000046151C string=0x00000000004617FC "(\t"
 *   insn=0x0000000000461524 string=0x0000000000461528 "L}"
 *   insn=0x0000000000461528 string=0x000000000046152C "O"
 *   insn=0x0000000000461538 string=0x000000000046153C ""
 *   insn=0x0000000000461544 string=0x0000000000461548 "."
 *   insn=0x000000000046155C string=0x0000000000461560 "0\t"
 *   insn=0x0000000000461560 string=0x0000000000461564 "\n\t"
 *   insn=0x0000000000461560 string=0x0000000000461684 "*"
 *   insn=0x0000000000461574 string=0x0000000000461578 "k"
 *   insn=0x0000000000461578 string=0x000000000046157C "J"
 *   insn=0x000000000046157C string=0x0000000000461580 "\n"
 *   insn=0x0000000000461580 string=0x0000000000461584 "L!"
 *   insn=0x0000000000461588 string=0x000000000046158C ""
 *   insn=0x000000000046158C string=0x0000000000461590 ","
 *   insn=0x000000000046159C string=0x00000000004615A0 ""
 *   insn=0x00000000004615A8 string=0x00000000004615AC "*"
 *   insn=0x00000000004615AC string=0x00000000004615B0 "."
 *   insn=0x00000000004615D4 string=0x00000000004615D8 "J"
 *   insn=0x00000000004615D8 string=0x00000000004615DC "J"
 *   insn=0x00000000004615DC string=0x00000000004615E0 "\t"
 *   insn=0x00000000004615E0 string=0x00000000004615E4 "*"
 *   insn=0x00000000004615E4 string=0x00000000004615E8 ""
 *   insn=0x00000000004615EC string=0x00000000004615F0 "@"
 *   insn=0x00000000004615F0 string=0x00000000004615F4 "B"
 *   insn=0x00000000004615F8 string=0x00000000004615FC "`"
 *   insn=0x00000000004615FC string=0x0000000000461600 "b"
 *   insn=0x0000000000461600 string=0x0000000000461604 "a"
 *   insn=0x0000000000461604 string=0x0000000000461608 "?"
 *   insn=0x000000000046160C string=0x0000000000461610 "#"
 *   insn=0x000000000046161C string=0x0000000000461620 "k"
 *   insn=0x0000000000461628 string=0x000000000046162C "I"
 *   insn=0x0000000000461638 string=0x000000000046163C "{"
 *   insn=0x0000000000461640 string=0x0000000000461644 "a"
 *   insn=0x0000000000461658 string=0x00000000001F8570 "0'"
 *   insn=0x000000000046166C string=0x0000000000461670 "k"
 *   insn=0x0000000000461674 string=0x0000000000461678 "h"
 *   insn=0x0000000000461680 string=0x0000000000461520 "\n"
 *   insn=0x0000000000461684 string=0x0000000000461688 "+jj"
 *   insn=0x0000000000461688 string=0x000000000046168C ")"
 *   insn=0x000000000046168C string=0x0000000000461690 "?"
 *   insn=0x0000000000461694 string=0x0000000000461698 "k"
 *   insn=0x000000000046169C string=0x00000000004616A0 "0N"
 *   insn=0x00000000004616B0 string=0x00000000004616B4 "a\t!"
 *   insn=0x00000000004616B8 string=0x00000000004616BC "!"
 *   insn=0x00000000004616C0 string=0x00000000004616C4 "@"
 *   insn=0x00000000004616C4 string=0x00000000004616C8 "`"
 *   insn=0x00000000004616D0 string=0x00000000001F55E0 "P'"
 *   insn=0x00000000004616D4 string=0x00000000004616D8 "_"
 *   insn=0x0000000000461700 string=0x0000000000461704 ""
 *   insn=0x0000000000461704 string=0x0000000000461708 "(y"
 *   insn=0x000000000046170C string=0x0000000000461710 "I"
 *   insn=0x0000000000461728 string=0x000000000046172C "}@"
 *   insn=0x000000000046172C string=0x0000000000461730 "("
 *   insn=0x0000000000461734 string=0x0000000000461738 "M"
 *   insn=0x000000000046173C string=0x0000000000461740 "M"
 *   insn=0x0000000000461744 string=0x0000000000461748 "("
 *   insn=0x000000000046174C string=0x0000000000461750 "\n"
 *   insn=0x0000000000461750 string=0x0000000000461754 ":"
 *   insn=0x0000000000461754 string=0x0000000000461758 "H@"
 *   insn=0x0000000000461758 string=0x000000000046175C ""
 *   insn=0x000000000046175C string=0x0000000000461760 "H"
 *   insn=0x0000000000461764 string=0x0000000000461768 "H"
 *   insn=0x0000000000461768 string=0x000000000046176C "\t@"
 *   insn=0x0000000000461774 string=0x0000000000461778 "H@"
 *   insn=0x0000000000461778 string=0x000000000046177C ""
 *   insn=0x000000000046177C string=0x0000000000461780 "H"
 *   insn=0x0000000000461784 string=0x0000000000461788 "H"
 *   insn=0x0000000000461788 string=0x000000000046178C "@"
 *   insn=0x0000000000461798 string=0x000000000046179C ""
 *   insn=0x00000000004617A4 string=0x00000000004617A8 ":"
 *   insn=0x00000000004617A8 string=0x00000000004617AC "H@"
 *   insn=0x00000000004617AC string=0x00000000004617B0 ""
 *   insn=0x00000000004617B0 string=0x00000000004617B4 "H"
 *   insn=0x00000000004617B8 string=0x00000000004617BC "H"
 *   insn=0x00000000004617BC string=0x00000000004617C0 "\t@"
 *   insn=0x00000000004617C8 string=0x00000000004617CC "H@"
 *   insn=0x00000000004617CC string=0x00000000004617D0 ""
 *   insn=0x00000000004617D0 string=0x00000000004617D4 "H"
 *   insn=0x00000000004617D8 string=0x00000000004617DC "H"
 *   insn=0x00000000004617DC string=0x00000000004617E0 "@"
 *   insn=0x00000000004617EC string=0x00000000004617F0 "{"
 *   insn=0x0000000000461810 string=0x0000000000461814 "sf"
 *   insn=0x0000000000461814 string=0x00000000001FB1E0 "0'"
 *   insn=0x000000000046182C string=0x0000000000461830 "\t"
 *   insn=0x0000000000461830 string=0x0000000000461834 "\t}@"
 *   insn=0x0000000000461834 string=0x0000000000461838 "h""
 *   insn=0x000000000046183C string=0x0000000000461840 "(\t"
 *   insn=0x0000000000461840 string=0x0000000000461844 ""
 *   insn=0x0000000000461848 string=0x000000000046184C ")"
 *   insn=0x000000000046184C string=0x0000000000461850 "h"
 *   insn=0x0000000000461854 string=0x0000000000461858 "("
 *   insn=0x000000000046186C string=0x0000000000461870 "\t9@"
 *   insn=0x0000000000461874 string=0x0000000000461878 "aA)"
 *   insn=0x000000000046187C string=0x0000000000461880 "-C)"
 *   insn=0x0000000000461890 string=0x0000000000461894 ""
 *   insn=0x0000000000461894 string=0x0000000000461898 "+"
 *   insn=0x0000000000461898 string=0x000000000046189C "  +"
 *   insn=0x00000000004618A0 string=0x00000000004618A4 "m"
 *   insn=0x00000000004618A4 string=0x00000000004618A8 "!8+"
 *   insn=0x00000000004618A8 string=0x00000000004618AC ""
 *   insn=0x00000000004618AC string=0x00000000004618C8 "!"
 *   insn=0x00000000004618B0 string=0x00000000004618B4 ""(""
 *   insn=0x00000000004618B4 string=0x00000000004618B8 "@ +"
 *   insn=0x00000000004618B8 string=0x00000000004618BC "!"
 *   insn=0x00000000004618C0 string=0x00000000004618C4 "a9""
 *   insn=0x00000000004618C8 string=0x00000000004618CC "!()"
 *   insn=0x00000000004618D0 string=0x00000000004618D4 "B"
 *   insn=0x00000000004618D4 string=0x00000000004618D8 "` ""
 *   insn=0x00000000004618D8 string=0x00000000004618DC "m"
 *   insn=0x00000000004618DC string=0x00000000004618E0 "b8""
 *   insn=0x00000000004618E4 string=0x00000000004618FC "B"
 *   insn=0x00000000004618E8 string=0x00000000004618EC "c($"
 *   insn=0x00000000004618EC string=0x00000000004618F0 "` ""
 *   insn=0x00000000004618F4 string=0x00000000004618F8 "B8#"
 *   insn=0x00000000004618F4 string=0x0000000000461908 "b"
 *   insn=0x00000000004618FC string=0x0000000000461900 "B()"
 *   insn=0x0000000000461900 string=0x0000000000461904 "!""
 *   insn=0x0000000000461908 string=0x000000000046190C "\n!"
 *   insn=0x0000000000461914 string=0x0000000000461918 "@ +"
 *   insn=0x0000000000461954 string=0x0000000000461958 "m\n"
 *   insn=0x0000000000461980 string=0x0000000000461984 "(y"
 *   insn=0x0000000000461988 string=0x000000000046198C "I"
 *   insn=0x0000000000461994 string=0x0000000000461998 ".{"
 *   insn=0x00000000004619B4 string=0x00000000004619B8 "`9-"
 *   insn=0x00000000004619C0 string=0x00000000004619C4 " 9,"
 *   insn=0x00000000004619C4 string=0x00000000004619C8 "@\t "
 *   insn=0x00000000004619C8 string=0x00000000004619CC "%*"
 *   insn=0x00000000004619D0 string=0x00000000004619D4 "a"
 *   insn=0x00000000004619D8 string=0x00000000004619DC "-"
 *   insn=0x00000000004619EC string=0x00000000004619F0 "\t9"
 *   insn=0x00000000004619F4 string=0x00000000004619F8 "\t"
 *   insn=0x00000000004619FC string=0x0000000000461A00 ""
 *   insn=0x0000000000461A18 string=0x0000000000461A1C ""
 *   insn=0x0000000000461A2C string=0x0000000000461A30 "(y"
 *   insn=0x0000000000461A34 string=0x0000000000461A38 "I"
 *   insn=0x0000000000461A60 string=0x0000000000461A64 "@\t,"
 *   insn=0x0000000000461A64 string=0x0000000000461A68 "%*"
 *   insn=0x0000000000461A6C string=0x0000000000461A70 "a"
 *   insn=0x0000000000461A74 string=0x0000000000461A78 "-"
 *   insn=0x0000000000461A88 string=0x0000000000461A8C "\t9"
 *   insn=0x0000000000461A90 string=0x0000000000461A94 "\t"
 *   insn=0x0000000000461A98 string=0x0000000000461A9C ""
 *   insn=0x0000000000461AA4 string=0x0000000000461AA8 "s"
 *   insn=0x0000000000461AB8 string=0x0000000000461ABC "0"
 *   insn=0x0000000000461ACC string=0x0000000000461AD0 "K"
 *   insn=0x0000000000461AD0 string=0x0000000000461AD4 "(y"
 *   insn=0x0000000000461AD8 string=0x0000000000461ADC "I"
 *   insn=0x0000000000461AE8 string=0x0000000000461AEC ""
 *   insn=0x0000000000461B04 string=0x0000000000461B08 "(y"
 *   insn=0x0000000000461B0C string=0x0000000000461B10 "I"
 *   insn=0x0000000000461B3C string=0x0000000000461B40 "%*"
 *   insn=0x0000000000461B44 string=0x0000000000461B48 "a"
 *   insn=0x0000000000461B4C string=0x0000000000461B50 "-"
 *   insn=0x0000000000461B58 string=0x0000000000461B5C "\n-"
 *   insn=0x0000000000461B60 string=0x0000000000461B64 "\t9"
 *   insn=0x0000000000461B68 string=0x0000000000461B6C "\t"
 *   insn=0x0000000000461B70 string=0x0000000000461B74 ""
 *   insn=0x0000000000461B94 string=0x0000000000461B98 "?"
 *   insn=0x0000000000461B98 string=0x0000000000461B9C "K"
 *   insn=0x0000000000461BB0 string=0x0000000000461BB4 "6}@"
 *   insn=0x0000000000461BC4 string=0x0000000000461BC8 ""
 *   insn=0x0000000000461BCC string=0x0000000000461BD0 ""
 *   insn=0x0000000000461BD4 string=0x0000000000461BD8 "rL"
 *   insn=0x0000000000461BE0 string=0x0000000000461BE4 "\tk9"
 *   insn=0x0000000000461BE8 string=0x0000000000461BEC "("
 *   insn=0x0000000000461BF0 string=0x0000000000461BF4 "(\t"
 *   insn=0x0000000000461BF8 string=0x0000000000461BFC " "
 *   insn=0x0000000000461C00 string=0x0000000000461C04 " "
 *   insn=0x0000000000461C08 string=0x0000000000461C0C " "
 *   insn=0x0000000000461C14 string=0x0000000000461C18 "sB"
 *   insn=0x0000000000461C18 string=0x0000000000461C1C "+"
 *   insn=0x0000000000461C28 string=0x0000000000461C2C "h"
 *   insn=0x0000000000461C40 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000461C64 string=0x0000000000461C68 ""
 *   insn=0x0000000000461C68 string=0x0000000000461C6C "!"
 *   insn=0x0000000000461C78 string=0x0000000000461C7C "4"
 *   insn=0x0000000000461C80 string=0x0000000000461C84 ""
 *   insn=0x0000000000461C90 string=0x0000000000461C94 "\t@"
 *   insn=0x0000000000461CA0 string=0x0000000000461CA4 ""
 *   insn=0x0000000000461CB0 string=0x0000000000461CB4 "@"
 *   insn=0x0000000000461CBC string=0x0000000000461CC0 ""
 *   insn=0x0000000000461CD0 string=0x0000000000461CD4 ""
 *   insn=0x0000000000461CE0 string=0x0000000000461CE4 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PointLightManager::GetOptimizedLights(int *a1, Caver::Rectangle *this, __int64 a3, int a4)
{
  int *v6; // x23
  __int64 v7; // x24
  int v9; // w8
  __int64 v10; // x19
  char *v11; // x9
  int v12; // w10
  int v13; // w8
  __int64 i; // x21
  __int64 v15; // x24
  char *v16; // x12
  __int64 v17; // x8
  __int64 v18; // x9
  __int64 v19; // x12
  __int64 v20; // x10
  int v22; // w24
  float *v23; // x19
  float *v24; // x28
  int v25; // w21
  int v26; // w27
  float v27; // s9
  __int64 v28; // x15
  bool v29; // w10
  bool v30; // w16
  bool v31; // w13
  bool v32; // w12
  bool v33; // w11
  signed __int64 v34; // x9
  __int128 *v35; // x10
  _OWORD *v36; // x11
  signed __int64 v37; // x12
  __int128 v38; // q0
  __int128 v39; // q1
  __int128 v40; // q2
  __int128 v41; // q3
  float32x2_t v42; // d10
  float v43; // s11
  float v44; // s12
  int v45; // w19
  unsigned __int64 v46; // x0
  __int64 v47; // x10
  __int64 v48; // x11
  float32x2_t v49; // d1
  _QWORD *v50; // x0
  int v51; // w8
  __int64 v52; // x9
  __int64 v53; // x10
  __int64 v54; // x12
  __int64 v55; // x11
  __int64 *v56; // x8
  __int64 v57; // x8
  _QWORD *v58; // x26
  __int64 v59; // x8
  __int64 v60; // x8
  _QWORD *v61; // x26
  __int64 v62; // x8
  __int64 v63; // x8
  __int64 v64; // x21
  __int64 v65; // x9
  __int64 v66; // x8
  float v67; // w25
  float v68; // w26
  int v69; // w24
  int v70; // w27
  int v71; // w15
  int v72; // w16
  int v73; // w11
  int v74; // w13
  int v75; // w14
  int v76; // w17
  int v77; // w12
  float v78; // s0
  float v79; // s1
  float v80; // s1
  float v81; // s2
  float v82; // s10
  float *v83; // x23
  __int64 v84; // x28
  __int64 j; // x19
  float v86; // s12
  float v87; // s13
  int *v88; // x22
  int v89; // w8
  float v90; // s12
  __int64 v91; // x8
  int *v92; // x22
  int v93; // w8
  __int64 v94; // x8
  int *v95; // x22
  int v96; // w8
  __int64 v97; // x8
  __int64 v98; // x19
  __int64 v99; // x21
  Caver::PointLightGroup *v100; // x0
  __int64 v101; // x9
  float *v102; // [xsp+10h] [xbp-160h]
  __int64 v104; // [xsp+20h] [xbp-150h]
  float *v105; // [xsp+28h] [xbp-148h]
  float *v106; // [xsp+30h] [xbp-140h]
  int v107; // [xsp+38h] [xbp-138h]
  int v108; // [xsp+44h] [xbp-12Ch]
  int v109; // [xsp+48h] [xbp-128h]
  int v110; // [xsp+4Ch] [xbp-124h]
  int v111; // [xsp+50h] [xbp-120h]
  int v112; // [xsp+54h] [xbp-11Ch]
  unsigned __int64 v113; // [xsp+58h] [xbp-118h]
  int v114; // [xsp+58h] [xbp-118h]
  float *v115; // [xsp+60h] [xbp-110h]
  int v116; // [xsp+60h] [xbp-110h]
  float *v117; // [xsp+68h] [xbp-108h]
  float *v118; // [xsp+68h] [xbp-108h]
  __int64 v119; // [xsp+78h] [xbp-F8h]
  int v120; // [xsp+80h] [xbp-F0h]
  __int64 v121; // [xsp+88h] [xbp-E8h]
  int v122; // [xsp+90h] [xbp-E0h]
  _QWORD *v123; // [xsp+98h] [xbp-D8h] BYREF
  _BYTE v124[20]; // [xsp+A0h] [xbp-D0h]
  __int128 v125; // [xsp+B4h] [xbp-BCh]
  __int128 v126; // [xsp+C4h] [xbp-ACh]
  __int64 v127; // [xsp+D8h] [xbp-98h] BYREF
  char *v128; // [xsp+E0h] [xbp-90h]
  __int64 v129; // [xsp+E8h] [xbp-88h]

  v129 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  a1[4] = 0;
  v6 = a1 + 4;
  LODWORD(v7) = *a1;
  if ( *a1 >= a4 )
    v9 = a4;
  else
    v9 = *a1;
  if ( !v9 )
  {
    LODWORD(v7) = 0;
    return (unsigned int)v7;
  }
  if ( (int)v7 <= a4 )
  {
    if ( (int)v7 >= 1 )
    {
      v17 = 0;
      v18 = 0;
      do
      {
        v19 = a3 + v17;
        ++v18;
        v20 = *((_QWORD *)a1 + 1) + v17;
        v17 += 60;
        *(_QWORD *)v19 = *(_QWORD *)v20;
        *(_DWORD *)(v19 + 8) = *(_DWORD *)(v20 + 8);
        *(_OWORD *)(v19 + 44) = *(_OWORD *)(v20 + 44);
        *(_OWORD *)(v19 + 28) = *(_OWORD *)(v20 + 28);
        *(_OWORD *)(v19 + 12) = *(_OWORD *)(v20 + 12);
        v7 = *a1;
      }
      while ( v18 < v7 );
    }
  }
  else
  {
    if ( v9 == 1 )
    {
      v127 = 0;
      v128 = 0;
      if ( (int)v7 >= 1 )
      {
        v10 = 0;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        for ( i = 1; ; ++i )
        {
          v15 = *((_QWORD *)a1 + 1);
          if ( v13 >= v12 )
          {
            Caver::FastVector<Caver::PointLight>::Resize();
            v13 = v127;
            v11 = v128;
          }
          v16 = &v11[60 * v13++];
          *(_QWORD *)v16 = *(_QWORD *)(v15 + v10);
          *((_DWORD *)v16 + 2) = *(_DWORD *)(v15 + v10 + 8);
          *(_OWORD *)(v16 + 44) = *(_OWORD *)(v15 + v10 + 44);
          *(_OWORD *)(v16 + 28) = *(_OWORD *)(v15 + v10 + 28);
          *(_OWORD *)(v16 + 12) = *(_OWORD *)(v15 + v10 + 12);
          LODWORD(v127) = v13;
          if ( i >= *a1 )
            break;
          v12 = HIDWORD(v127);
          v10 += 60;
        }
      }
      Caver::PointLightGroup::CombinedLight((__int64 *)&v123, (Caver::PointLightGroup *)&v127);
      *(_QWORD *)a3 = v123;
      *(_DWORD *)(a3 + 8) = *(_DWORD *)v124;
      *(_OWORD *)(a3 + 44) = v126;
      *(_OWORD *)(a3 + 28) = v125;
      *(_OWORD *)(a3 + 12) = *(_OWORD *)&v124[4];
      if ( v128 )
        operator delete[](v128);
      LODWORD(v7) = 1;
      return (unsigned int)v7;
    }
    v107 = v9;
    if ( v9 < 1 )
    {
      v24 = 0;
      v23 = 0;
    }
    else
    {
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v26 = 0;
      v27 = (float)(v9 + 1);
      v113 = 0;
      v115 = 0;
      do
      {
        v42.n64_u64[0] = *(unsigned __int64 *)this;
        v43 = *((float *)this + 2);
        v44 = *((float *)this + 3);
        if ( v26 >= v25 )
        {
          v117 = v23;
          if ( 2 * v25 <= 10 )
            v45 = 10;
          else
            v45 = 2 * v25;
          if ( v26 > v45 )
            v26 = v45;
          if ( v25 == v45 )
          {
            v23 = v117;
          }
          else
          {
            v46 = operator new[](8LL * (unsigned int)v45);
            v25 = v45;
            v24 = (float *)v46;
            if ( v117 )
            {
              if ( v26 >= 1 )
              {
                v34 = 0;
                if ( (unsigned int)v26 < 8 )
                  goto LABEL_119;
                v28 = 8 * (v26 - 1LL);
                v29 = !is_mul_ok(v26 - 1LL, 8u);
                v30 = __CFADD__(v28, v46);
                v31 = __CFADD__(v28, v117);
                v32 = __CFADD__(v28, v46 + 4);
                v33 = __CFADD__(v28, v117 + 1);
                if ( v30 )
                  goto LABEL_119;
                if ( v29 )
                  goto LABEL_119;
                if ( v31 )
                  goto LABEL_119;
                if ( v29 )
                  goto LABEL_119;
                if ( v32 )
                  goto LABEL_119;
                if ( v29 )
                  goto LABEL_119;
                if ( v33 )
                  goto LABEL_119;
                if ( v29 )
                  goto LABEL_119;
                v34 = 0;
                if ( v46 < (unsigned __int64)&v117[2 * v26 - 1] && v113 < v46 + 8LL * v26 + 8 - 12 )
                  goto LABEL_119;
                if ( v46 + 4 < (unsigned __int64)&v117[2 * v26] && v46 + 8LL * v26 > (unsigned __int64)(v117 + 1) )
                  goto LABEL_119;
                v34 = v26 & 0xFFFFFFFFFFFFFFF8LL;
                v35 = (__int128 *)(v117 + 8);
                v36 = (_OWORD *)(v46 + 32);
                v37 = v34;
                do
                {
                  v38 = *(v35 - 2);
                  v39 = *(v35 - 1);
                  v40 = *v35;
                  v41 = v35[1];
                  v35 += 4;
                  v37 -= 8LL;
                  *(v36 - 2) = v38;
                  *(v36 - 1) = v39;
                  *v36 = v40;
                  v36[1] = v41;
                  v36 += 4;
                }
                while ( v37 );
                if ( v34 != v26 )
                {
LABEL_119:
                  do
                  {
                    v47 = 8 * v34;
                    v48 = *(_QWORD *)&v117[2 * v34++];
                    *(_QWORD *)(v46 + v47) = v48;
                  }
                  while ( v34 < v26 );
                }
              }
              operator delete[](v115);
            }
            v23 = v24;
            v113 = (unsigned __int64)v24;
            v115 = v24;
          }
        }
        v49.n64_f32[0] = (float)(v43 * (float)++v22) / v27;
        v49.n64_f32[1] = v44 * 0.5;
        *(float32x2_t *)&v23[2 * v26] = vadd_f32(v42, v49);
        v50 = (_QWORD *)operator new(0x10u);
        *v50 = 0;
        v50[1] = 0;
        v123 = v50;
        boost::detail::shared_count::shared_count<Caver::PointLightGroup>();
        boost::detail::sp_enable_shared_from_this();
        v51 = a1[4];
        if ( v51 >= a1[5] )
        {
          Caver::FastVector<boost::shared_ptr<Caver::PointLightGroup>>::Resize();
          v51 = *v6;
        }
        v52 = *((_QWORD *)a1 + 3);
        v54 = (__int64)v123;
        v53 = *(_QWORD *)v124;
        v55 = v51;
        v56 = (__int64 *)(v52 + 16LL * v51);
        if ( *(_QWORD *)v124 )
          ++*(_QWORD *)(*(_QWORD *)v124 + 8LL);
        *v56 = v54;
        v57 = v52 + 16 * v55;
        v58 = *(_QWORD **)(v57 + 8);
        *(_QWORD *)(v57 + 8) = v53;
        if ( v58 )
        {
          v59 = v58[1] - 1LL;
          v58[1] = v59;
          if ( !v59 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v58 + 16LL))(v58);
            v60 = v58[2] - 1LL;
            v58[2] = v60;
            if ( !v60 )
              (*(void (__fastcall **)(_QWORD *))(*v58 + 24LL))(v58);
          }
        }
        ++*v6;
        v61 = *(_QWORD **)v124;
        if ( *(_QWORD *)v124 )
        {
          v62 = *(_QWORD *)(*(_QWORD *)v124 + 8LL) - 1LL;
          *(_QWORD *)(*(_QWORD *)v124 + 8LL) = v62;
          if ( !v62 )
          {
            (*(void (__fastcall **)(_QWORD *))(*v61 + 16LL))(v61);
            v63 = v61[2] - 1LL;
            v61[2] = v63;
            if ( !v63 )
              (*(void (__fastcall **)(_QWORD *))(*v61 + 24LL))(v61);
          }
        }
        ++v26;
      }
      while ( v22 < v107 );
    }
    v118 = v23;
    Caver::Rectangle::RectangleByInsetting(&v127, this, 100.0);
    if ( *a1 >= 1 )
    {
      v64 = 0;
      v102 = v23 + 2;
      v65 = v107 - 1LL;
      v105 = &v23[2 * v65];
      v106 = v24;
      v104 = 16 * v65;
      do
      {
        v66 = *((_QWORD *)a1 + 1) + 60 * v64;
        v67 = *(float *)v66;
        v68 = *(float *)(v66 + 4);
        v70 = *(_DWORD *)(v66 + 8);
        v69 = *(_DWORD *)(v66 + 12);
        v72 = *(_DWORD *)(v66 + 16);
        v71 = *(_DWORD *)(v66 + 20);
        v74 = *(_DWORD *)(v66 + 24);
        v73 = *(_DWORD *)(v66 + 28);
        v76 = *(_DWORD *)(v66 + 32);
        v75 = *(_DWORD *)(v66 + 36);
        v77 = *(_DWORD *)(v66 + 40);
        v78 = *(float *)(v66 + 44);
        *(_DWORD *)v124 = *(_DWORD *)(v66 + 56);
        v123 = *(_QWORD **)(v66 + 48);
        if ( *(float *)&v127 <= v67 )
        {
          v80 = 1.0;
          if ( (float)(*(float *)&v127 + *(float *)&v128) >= v67 )
            goto LABEL_84;
          v79 = v67 - (float)(*(float *)&v127 + *(float *)&v128);
        }
        else
        {
          v79 = *(float *)&v127 - v67;
        }
        v80 = (float)(v79 / -100.0) + 1.0;
LABEL_84:
        if ( *((float *)&v127 + 1) <= v68 )
        {
          if ( (float)(*((float *)&v127 + 1) + *((float *)&v128 + 1)) >= v68 )
            goto LABEL_89;
          v81 = v68 - (float)(*((float *)&v127 + 1) + *((float *)&v128 + 1));
        }
        else
        {
          v81 = *((float *)&v127 + 1) - v68;
        }
        v80 = v80 * (float)((float)(v81 / -100.0) + 1.0);
LABEL_89:
        v82 = v78 * v80;
        v116 = v73;
        v112 = v74;
        v114 = v77;
        v110 = v71;
        v111 = v75;
        v108 = v76;
        v109 = v72;
        if ( *v23 >= v67 )
        {
          v95 = (int *)**((_QWORD **)a1 + 3);
          v96 = *v95;
          if ( *v95 >= v95[1] )
            goto LABEL_104;
        }
        else
        {
          if ( *v105 > v67 )
          {
            if ( v107 >= 2 )
            {
              v83 = v102;
              v84 = 0;
              for ( j = 1; j < v107; ++j )
              {
                v86 = *v83;
                if ( *v83 > v67 )
                {
                  v87 = *(v83 - 2);
                  v122 = *(_DWORD *)v124;
                  v121 = (__int64)v123;
                  v88 = *(int **)(*((_QWORD *)a1 + 3) + v84);
                  v89 = *v88;
                  if ( *v88 >= v88[1] )
                  {
                    Caver::FastVector<Caver::PointLight>::Resize();
                    v89 = *v88;
                    v73 = v116;
                    v74 = v112;
                    v77 = v114;
                    v71 = v110;
                    v75 = v111;
                    v76 = v108;
                    v72 = v109;
                  }
                  v90 = (float)(v67 - v87) / (float)(v86 - v87);
                  v91 = *((_QWORD *)v88 + 1) + 60LL * v89;
                  *(float *)v91 = v67;
                  *(float *)(v91 + 4) = v68;
                  *(_DWORD *)(v91 + 8) = v70;
                  *(_DWORD *)(v91 + 12) = v69;
                  *(_DWORD *)(v91 + 16) = v72;
                  *(_DWORD *)(v91 + 20) = v71;
                  *(_DWORD *)(v91 + 24) = v74;
                  *(_DWORD *)(v91 + 28) = v73;
                  *(_DWORD *)(v91 + 32) = v76;
                  *(_DWORD *)(v91 + 36) = v75;
                  *(_DWORD *)(v91 + 40) = v77;
                  *(float *)(v91 + 44) = v82 * (float)(1.0 - v90);
                  *(_DWORD *)(v91 + 56) = v122;
                  *(_QWORD *)(v91 + 48) = v121;
                  ++*v88;
                  v120 = *(_DWORD *)v124;
                  v119 = (__int64)v123;
                  v92 = *(int **)(*((_QWORD *)a1 + 3) + v84 + 16);
                  v93 = *v92;
                  if ( *v92 >= v92[1] )
                  {
                    Caver::FastVector<Caver::PointLight>::Resize();
                    v93 = *v92;
                    v73 = v116;
                    v74 = v112;
                    v77 = v114;
                    v71 = v110;
                    v75 = v111;
                    v76 = v108;
                    v72 = v109;
                  }
                  v94 = *((_QWORD *)v92 + 1) + 60LL * v93;
                  *(float *)v94 = v67;
                  *(float *)(v94 + 4) = v68;
                  *(_DWORD *)(v94 + 8) = v70;
                  *(_DWORD *)(v94 + 12) = v69;
                  *(_DWORD *)(v94 + 16) = v72;
                  *(_DWORD *)(v94 + 20) = v71;
                  *(_DWORD *)(v94 + 24) = v74;
                  *(_DWORD *)(v94 + 28) = v73;
                  *(_DWORD *)(v94 + 32) = v76;
                  *(_DWORD *)(v94 + 36) = v75;
                  *(_DWORD *)(v94 + 40) = v77;
                  *(float *)(v94 + 44) = v82 * v90;
                  *(_DWORD *)(v94 + 56) = v120;
                  *(_QWORD *)(v94 + 48) = v119;
                  ++*v92;
                }
                v83 += 2;
                v84 += 16;
              }
            }
            goto LABEL_106;
          }
          v95 = *(int **)(*((_QWORD *)a1 + 3) + v104);
          v96 = *v95;
          if ( *v95 >= v95[1] )
          {
LABEL_104:
            Caver::FastVector<Caver::PointLight>::Resize();
            v96 = *v95;
            v73 = v116;
            v74 = v112;
            v77 = v114;
            v71 = v110;
            v75 = v111;
            v76 = v108;
            v72 = v109;
          }
        }
        v97 = *((_QWORD *)v95 + 1) + 60LL * v96;
        *(float *)v97 = v67;
        *(float *)(v97 + 4) = v68;
        *(_DWORD *)(v97 + 8) = v70;
        *(_DWORD *)(v97 + 12) = v69;
        *(_DWORD *)(v97 + 16) = v72;
        *(_DWORD *)(v97 + 20) = v71;
        *(_DWORD *)(v97 + 24) = v74;
        *(_DWORD *)(v97 + 28) = v73;
        *(_DWORD *)(v97 + 32) = v76;
        *(_DWORD *)(v97 + 36) = v75;
        *(_DWORD *)(v97 + 40) = v77;
        *(float *)(v97 + 44) = v82;
        *(_DWORD *)(v97 + 56) = *(_DWORD *)v124;
        *(_QWORD *)(v97 + 48) = v123;
        ++*v95;
LABEL_106:
        v24 = v106;
        v23 = v118;
        ++v64;
      }
      while ( v64 < *a1 );
    }
    if ( v107 < 1 )
    {
      LODWORD(v7) = 0;
    }
    else
    {
      v98 = 0;
      v99 = 0;
      LODWORD(v7) = 0;
      do
      {
        v100 = *(Caver::PointLightGroup **)(*((_QWORD *)a1 + 3) + v98);
        if ( *(int *)v100 >= 1 )
        {
          Caver::PointLightGroup::CombinedLight((__int64 *)&v123, v100);
          v101 = a3 + 60LL * (int)v7;
          LODWORD(v7) = v7 + 1;
          *(_QWORD *)v101 = v123;
          *(_DWORD *)(v101 + 8) = *(_DWORD *)v124;
          *(_OWORD *)(v101 + 44) = v126;
          *(_OWORD *)(v101 + 28) = v125;
          *(_OWORD *)(v101 + 12) = *(_OWORD *)&v124[4];
        }
        ++v99;
        v98 += 16;
      }
      while ( v99 < v107 );
    }
    if ( v118 )
      operator delete[](v24);
  }
  return (unsigned int)v7;
}

