/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000042D1C4
 * Mangled: _ZN5Caver9PauseViewD2Ev
 * Demangled: Caver::PauseView::~PauseView()
 *
 * Callers: 0
 *
 * Callees: 5
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FEE30  Caver::GUIView::~GUIView()
 *   0x000000000020E1A4  Caver::NewCaverShell(int,char **)
 *   0x000000000042D2FC  Caver::PauseView::DidMoveToWindow(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 21
 *   insn=0x000000000042D1D4 string=0x000000000042D1D8 "t"
 *   insn=0x000000000042D1D8 string=0x000000000042D1DC ""
 *   insn=0x000000000042D1DC string=0x000000000042D1E0 "A"
 *   insn=0x000000000042D1E0 string=0x000000000042D1E4 "h"
 *   insn=0x000000000042D1E4 string=0x000000000042D1E8 "4"
 *   insn=0x000000000042D1EC string=0x000000000042D1F0 ""
 *   insn=0x000000000042D1FC string=0x000000000042D200 "\t@"
 *   insn=0x000000000042D20C string=0x000000000042D210 ""
 *   insn=0x000000000042D21C string=0x000000000042D220 "@"
 *   insn=0x000000000042D24C string=0x000000000042D250 "?"
 *   insn=0x000000000042D264 string=0x000000000042D268 "t"
 *   insn=0x000000000042D268 string=0x000000000042D26C ""
 *   insn=0x000000000042D26C string=0x000000000042D270 "A"
 *   insn=0x000000000042D270 string=0x000000000042D274 "h"
 *   insn=0x000000000042D274 string=0x000000000042D278 "4"
 *   insn=0x000000000042D27C string=0x000000000042D280 ""
 *   insn=0x000000000042D28C string=0x000000000042D290 "\t@"
 *   insn=0x000000000042D29C string=0x000000000042D2A0 ""
 *   insn=0x000000000042D2AC string=0x000000000042D2B0 "@"
 *   insn=0x000000000042D2D0 string=0x00000000001F72B0 "0'"
 *   insn=0x000000000042D2F4 string=0x000000000042D2F8 "sQ"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::PauseView::~PauseView(Caver::PauseView *this)
{
  _QWORD *v2; // x20
  __int64 v3; // x8
  __int64 v4; // x8

  v2 = (_QWORD *)*((_QWORD *)this + 32);
  *(_QWORD *)this = off_6D3340;
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

