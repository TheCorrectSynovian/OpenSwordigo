/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004206D4
 * Mangled: _ZN5Caver12MapPopupViewD2Ev
 * Demangled: Caver::MapPopupView::~MapPopupView()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000042080C  Caver::MapView::MapView(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x00000000004206E0 string=0x00000000004206E4 "("
 *   insn=0x00000000004206E4 string=0x00000000004206E8 "t~@"
 *   insn=0x00000000004206E8 string=0x00000000004206EC "YC"
 *   insn=0x00000000004206EC string=0x00000000004206F0 "A"
 *   insn=0x00000000004206F0 string=0x00000000004206F4 "h"
 *   insn=0x00000000004206F4 string=0x00000000004206F8 "4"
 *   insn=0x00000000004206FC string=0x0000000000420700 ""
 *   insn=0x000000000042070C string=0x0000000000420710 "\t@"
 *   insn=0x000000000042071C string=0x0000000000420720 ""
 *   insn=0x000000000042072C string=0x0000000000420730 "@"
 *   insn=0x0000000000420758 string=0x000000000042075C "Z"
 *   insn=0x0000000000420770 string=0x0000000000420774 "("
 *   insn=0x0000000000420774 string=0x0000000000420778 "t~@"
 *   insn=0x0000000000420778 string=0x000000000042077C "YC"
 *   insn=0x000000000042077C string=0x0000000000420780 "A"
 *   insn=0x0000000000420780 string=0x0000000000420784 "h"
 *   insn=0x0000000000420784 string=0x0000000000420788 "4"
 *   insn=0x000000000042078C string=0x0000000000420790 ""
 *   insn=0x000000000042079C string=0x00000000004207A0 "\t@"
 *   insn=0x00000000004207AC string=0x00000000004207B0 ""
 *   insn=0x00000000004207BC string=0x00000000004207C0 "@"
 *   insn=0x00000000004207E0 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000420804 string=0x0000000000420808 "/"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::MapPopupView::~MapPopupView(Caver::MapPopupView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 31);
  *(_QWORD *)this = off_6D2C00;
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
  Caver::GUIView::~GUIView(this);
}

