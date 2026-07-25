/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004AAE20
 * Mangled: _ZN5Caver15GUITexturedRectC2Ev
 * Demangled: Caver::GUITexturedRect::GUITexturedRect(void)
 *
 * Callers: 1
 *   0x00000000001FD850  Caver::GUITexturedRect::GUITexturedRect(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004AAE30 string=0x00000000004AAE34 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUITexturedRect::GUITexturedRect(__int64 this)
{
  *(_QWORD *)this = 0;
  *(_BYTE *)(this + 8) = 0;
  *(_QWORD *)(this + 20) = 0;
  *(_QWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 28) = -1;
  return this;
}

