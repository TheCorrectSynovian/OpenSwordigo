/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000351478
 * Mangled: _ZN5Caver18GameViewControllerD2Ev
 * Demangled: Caver::GameViewController::~GameViewController()
 *
 * Callers: 1
 *   0x00000000001FCFE0  Caver::GameViewController::~GameViewController()
 *
 * Callees: 11
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F78D0  Caver::ProfileManager::RemoveDelegate(Caver::IProfileManagerDelegate *)
 *   0x00000000001FAE50  Caver::ProfileManager::sharedManager(void)
 *   0x00000000001FCFE0  Caver::GameViewController::~GameViewController()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x0000000000351C5C  Caver::GameViewController::LoadGameState(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 216
 *   insn=0x000000000035148C string=0x0000000000351490 "U"
 *   insn=0x0000000000351490 string=0x0000000000351494 ""
 *   insn=0x000000000035149C string=0x00000000003514A0 "\n"
 *   insn=0x00000000003514A0 string=0x00000000003514A4 "@"
 *   insn=0x00000000003514A4 string=0x00000000003514A8 "\n"
 *   insn=0x00000000003514A8 string=0x00000000003514AC "@"
 *   insn=0x00000000003514B0 string=0x00000000003514B4 "\ta"
 *   insn=0x00000000003514B4 string=0x00000000003514B8 "`"
 *   insn=0x00000000003514B8 string=0x00000000003514BC " "
 *   insn=0x00000000003514BC string=0x00000000003514C0 "\t!"
 *   insn=0x00000000003514C0 string=0x00000000003514C4 " "
 *   insn=0x00000000003514C4 string=0x00000000003514C8 "\t"
 *   insn=0x00000000003514C8 string=0x00000000003514CC "`"
 *   insn=0x00000000003514CC string=0x00000000003514D0 " "
 *   insn=0x00000000003514D0 string=0x00000000003514D4 "\t"
 *   insn=0x00000000003514D4 string=0x00000000003514D8 " "
 *   insn=0x00000000003514D8 string=0x00000000003514DC "\tA"
 *   insn=0x00000000003514DC string=0x00000000003514E0 "a"
 *   insn=0x00000000003514E0 string=0x00000000003514E4 "i"
 *   insn=0x00000000003514E4 string=0x00000000003514E8 "`"
 *   insn=0x00000000003514E8 string=0x00000000003514EC "h>"
 *   insn=0x00000000003514EC string=0x00000000003514F0 "X"
 *   insn=0x00000000003514F0 string=0x00000000003514F4 "a"
 *   insn=0x00000000003514F0 string=0x00000000001FAE50 "0'"
 *   insn=0x00000000003514F8 string=0x00000000003514FC "hn@"
 *   insn=0x00000000003514F8 string=0x00000000001F78D0 "0'"
 *   insn=0x00000000003514FC string=0x0000000000351500 "h"
 *   insn=0x0000000000351500 string=0x0000000000351504 ""
 *   insn=0x0000000000351500 string=0x000000000035150C "h"
 *   insn=0x000000000035151C string=0x0000000000351520 "!"
 *   insn=0x0000000000351520 string=0x0000000000351524 "`"
 *   insn=0x0000000000351528 string=0x000000000035152C "@"
 *   insn=0x0000000000351528 string=0x0000000000351548 "t"
 *   insn=0x000000000035152C string=0x0000000000351530 ""
 *   insn=0x0000000000351530 string=0x0000000000351534 ""
 *   insn=0x0000000000351538 string=0x000000000035153C ""
 *   insn=0x000000000035153C string=0x0000000000351540 ""
 *   insn=0x0000000000351548 string=0x000000000035154C "4"
 *   insn=0x000000000035154C string=0x0000000000351590 "t"
 *   insn=0x0000000000351550 string=0x0000000000351554 ""
 *   insn=0x0000000000351560 string=0x0000000000351564 "\t@"
 *   insn=0x0000000000351570 string=0x0000000000351574 ""
 *   insn=0x0000000000351580 string=0x0000000000351584 "@"
 *   insn=0x0000000000351590 string=0x0000000000351594 "4"
 *   insn=0x0000000000351594 string=0x00000000003515D8 "hz@"
 *   insn=0x0000000000351598 string=0x000000000035159C ""
 *   insn=0x00000000003515A8 string=0x00000000003515AC "\t@"
 *   insn=0x00000000003515B8 string=0x00000000003515BC ""
 *   insn=0x00000000003515C8 string=0x00000000003515CC "@"
 *   insn=0x00000000003515E0 string=0x00000000003515E4 "!"
 *   insn=0x00000000003515E4 string=0x00000000003515E8 "tr@"
 *   insn=0x00000000003515E8 string=0x00000000003515EC "4"
 *   insn=0x00000000003515EC string=0x0000000000351630 "tj@"
 *   insn=0x00000000003515F0 string=0x00000000003515F4 ""
 *   insn=0x0000000000351600 string=0x0000000000351604 "\t@"
 *   insn=0x0000000000351610 string=0x0000000000351614 ""
 *   insn=0x0000000000351620 string=0x0000000000351624 "@"
 *   insn=0x0000000000351630 string=0x0000000000351634 "4"
 *   insn=0x0000000000351634 string=0x0000000000351678 "tb@"
 *   insn=0x0000000000351638 string=0x000000000035163C ""
 *   insn=0x0000000000351648 string=0x000000000035164C "\t@"
 *   insn=0x0000000000351658 string=0x000000000035165C ""
 *   insn=0x0000000000351668 string=0x000000000035166C "@"
 *   insn=0x0000000000351678 string=0x000000000035167C "4"
 *   insn=0x000000000035167C string=0x00000000003516C0 "tZ@"
 *   insn=0x0000000000351680 string=0x0000000000351684 ""
 *   insn=0x0000000000351690 string=0x0000000000351694 "\t@"
 *   insn=0x00000000003516A0 string=0x00000000003516A4 ""
 *   insn=0x00000000003516B0 string=0x00000000003516B4 "@"
 *   insn=0x00000000003516C0 string=0x00000000003516C4 "4"
 *   insn=0x00000000003516C4 string=0x0000000000351708 "tR@"
 *   insn=0x00000000003516C8 string=0x00000000003516CC ""
 *   insn=0x00000000003516D8 string=0x00000000003516DC "\t@"
 *   insn=0x00000000003516E8 string=0x00000000003516EC ""
 *   insn=0x00000000003516F8 string=0x00000000003516FC "@"
 *   insn=0x0000000000351708 string=0x000000000035170C "4"
 *   insn=0x000000000035170C string=0x0000000000351750 "tJ@"
 *   insn=0x0000000000351710 string=0x0000000000351714 ""
 *   insn=0x0000000000351720 string=0x0000000000351724 "\t@"
 *   insn=0x0000000000351730 string=0x0000000000351734 ""
 *   insn=0x0000000000351740 string=0x0000000000351744 "@"
 *   insn=0x0000000000351750 string=0x0000000000351754 "4"
 *   insn=0x0000000000351758 string=0x000000000035175C ""
 *   insn=0x0000000000351768 string=0x000000000035176C "\t@"
 *   insn=0x0000000000351778 string=0x000000000035177C ""
 *   insn=0x0000000000351788 string=0x000000000035178C "@"
 *   insn=0x0000000000351798 string=0x000000000035179C "}"
 *   insn=0x000000000035179C string=0x00000000001F6590 "0'"
 *   insn=0x00000000003517C4 string=0x00000000003517C8 ")=G"
 *   insn=0x00000000003517C8 string=0x00000000003517CC "!"
 *   insn=0x00000000003517D0 string=0x00000000003517D4 "\t"
 *   insn=0x00000000003517D0 string=0x000000000035180C "\t"
 *   insn=0x00000000003517D4 string=0x00000000003517D8 "*"
 *   insn=0x00000000003517D8 string=0x00000000003517DC "\n"
 *   insn=0x00000000003517E0 string=0x00000000003517E4 ""
 *   insn=0x00000000003517E4 string=0x0000000000351818 "?"
 *   insn=0x00000000003517E8 string=0x00000000003517EC ")=G"
 *   insn=0x00000000003517EC string=0x00000000003517F0 "!"
 *   insn=0x00000000003517F0 string=0x00000000003517F4 "\t"
 *   insn=0x00000000003517F4 string=0x00000000003517F8 "\t"
 *   insn=0x00000000003517F4 string=0x0000000000351834 "\t"
 *   insn=0x00000000003517F8 string=0x00000000003517FC "*"
 *   insn=0x00000000003517FC string=0x0000000000351800 "\n"
 *   insn=0x0000000000351808 string=0x0000000000351840 "?"
 *   insn=0x000000000035180C string=0x0000000000351810 "*"
 *   insn=0x0000000000351810 string=0x0000000000351814 "\n"
 *   insn=0x0000000000351818 string=0x000000000035181C "L"
 *   insn=0x0000000000351824 string=0x0000000000351828 "`"
 *   insn=0x000000000035182C string=0x0000000000351830 "F"
 *   insn=0x0000000000351834 string=0x0000000000351838 "*"
 *   insn=0x0000000000351838 string=0x000000000035183C "\n"
 *   insn=0x0000000000351840 string=0x0000000000351844 ","
 *   insn=0x000000000035184C string=0x0000000000351850 "tr@"
 *   insn=0x0000000000351854 string=0x0000000000351858 "v"
 *   insn=0x000000000035185C string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000351860 string=0x0000000000351864 "u"
 *   insn=0x0000000000351868 string=0x000000000035186C "?"
 *   insn=0x000000000035186C string=0x0000000000351968 "u"
 *   insn=0x0000000000351878 string=0x000000000035187C "uJ@"
 *   insn=0x000000000035187C string=0x0000000000351880 "U"
 *   insn=0x0000000000351888 string=0x000000000035188C "uR@"
 *   insn=0x0000000000351894 string=0x0000000000351B60 "uJ@"
 *   insn=0x0000000000351898 string=0x000000000035189C "uZ@"
 *   insn=0x00000000003518A4 string=0x0000000000351B18 "uR@"
 *   insn=0x00000000003518A8 string=0x00000000003518AC "ub@"
 *   insn=0x00000000003518B4 string=0x0000000000351AD0 "uZ@"
 *   insn=0x00000000003518B8 string=0x00000000003518BC "uj@"
 *   insn=0x00000000003518BC string=0x00000000003518C0 "U"
 *   insn=0x00000000003518C0 string=0x00000000003518C4 "q"
 *   insn=0x00000000003518C4 string=0x0000000000351A88 "ub@"
 *   insn=0x00000000003518C8 string=0x00000000003518CC "9"
 *   insn=0x00000000003518CC string=0x00000000003519B0 "hz@"
 *   insn=0x00000000003518D0 string=0x00000000003518D4 "u"
 *   insn=0x00000000003518D8 string=0x00000000003518DC "5"
 *   insn=0x00000000003518E4 string=0x00000000003518E8 "J"
 *   insn=0x00000000003518EC string=0x00000000003518F0 "(a"
 *   insn=0x00000000003518F8 string=0x00000000003518FC "`"
 *   insn=0x0000000000351900 string=0x0000000000351904 "@"
 *   insn=0x0000000000351900 string=0x0000000000351920 "u"
 *   insn=0x0000000000351904 string=0x0000000000351908 ""
 *   insn=0x0000000000351908 string=0x000000000035190C ""
 *   insn=0x0000000000351910 string=0x0000000000351914 ""
 *   insn=0x0000000000351914 string=0x0000000000351918 ""
 *   insn=0x0000000000351920 string=0x0000000000351924 "5"
 *   insn=0x0000000000351928 string=0x000000000035192C ""
 *   insn=0x0000000000351938 string=0x000000000035193C "\t@"
 *   insn=0x0000000000351948 string=0x000000000035194C ""
 *   insn=0x0000000000351958 string=0x000000000035195C "@"
 *   insn=0x0000000000351968 string=0x000000000035196C "5"
 *   insn=0x0000000000351970 string=0x0000000000351974 ""
 *   insn=0x0000000000351980 string=0x0000000000351984 "\t@"
 *   insn=0x0000000000351990 string=0x0000000000351994 ""
 *   insn=0x00000000003519A0 string=0x00000000003519A4 "@"
 *   insn=0x00000000003519B4 string=0x00000000003519B8 ")"
 *   insn=0x00000000003519C4 string=0x00000000003519F8 "ur@"
 *   insn=0x00000000003519C8 string=0x00000000003519CC ")=G"
 *   insn=0x00000000003519CC string=0x00000000003519D0 "!"
 *   insn=0x00000000003519D4 string=0x00000000003519D8 "\t"
 *   insn=0x00000000003519D4 string=0x0000000000351C08 "\t"
 *   insn=0x00000000003519D8 string=0x00000000003519DC "*"
 *   insn=0x00000000003519DC string=0x00000000003519E0 "\n"
 *   insn=0x00000000003519E4 string=0x00000000003519E8 "?"
 *   insn=0x00000000003519E8 string=0x00000000003519EC "l"
 *   insn=0x00000000003519F0 string=0x00000000003519F4 "lb"
 *   insn=0x00000000003519F8 string=0x00000000003519FC "5"
 *   insn=0x00000000003519FC string=0x0000000000351A40 "uj@"
 *   insn=0x0000000000351A00 string=0x0000000000351A04 ""
 *   insn=0x0000000000351A10 string=0x0000000000351A14 "\t@"
 *   insn=0x0000000000351A20 string=0x0000000000351A24 ""
 *   insn=0x0000000000351A30 string=0x0000000000351A34 "@"
 *   insn=0x0000000000351A40 string=0x0000000000351A44 "5"
 *   insn=0x0000000000351A48 string=0x0000000000351A4C ""
 *   insn=0x0000000000351A58 string=0x0000000000351A5C "\t@"
 *   insn=0x0000000000351A68 string=0x0000000000351A6C ""
 *   insn=0x0000000000351A78 string=0x0000000000351A7C "@"
 *   insn=0x0000000000351A88 string=0x0000000000351A8C "5"
 *   insn=0x0000000000351A90 string=0x0000000000351A94 ""
 *   insn=0x0000000000351AA0 string=0x0000000000351AA4 "\t@"
 *   insn=0x0000000000351AB0 string=0x0000000000351AB4 ""
 *   insn=0x0000000000351AC0 string=0x0000000000351AC4 "@"
 *   insn=0x0000000000351AD0 string=0x0000000000351AD4 "5"
 *   insn=0x0000000000351AD8 string=0x0000000000351ADC ""
 *   insn=0x0000000000351AE8 string=0x0000000000351AEC "\t@"
 *   insn=0x0000000000351AF8 string=0x0000000000351AFC ""
 *   insn=0x0000000000351B08 string=0x0000000000351B0C "@"
 *   insn=0x0000000000351B18 string=0x0000000000351B1C "5"
 *   insn=0x0000000000351B20 string=0x0000000000351B24 ""
 *   insn=0x0000000000351B30 string=0x0000000000351B34 "\t@"
 *   insn=0x0000000000351B40 string=0x0000000000351B44 ""
 *   insn=0x0000000000351B50 string=0x0000000000351B54 "@"
 *   insn=0x0000000000351B60 string=0x0000000000351B64 "5"
 *   insn=0x0000000000351B68 string=0x0000000000351B6C ""
 *   insn=0x0000000000351B78 string=0x0000000000351B7C "\t@"
 *   insn=0x0000000000351B88 string=0x0000000000351B8C ""
 *   insn=0x0000000000351B98 string=0x0000000000351B9C "@"
 *   insn=0x0000000000351BA8 string=0x0000000000351BAC "y"
 *   insn=0x0000000000351BB0 string=0x0000000000351BB4 "D"
 *   insn=0x0000000000351BB8 string=0x0000000000351BBC "J=G"
 *   insn=0x0000000000351BBC string=0x0000000000351BC0 ")!"
 *   insn=0x0000000000351BC4 string=0x0000000000351BC8 "*"
 *   insn=0x0000000000351BC4 string=0x0000000000351BDC "*"
 *   insn=0x0000000000351BC8 string=0x0000000000351BCC "K"
 *   insn=0x0000000000351BCC string=0x0000000000351BD0 "+"
 *   insn=0x0000000000351BD8 string=0x0000000000351BE8 "_"
 *   insn=0x0000000000351BDC string=0x0000000000351BE0 "K"
 *   insn=0x0000000000351BE0 string=0x0000000000351BE4 "+"
 *   insn=0x0000000000351BF8 string=0x0000000000351BFC "`"
 *   insn=0x0000000000351BFC string=0x0000000000351C00 " "
 *   insn=0x0000000000351C00 string=0x0000000000351C04 "G"
 *   insn=0x0000000000351C08 string=0x0000000000351C0C "*"
 *   insn=0x0000000000351C0C string=0x0000000000351C10 "\n"
 *   insn=0x0000000000351C10 string=0x0000000000351C14 "?"
 *   insn=0x0000000000351C18 string=0x0000000000351C1C "w"
 *   insn=0x0000000000351C34 string=0x00000000001FCFE0 "0'"
 *   insn=0x0000000000351C44 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000351C54 string=0x0000000000351C58 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GameViewController::~GameViewController(Caver::GameViewController *this)
{
  __int128 v2; // q0
  __int64 v3; // x8
  __int64 v4; // x8
  void *v5; // x0
  _DWORD *v6; // x0
  int v7; // w8
  _QWORD *v8; // x20
  __int64 v9; // x8
  __int64 v10; // x8
  _QWORD *v11; // x20
  __int64 v12; // x8
  __int64 v13; // x8
  __int64 v14; // x8
  void *v15; // x0
  _QWORD *v16; // x20
  __int64 v17; // x8
  __int64 v18; // x8
  _QWORD *v19; // x20
  __int64 v20; // x8
  __int64 v21; // x8
  _QWORD *v22; // x20
  __int64 v23; // x8
  __int64 v24; // x8
  _QWORD *v25; // x20
  __int64 v26; // x8
  __int64 v27; // x8
  _QWORD *v28; // x20
  __int64 v29; // x8
  __int64 v30; // x8
  _QWORD *v31; // x20
  __int64 v32; // x8
  __int64 v33; // x8
  unsigned int *v34; // x8
  int v35; // w9
  unsigned int *v36; // x8
  int v37; // w9

  *(_QWORD *)&v2 = &off_6CB950;
  *((_QWORD *)&v2 + 1) = &off_6CB968;
  _ReadStatusReg(TPIDR_EL0);
  *(_OWORD *)((char *)this + 72) = v2;
  *(_QWORD *)&v2 = off_6CB988;
  *((_QWORD *)&v2 + 1) = &off_6CB9B8;
  *(_OWORD *)((char *)this + 88) = v2;
  *(_QWORD *)&v2 = &off_6CB9D0;
  *((_QWORD *)&v2 + 1) = &off_6CB9F0;
  *(_QWORD *)this = off_6CB880;
  *(_OWORD *)((char *)this + 104) = v2;
  *((_QWORD *)this + 15) = &off_6CBA08;
  Caver::ProfileManager::sharedManager(this);
  Caver::ProfileManager::RemoveDelegate();
  v3 = *((_QWORD *)this + 27);
  if ( v3 )
    *(_QWORD *)(*(_QWORD *)(v3 + 256) + 240LL) = 0;
  v4 = *((_QWORD *)this + 39);
  v5 = (void *)(v4 - 24);
  if ( (__int64 *)(v4 - 24) == &qword_6FD2E0 )
    goto LABEL_4;
  v34 = (unsigned int *)(v4 - 8);
  if ( &pthread_create )
  {
    do
      v35 = __ldaxr(v34);
    while ( __stlxr(v35 - 1, v34) );
  }
  else
  {
    v35 = (*v34)--;
  }
  if ( v35 > 0 )
  {
LABEL_4:
    v6 = (_DWORD *)*((_QWORD *)this + 37);
    if ( !v6 )
      goto LABEL_7;
  }
  else
  {
    operator delete(v5);
    v6 = (_DWORD *)*((_QWORD *)this + 37);
    if ( !v6 )
      goto LABEL_7;
  }
  v7 = v6[2] - 1;
  v6[2] = v7;
  if ( !v7 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v6 + 8LL))(v6);
LABEL_7:
  v8 = (_QWORD *)*((_QWORD *)this + 36);
  if ( v8 )
  {
    v9 = v8[1] - 1LL;
    v8[1] = v9;
    if ( !v9 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
      v10 = v8[2] - 1LL;
      v8[2] = v10;
      if ( !v10 )
        (*(void (__fastcall **)(_QWORD *))(*v8 + 24LL))(v8);
    }
  }
  v11 = (_QWORD *)*((_QWORD *)this + 33);
  if ( v11 )
  {
    v12 = v11[1] - 1LL;
    v11[1] = v12;
    if ( !v12 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
      v13 = v11[2] - 1LL;
      v11[2] = v13;
      if ( !v13 )
        (*(void (__fastcall **)(_QWORD *))(*v11 + 24LL))(v11);
    }
  }
  v14 = *((_QWORD *)this + 30);
  v15 = (void *)(v14 - 24);
  if ( (__int64 *)(v14 - 24) == &qword_6FD2E0 )
    goto LABEL_16;
  v36 = (unsigned int *)(v14 - 8);
  if ( &pthread_create )
  {
    do
      v37 = __ldaxr(v36);
    while ( __stlxr(v37 - 1, v36) );
  }
  else
  {
    v37 = (*v36)--;
  }
  if ( v37 > 0 )
  {
LABEL_16:
    v16 = (_QWORD *)*((_QWORD *)this + 28);
    if ( !v16 )
      goto LABEL_20;
  }
  else
  {
    operator delete(v15);
    v16 = (_QWORD *)*((_QWORD *)this + 28);
    if ( !v16 )
      goto LABEL_20;
  }
  v17 = v16[1] - 1LL;
  v16[1] = v17;
  if ( !v17 )
  {
    (*(void (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
    v18 = v16[2] - 1LL;
    v16[2] = v18;
    if ( !v18 )
      (*(void (__fastcall **)(_QWORD *))(*v16 + 24LL))(v16);
  }
LABEL_20:
  v19 = (_QWORD *)*((_QWORD *)this + 26);
  if ( v19 )
  {
    v20 = v19[1] - 1LL;
    v19[1] = v20;
    if ( !v20 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v19 + 16LL))(v19);
      v21 = v19[2] - 1LL;
      v19[2] = v21;
      if ( !v21 )
        (*(void (__fastcall **)(_QWORD *))(*v19 + 24LL))(v19);
    }
  }
  v22 = (_QWORD *)*((_QWORD *)this + 24);
  if ( v22 )
  {
    v23 = v22[1] - 1LL;
    v22[1] = v23;
    if ( !v23 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v22 + 16LL))(v22);
      v24 = v22[2] - 1LL;
      v22[2] = v24;
      if ( !v24 )
        (*(void (__fastcall **)(_QWORD *))(*v22 + 24LL))(v22);
    }
  }
  v25 = (_QWORD *)*((_QWORD *)this + 22);
  if ( v25 )
  {
    v26 = v25[1] - 1LL;
    v25[1] = v26;
    if ( !v26 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v25 + 16LL))(v25);
      v27 = v25[2] - 1LL;
      v25[2] = v27;
      if ( !v27 )
        (*(void (__fastcall **)(_QWORD *))(*v25 + 24LL))(v25);
    }
  }
  v28 = (_QWORD *)*((_QWORD *)this + 20);
  if ( v28 )
  {
    v29 = v28[1] - 1LL;
    v28[1] = v29;
    if ( !v29 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v28 + 16LL))(v28);
      v30 = v28[2] - 1LL;
      v28[2] = v30;
      if ( !v30 )
        (*(void (__fastcall **)(_QWORD *))(*v28 + 24LL))(v28);
    }
  }
  v31 = (_QWORD *)*((_QWORD *)this + 18);
  if ( v31 )
  {
    v32 = v31[1] - 1LL;
    v31[1] = v32;
    if ( !v32 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v31 + 16LL))(v31);
      v33 = v31[2] - 1LL;
      v31[2] = v33;
      if ( !v33 )
        (*(void (__fastcall **)(_QWORD *))(*v31 + 24LL))(v31);
    }
  }
  Caver::GUIViewController::~GUIViewController(this);
}

