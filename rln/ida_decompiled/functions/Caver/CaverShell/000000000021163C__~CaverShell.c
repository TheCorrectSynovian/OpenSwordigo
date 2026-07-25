/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000021163C
 * Mangled: _ZN5Caver10CaverShellD2Ev
 * Demangled: Caver::CaverShell::~CaverShell()
 *
 * Callers: 1
 *   0x0000000000203A70  Caver::CaverShell::~CaverShell()
 *
 * Callees: 9
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002014F0  Caver::FWShell::~FWShell()
 *   0x0000000000203A70  Caver::CaverShell::~CaverShell()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000021188C  Caver::FWShell::ApplicationShouldQuit(void)
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 51
 *   insn=0x000000000021164C string=0x0000000000211650 "U"
 *   insn=0x0000000000211660 string=0x0000000000211664 "tR@"
 *   insn=0x0000000000211664 string=0x0000000000211668 "QC"
 *   insn=0x0000000000211668 string=0x000000000021166C "A"
 *   insn=0x000000000021166C string=0x0000000000211670 "h"
 *   insn=0x0000000000211670 string=0x0000000000211674 "4"
 *   insn=0x0000000000211674 string=0x00000000002116B8 "tJ@"
 *   insn=0x0000000000211678 string=0x000000000021167C ""
 *   insn=0x0000000000211688 string=0x000000000021168C "\t@"
 *   insn=0x0000000000211698 string=0x000000000021169C ""
 *   insn=0x00000000002116A8 string=0x00000000002116AC "@"
 *   insn=0x00000000002116B8 string=0x00000000002116BC "4"
 *   insn=0x00000000002116BC string=0x0000000000211700 "hB@"
 *   insn=0x00000000002116C0 string=0x00000000002116C4 ""
 *   insn=0x00000000002116D0 string=0x00000000002116D4 "\t@"
 *   insn=0x00000000002116E0 string=0x00000000002116E4 ""
 *   insn=0x00000000002116F0 string=0x00000000002116F4 "@"
 *   insn=0x0000000000211704 string=0x0000000000211708 ")"
 *   insn=0x0000000000211718 string=0x000000000021171C "u"
 *   insn=0x0000000000211744 string=0x0000000000211748 ")=G"
 *   insn=0x0000000000211748 string=0x000000000021174C "!"
 *   insn=0x0000000000211750 string=0x0000000000211754 "\t"
 *   insn=0x0000000000211750 string=0x0000000000211768 "\t"
 *   insn=0x0000000000211754 string=0x0000000000211758 "*"
 *   insn=0x0000000000211758 string=0x000000000021175C "\n"
 *   insn=0x0000000000211764 string=0x0000000000211774 "?"
 *   insn=0x0000000000211768 string=0x000000000021176C "*"
 *   insn=0x000000000021176C string=0x0000000000211770 "\n"
 *   insn=0x000000000021177C string=0x0000000000211780 "\tc"
 *   insn=0x0000000000211788 string=0x00000000001F62D0 "0'"
 *   insn=0x0000000000211790 string=0x00000000002117E0 "hB@"
 *   insn=0x0000000000211798 string=0x000000000021179C "5"
 *   insn=0x00000000002117A0 string=0x00000000002117A4 ""
 *   insn=0x00000000002117B0 string=0x00000000002117B4 "\t@"
 *   insn=0x00000000002117C0 string=0x00000000002117C4 ""
 *   insn=0x00000000002117D0 string=0x00000000002117D4 "@"
 *   insn=0x00000000002117E4 string=0x00000000002117E8 ")"
 *   insn=0x00000000002117F8 string=0x00000000002117FC ")=G"
 *   insn=0x00000000002117FC string=0x0000000000211800 "!"
 *   insn=0x0000000000211804 string=0x0000000000211808 "\t"
 *   insn=0x0000000000211804 string=0x0000000000211838 "\t"
 *   insn=0x0000000000211808 string=0x000000000021180C "*"
 *   insn=0x000000000021180C string=0x0000000000211810 "\n"
 *   insn=0x0000000000211814 string=0x0000000000211818 "?"
 *   insn=0x0000000000211818 string=0x000000000021181C "l"
 *   insn=0x0000000000211828 string=0x000000000021182C "1"
 *   insn=0x0000000000211830 string=0x0000000000211834 "$"
 *   insn=0x0000000000211838 string=0x000000000021183C "*"
 *   insn=0x000000000021183C string=0x0000000000211840 "\n"
 *   insn=0x0000000000211840 string=0x0000000000211844 "?"
 *   insn=0x0000000000211874 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CaverShell::~CaverShell(Caver::CaverShell *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  void *v9; // x0
  unsigned int *v10; // x8
  int v11; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 20);
  *(_QWORD *)this = off_6B8ED0;
  if ( v2 )
  {
    v3 = v2[1] - 1LL;
    v2[1] = v3;
    if ( !v3 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v2 + 16LL))(v2);
      v4 = v2[2] - 1LL;
      v2[2] = v4;
      if ( !v4 )
        (*(void (__fastcall **)(_QWORD *))(*v2 + 24LL))(v2);
    }
  }
  v5 = (_QWORD *)*((_QWORD *)this + 18);
  if ( v5 )
  {
    v6 = v5[1] - 1LL;
    v5[1] = v6;
    if ( !v6 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v5 + 16LL))(v5);
      v7 = v5[2] - 1LL;
      v5[2] = v7;
      if ( !v7 )
        (*(void (__fastcall **)(_QWORD *))(*v5 + 24LL))(v5);
    }
  }
  v8 = *((_QWORD *)this + 16);
  v9 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v10 = (unsigned int *)(v8 - 8);
    if ( &pthread_create )
    {
      do
        v11 = __ldaxr(v10);
      while ( __stlxr(v11 - 1, v10) );
    }
    else
    {
      v11 = (*v10)--;
    }
    if ( v11 <= 0 )
      operator delete(v9);
  }
  Caver::FWShell::~FWShell(this);
}

