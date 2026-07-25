/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000049C9E4
 * Mangled: _ZN5Caver13GUIScrollViewD2Ev
 * Demangled: Caver::GUIScrollView::~GUIScrollView()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000049CB1C  Caver::GUIScrollView::CanBecomeFirstResponder(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 23
 *   insn=0x000000000049C9F0 string=0x000000000049C9F4 "H"
 *   insn=0x000000000049C9F4 string=0x000000000049C9F8 "t"
 *   insn=0x000000000049C9F8 string=0x000000000049C9FC "%B"
 *   insn=0x000000000049C9FC string=0x000000000049CA00 "A"
 *   insn=0x000000000049CA00 string=0x000000000049CA04 "h"
 *   insn=0x000000000049CA04 string=0x000000000049CA08 "4"
 *   insn=0x000000000049CA0C string=0x000000000049CA10 ""
 *   insn=0x000000000049CA1C string=0x000000000049CA20 "\t@"
 *   insn=0x000000000049CA2C string=0x000000000049CA30 ""
 *   insn=0x000000000049CA3C string=0x000000000049CA40 "@"
 *   insn=0x000000000049CA6C string=0x000000000049CA70 "7"
 *   insn=0x000000000049CA80 string=0x000000000049CA84 "H"
 *   insn=0x000000000049CA84 string=0x000000000049CA88 "t"
 *   insn=0x000000000049CA88 string=0x000000000049CA8C "%B"
 *   insn=0x000000000049CA8C string=0x000000000049CA90 "A"
 *   insn=0x000000000049CA90 string=0x000000000049CA94 "h"
 *   insn=0x000000000049CA94 string=0x000000000049CA98 "4"
 *   insn=0x000000000049CA9C string=0x000000000049CAA0 ""
 *   insn=0x000000000049CAAC string=0x000000000049CAB0 "\t@"
 *   insn=0x000000000049CABC string=0x000000000049CAC0 ""
 *   insn=0x000000000049CACC string=0x000000000049CAD0 "@"
 *   insn=0x000000000049CAF0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000049CB14 string=0x000000000049CB18 "k"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::GUIScrollView::~GUIScrollView(Caver::GUIScrollView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 53);
  *(_QWORD *)this = off_6D6380;
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

