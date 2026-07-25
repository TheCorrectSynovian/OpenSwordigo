/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E037C
 * Mangled: _ZN5Caver7ManaBarD2Ev
 * Demangled: Caver::ManaBar::~ManaBar()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x00000000003E04B4  Caver::OverlayButton::OverlayButton(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 24
 *   insn=0x00000000003E0388 string=0x00000000003E038C "("
 *   insn=0x00000000003E038C string=0x00000000003E0390 "t~@"
 *   insn=0x00000000003E0390 string=0x00000000003E0394 ""
 *   insn=0x00000000003E0394 string=0x00000000003E0398 "A"
 *   insn=0x00000000003E0398 string=0x00000000003E039C "h"
 *   insn=0x00000000003E039C string=0x00000000003E03A0 "4"
 *   insn=0x00000000003E03A4 string=0x00000000003E03A8 ""
 *   insn=0x00000000003E03B4 string=0x00000000003E03B8 "\t@"
 *   insn=0x00000000003E03C4 string=0x00000000003E03C8 ""
 *   insn=0x00000000003E03D4 string=0x00000000003E03D8 "@"
 *   insn=0x00000000003E0400 string=0x00000000003E0404 "0"
 *   insn=0x00000000003E0418 string=0x00000000003E041C "("
 *   insn=0x00000000003E041C string=0x00000000003E0420 "t~@"
 *   insn=0x00000000003E0420 string=0x00000000003E0424 ""
 *   insn=0x00000000003E0424 string=0x00000000003E0428 "A"
 *   insn=0x00000000003E0428 string=0x00000000003E042C "h"
 *   insn=0x00000000003E042C string=0x00000000003E0430 "4"
 *   insn=0x00000000003E0434 string=0x00000000003E0438 ""
 *   insn=0x00000000003E0444 string=0x00000000003E0448 "\t@"
 *   insn=0x00000000003E0454 string=0x00000000003E0458 ""
 *   insn=0x00000000003E0464 string=0x00000000003E0468 "@"
 *   insn=0x00000000003E0474 string=0x00000000003E0478 "nz"
 *   insn=0x00000000003E0488 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000003E0490 string=0x00000000003E0494 "gz"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::ManaBar::~ManaBar(Caver::ManaBar *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 31);
  *(_QWORD *)this = off_6D02F0;
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

