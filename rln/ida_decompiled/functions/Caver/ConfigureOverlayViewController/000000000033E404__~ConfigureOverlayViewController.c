/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000033E404
 * Mangled: _ZN5Caver30ConfigureOverlayViewControllerD2Ev
 * Demangled: Caver::ConfigureOverlayViewController::~ConfigureOverlayViewController()
 *
 * Callers: 1
 *   0x0000000000200930  Caver::ConfigureOverlayViewController::~ConfigureOverlayViewController()
 *
 * Callees: 6
 *   0x00000000001F6590  Caver::GUIViewController::~GUIViewController()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x0000000000200930  Caver::ConfigureOverlayViewController::~ConfigureOverlayViewController()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000033E574  Caver::GUIViewController::NewLoadingView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 28
 *   insn=0x000000000033E410 string=0x000000000033E414 "("
 *   insn=0x000000000033E418 string=0x000000000033E41C "-G"
 *   insn=0x000000000033E41C string=0x000000000033E420 "t6@"
 *   insn=0x000000000033E420 string=0x000000000033E424 "\tA"
 *   insn=0x000000000033E424 string=0x000000000033E428 "!"
 *   insn=0x000000000033E428 string=0x000000000033E42C "i"
 *   insn=0x000000000033E42C string=0x000000000033E430 "h&"
 *   insn=0x000000000033E430 string=0x000000000033E434 "4"
 *   insn=0x000000000033E434 string=0x000000000033E478 "t.@"
 *   insn=0x000000000033E438 string=0x000000000033E43C ""
 *   insn=0x000000000033E448 string=0x000000000033E44C "\t@"
 *   insn=0x000000000033E458 string=0x000000000033E45C ""
 *   insn=0x000000000033E468 string=0x000000000033E46C "@"
 *   insn=0x000000000033E478 string=0x000000000033E47C "4"
 *   insn=0x000000000033E480 string=0x000000000033E484 ""
 *   insn=0x000000000033E490 string=0x000000000033E494 "\t@"
 *   insn=0x000000000033E4A0 string=0x000000000033E4A4 ""
 *   insn=0x000000000033E4B0 string=0x000000000033E4B4 "@"
 *   insn=0x000000000033E4CC string=0x000000000033E4D0 "0"
 *   insn=0x000000000033E4D0 string=0x00000000001F6590 "0'"
 *   insn=0x000000000033E4E0 string=0x000000000033E4E4 "5"
 *   insn=0x000000000033E4E8 string=0x000000000033E4EC ""
 *   insn=0x000000000033E4F8 string=0x000000000033E4FC "\t@"
 *   insn=0x000000000033E508 string=0x000000000033E50C ""
 *   insn=0x000000000033E518 string=0x000000000033E51C "@"
 *   insn=0x000000000033E558 string=0x000000000033E55C "U"
 *   insn=0x000000000033E55C string=0x00000000001F72B0 "0'"
 *   insn=0x000000000033E564 string=0x000000000033E568 "R"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ConfigureOverlayViewController::~ConfigureOverlayViewController(
        Caver::ConfigureOverlayViewController *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 13);
  *(_QWORD *)this = off_6CAA60;
  *((_QWORD *)this + 9) = off_6CAAD8;
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
  v5 = (_QWORD *)*((_QWORD *)this + 11);
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
  Caver::GUIViewController::~GUIViewController(this);
}

