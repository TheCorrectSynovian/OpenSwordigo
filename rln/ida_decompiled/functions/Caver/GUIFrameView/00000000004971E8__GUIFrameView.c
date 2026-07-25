/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004971E8
 * Mangled: _ZN5Caver12GUIFrameViewC2Ev
 * Demangled: Caver::GUIFrameView::GUIFrameView(void)
 *
 * Callers: 2
 *   0x00000000001F7430  Caver::GUIFrameView::GUIFrameView(void)
 *   0x00000000001FCEA0  Caver::GUIFrameView::GUIFrameView(void)
 *
 * Callees: 1
 *   0x0000000000203B40  Caver::GUIView::GUIView(void)
 *
 * Referenced strings: 6
 *   insn=0x00000000004971F4 string=0x00000000004971F8 "R"
 *   insn=0x00000000004971FC string=0x0000000000497200 ""
 *   insn=0x0000000000497200 string=0x0000000000497204 "\t"
 *   insn=0x000000000049720C string=0x0000000000497210 "A"
 *   insn=0x0000000000497210 string=0x0000000000497214 "i"
 *   insn=0x0000000000497214 string=0x0000000000497218 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIFrameView::GUIFrameView(Caver::GUIFrameView *this)
{
  __int64 result; // x0

  result = Caver::GUIView::GUIView(this);
  *((_QWORD *)this + 31) = 0;
  *((_QWORD *)this + 32) = 0;
  *((_QWORD *)this + 30) = 0;
  *(_DWORD *)((char *)this + 233) = -1;
  *(_QWORD *)this = off_6D5DC0;
  *((_BYTE *)this + 264) = 0;
  return result;
}

