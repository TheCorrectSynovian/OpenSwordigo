/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000459F04
 * Mangled: _ZN5Caver12LightOverlayC2Ev
 * Demangled: Caver::LightOverlay::LightOverlay(void)
 *
 * Callers: 1
 *   0x0000000000203B30  Caver::LightOverlay::LightOverlay(void)
 *
 * Callees: 4
 *   0x00000000001F4F60  operator delete[](void *)
 *   0x00000000001FF8B0  Caver::VertexArrayObject::VertexArrayObject(void)
 *   0x0000000000459F58  Caver::LightOverlay::SetFrame(Caver::Rectangle const&)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 7
 *   insn=0x0000000000459F14 string=0x0000000000459F18 "`""
 *   insn=0x0000000000459F1C string=0x0000000000459F20 "h~"
 *   insn=0x0000000000459F20 string=0x0000000000459F24 "c"
 *   insn=0x0000000000459F40 string=0x0000000000459F44 "h"
 *   insn=0x0000000000459F4C string=0x00000000001F4F60 "P'"
 *   insn=0x0000000000459F50 string=0x0000000000459F54 "\"
 *   insn=0x0000000000459F54 string=0x0000000000459F58 "!"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::LightOverlay::LightOverlay(Caver::LightOverlay *this)
{
  __int64 result; // x0

  *(_QWORD *)this = 0;
  *((_QWORD *)this + 1) = 0;
  *((_QWORD *)this + 4) = 0xFF00000000000000LL;
  *((_QWORD *)this + 5) = 0;
  result = Caver::VertexArrayObject::VertexArrayObject((Caver::LightOverlay *)((char *)this + 72));
  *((_BYTE *)this + 144) = 0;
  *((_QWORD *)this + 19) = 0;
  return result;
}

