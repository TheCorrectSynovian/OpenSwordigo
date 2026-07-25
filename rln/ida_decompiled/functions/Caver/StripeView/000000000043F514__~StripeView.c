/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043F514
 * Mangled: _ZN5Caver10StripeViewD2Ev
 * Demangled: Caver::StripeView::~StripeView()
 *
 * Callers: 1
 *   0x00000000001F3670  Caver::StripeView::~StripeView()
 *
 * Callees: 6
 *   0x00000000001F3670  Caver::StripeView::~StripeView()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC000  Caver::GUIFrameView::~GUIFrameView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 27
 *   insn=0x000000000043F524 string=0x000000000043F528 "H"
 *   insn=0x000000000043F528 string=0x000000000043F52C "t"
 *   insn=0x000000000043F52C string=0x000000000043F530 ""
 *   insn=0x000000000043F530 string=0x000000000043F534 "A"
 *   insn=0x000000000043F534 string=0x000000000043F538 "h"
 *   insn=0x000000000043F538 string=0x000000000043F53C "4"
 *   insn=0x000000000043F53C string=0x000000000043F580 "t"
 *   insn=0x000000000043F540 string=0x000000000043F544 ""
 *   insn=0x000000000043F550 string=0x000000000043F554 "\t@"
 *   insn=0x000000000043F560 string=0x000000000043F564 ""
 *   insn=0x000000000043F570 string=0x000000000043F574 "@"
 *   insn=0x000000000043F580 string=0x000000000043F584 "4"
 *   insn=0x000000000043F588 string=0x000000000043F58C ""
 *   insn=0x000000000043F598 string=0x000000000043F59C "\t@"
 *   insn=0x000000000043F5A8 string=0x000000000043F5AC ""
 *   insn=0x000000000043F5B8 string=0x000000000043F5BC "@"
 *   insn=0x000000000043F5D8 string=0x00000000001FC000 "0'"
 *   insn=0x000000000043F5E8 string=0x000000000043F5EC "5"
 *   insn=0x000000000043F5F0 string=0x000000000043F5F4 ""
 *   insn=0x000000000043F600 string=0x000000000043F604 "\t@"
 *   insn=0x000000000043F610 string=0x000000000043F614 ""
 *   insn=0x000000000043F620 string=0x000000000043F624 "@"
 *   insn=0x000000000043F630 string=0x000000000043F634 "s"
 *   insn=0x000000000043F63C string=0x000000000043F640 "C;"
 *   insn=0x000000000043F650 string=0x000000000043F654 ""
 *   insn=0x000000000043F654 string=0x00000000001F3670 "P'"
 *   insn=0x000000000043F664 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::StripeView::~StripeView(Caver::StripeView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 37);
  *(_QWORD *)this = off_6D3C10;
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
  v5 = (_QWORD *)*((_QWORD *)this + 35);
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
  Caver::GUIFrameView::~GUIFrameView(this);
}

