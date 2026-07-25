/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E267C
 * Mangled: _ZN5Caver17OverlayMenuButtonD2Ev
 * Demangled: Caver::OverlayMenuButton::~OverlayMenuButton()
 *
 * Callers: 2
 *   0x00000000001FF9C0  Caver::OverlayMenuButton::~OverlayMenuButton()
 *   0x00000000003E1EC0  Caver::OverlayMenuButton::FadeInAnimationFinished(void *,Caver::GUIEvent *)
 *
 * Callees: 7
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x00000000001F80D0  Caver::GUIButton::~GUIButton()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E2974  Caver::OverlayMenuButton::~OverlayMenuButton()
 *   0x000000000056A3A4  operator delete(void *)
 *   0x00000000005818C4  sub_5818C4
 *   0x00000000006FE668  pthread_create
 *
 * Referenced strings: 80
 *   insn=0x00000000003E268C string=0x00000000003E2690 "U"
 *   insn=0x00000000003E269C string=0x00000000003E26A0 "("
 *   insn=0x00000000003E26A0 string=0x00000000003E26A4 "t"
 *   insn=0x00000000003E26A4 string=0x00000000003E26A8 ""
 *   insn=0x00000000003E26A8 string=0x00000000003E26AC "A"
 *   insn=0x00000000003E26AC string=0x00000000003E26B0 "h"
 *   insn=0x00000000003E26B0 string=0x00000000003E26B4 "4"
 *   insn=0x00000000003E26B4 string=0x00000000003E26F8 "t"
 *   insn=0x00000000003E26B8 string=0x00000000003E26BC ""
 *   insn=0x00000000003E26C8 string=0x00000000003E26CC "\t@"
 *   insn=0x00000000003E26D8 string=0x00000000003E26DC ""
 *   insn=0x00000000003E26E8 string=0x00000000003E26EC "@"
 *   insn=0x00000000003E26F8 string=0x00000000003E26FC "4"
 *   insn=0x00000000003E26FC string=0x00000000003E2740 "h"
 *   insn=0x00000000003E2700 string=0x00000000003E2704 ""
 *   insn=0x00000000003E2710 string=0x00000000003E2714 "\t@"
 *   insn=0x00000000003E2720 string=0x00000000003E2724 ""
 *   insn=0x00000000003E2730 string=0x00000000003E2734 "@"
 *   insn=0x00000000003E2740 string=0x00000000003E2744 "\t"
 *   insn=0x00000000003E2744 string=0x00000000003E2748 ")"
 *   insn=0x00000000003E2750 string=0x00000000003E2754 "A"
 *   insn=0x00000000003E2754 string=0x00000000003E2758 "("
 *   insn=0x00000000003E2754 string=0x00000000003E27DC "\t"
 *   insn=0x00000000003E2758 string=0x00000000003E275C "t"
 *   insn=0x00000000003E275C string=0x00000000003E2760 ""
 *   insn=0x00000000003E2760 string=0x00000000003E2764 "A"
 *   insn=0x00000000003E2764 string=0x00000000003E2768 "h"
 *   insn=0x00000000003E2768 string=0x00000000003E276C "4"
 *   insn=0x00000000003E2770 string=0x00000000003E2774 ""
 *   insn=0x00000000003E2780 string=0x00000000003E2784 "\t@"
 *   insn=0x00000000003E2790 string=0x00000000003E2794 ""
 *   insn=0x00000000003E27A0 string=0x00000000003E27A4 "@"
 *   insn=0x00000000003E27B0 string=0x00000000003E27B4 "GV"
 *   insn=0x00000000003E27B4 string=0x00000000001F80D0 "0'"
 *   insn=0x00000000003E27DC string=0x00000000003E27E0 ")=G"
 *   insn=0x00000000003E27E0 string=0x00000000003E27E4 "!"
 *   insn=0x00000000003E27E8 string=0x00000000003E27EC "\t"
 *   insn=0x00000000003E27E8 string=0x00000000003E2800 "\t"
 *   insn=0x00000000003E27EC string=0x00000000003E27F0 "*"
 *   insn=0x00000000003E27F0 string=0x00000000003E27F4 "\n"
 *   insn=0x00000000003E27FC string=0x00000000003E280C "?"
 *   insn=0x00000000003E2800 string=0x00000000003E2804 "*"
 *   insn=0x00000000003E2804 string=0x00000000003E2808 "\n"
 *   insn=0x00000000003E280C string=0x00000000003E2810 "L"
 *   insn=0x00000000003E2820 string=0x00000000001F62D0 "0'"
 *   insn=0x00000000003E2828 string=0x00000000003E282C ")V"
 *   insn=0x00000000003E282C string=0x00000000003E2830 "A"
 *   insn=0x00000000003E283C string=0x00000000003E288C "h"
 *   insn=0x00000000003E2844 string=0x00000000003E2848 "5"
 *   insn=0x00000000003E284C string=0x00000000003E2850 ""
 *   insn=0x00000000003E285C string=0x00000000003E2860 "\t@"
 *   insn=0x00000000003E286C string=0x00000000003E2870 ""
 *   insn=0x00000000003E287C string=0x00000000003E2880 "@"
 *   insn=0x00000000003E288C string=0x00000000003E2890 "\t"
 *   insn=0x00000000003E2890 string=0x00000000003E2894 ")"
 *   insn=0x00000000003E28A0 string=0x00000000003E28A4 "\t"
 *   insn=0x00000000003E28A0 string=0x00000000003E28D4 "("
 *   insn=0x00000000003E28A4 string=0x00000000003E28A8 ")=G"
 *   insn=0x00000000003E28A8 string=0x00000000003E28AC "!"
 *   insn=0x00000000003E28AC string=0x00000000003E28B0 "i"
 *   insn=0x00000000003E28B0 string=0x00000000003E28B4 "\t"
 *   insn=0x00000000003E28B0 string=0x00000000003E293C "\t"
 *   insn=0x00000000003E28B4 string=0x00000000003E28B8 "*"
 *   insn=0x00000000003E28B8 string=0x00000000003E28BC "\n"
 *   insn=0x00000000003E28C0 string=0x00000000003E28C4 "?"
 *   insn=0x00000000003E28C4 string=0x00000000003E28C8 "l"
 *   insn=0x00000000003E28D4 string=0x00000000003E28D8 "u"
 *   insn=0x00000000003E28D8 string=0x00000000003E28DC ""
 *   insn=0x00000000003E28DC string=0x00000000003E28E0 "A"
 *   insn=0x00000000003E28E0 string=0x00000000003E28E4 "h"
 *   insn=0x00000000003E28E4 string=0x00000000003E28E8 "5"
 *   insn=0x00000000003E28EC string=0x00000000003E28F0 ""
 *   insn=0x00000000003E28FC string=0x00000000003E2900 "\t@"
 *   insn=0x00000000003E290C string=0x00000000003E2910 ""
 *   insn=0x00000000003E291C string=0x00000000003E2920 "@"
 *   insn=0x00000000003E293C string=0x00000000003E2940 "*"
 *   insn=0x00000000003E2940 string=0x00000000003E2944 "\n"
 *   insn=0x00000000003E2944 string=0x00000000003E2948 "?"
 *   insn=0x00000000003E2948 string=0x00000000003E294C ""
 *   insn=0x00000000003E296C string=0x00000000003E2970 "w"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::OverlayMenuButton::~OverlayMenuButton(Caver::OverlayMenuButton *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8
  __int64 v8; // x8
  void *v9; // x0
  _QWORD *v10; // x20
  __int64 v11; // x8
  __int64 v12; // x8
  unsigned int *v13; // x8
  int v14; // w9

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_QWORD *)*((_QWORD *)this + 67);
  *(_QWORD *)this = off_6D05C0;
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
  v5 = (_QWORD *)*((_QWORD *)this + 65);
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
  v8 = *((_QWORD *)this + 62);
  v9 = (void *)(v8 - 24);
  if ( (__int64 *)(v8 - 24) != &qword_6FD2E0 )
  {
    v13 = (unsigned int *)(v8 - 8);
    if ( &pthread_create )
    {
      do
        v14 = __ldaxr(v13);
      while ( __stlxr(v14 - 1, v13) );
    }
    else
    {
      v14 = (*v13)--;
    }
    if ( v14 <= 0 )
      operator delete(v9);
  }
  v10 = (_QWORD *)*((_QWORD *)this + 61);
  *(_QWORD *)this = off_6D0450;
  if ( v10 )
  {
    v11 = v10[1] - 1LL;
    v10[1] = v11;
    if ( !v11 )
    {
      (*(void (__fastcall **)(_QWORD *))(*v10 + 16LL))(v10);
      v12 = v10[2] - 1LL;
      v10[2] = v12;
      if ( !v12 )
        (*(void (__fastcall **)(_QWORD *))(*v10 + 24LL))(v10);
    }
  }
  Caver::GUIButton::~GUIButton(this);
}

