/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000038D0E0
 * Mangled: _ZN5Caver11CreditsViewD2Ev
 * Demangled: Caver::CreditsView::~CreditsView()
 *
 * Callers: 1
 *   0x00000000001FCEF0  Caver::CreditsView::~CreditsView()
 *
 * Callees: 6
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FCEF0  Caver::CreditsView::~CreditsView()
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000038D248  Caver::CreditsView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 26
 *   insn=0x000000000038D0F4 string=0x000000000038D0F8 "t"
 *   insn=0x000000000038D0F8 string=0x000000000038D0FC "uG"
 *   insn=0x000000000038D0FC string=0x000000000038D100 "A"
 *   insn=0x000000000038D100 string=0x000000000038D104 "h"
 *   insn=0x000000000038D104 string=0x000000000038D108 "4"
 *   insn=0x000000000038D108 string=0x000000000038D14C "t~@"
 *   insn=0x000000000038D10C string=0x000000000038D110 ""
 *   insn=0x000000000038D11C string=0x000000000038D120 "\t@"
 *   insn=0x000000000038D12C string=0x000000000038D130 ""
 *   insn=0x000000000038D13C string=0x000000000038D140 "@"
 *   insn=0x000000000038D14C string=0x000000000038D150 "4"
 *   insn=0x000000000038D154 string=0x000000000038D158 ""
 *   insn=0x000000000038D164 string=0x000000000038D168 "\t@"
 *   insn=0x000000000038D174 string=0x000000000038D178 ""
 *   insn=0x000000000038D184 string=0x000000000038D188 "@"
 *   insn=0x000000000038D1A0 string=0x000000000038D1A4 "#"
 *   insn=0x000000000038D1B4 string=0x000000000038D1B8 "5"
 *   insn=0x000000000038D1BC string=0x000000000038D1C0 ""
 *   insn=0x000000000038D1CC string=0x000000000038D1D0 "\t@"
 *   insn=0x000000000038D1DC string=0x000000000038D1E0 ""
 *   insn=0x000000000038D1EC string=0x000000000038D1F0 "@"
 *   insn=0x000000000038D208 string=0x000000000038D20C "P"
 *   insn=0x000000000038D21C string=0x000000000038D220 "4"
 *   insn=0x000000000038D220 string=0x00000000001FCEF0 "0'"
 *   insn=0x000000000038D22C string=0x000000000038D230 " "
 *   insn=0x000000000038D230 string=0x00000000001F72B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::CreditsView::~CreditsView(Caver::CreditsView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8
  _QWORD *v5; // x20
  __int64 v6; // x8
  __int64 v7; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 33);
  *(_QWORD *)this = off_6CDA70;
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
  v5 = (_QWORD *)*((_QWORD *)this + 31);
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
  Caver::GUIView::~GUIView(this);
}

