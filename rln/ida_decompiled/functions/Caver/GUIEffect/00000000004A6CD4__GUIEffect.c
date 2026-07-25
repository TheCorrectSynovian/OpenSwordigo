/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A6CD4
 * Mangled: _ZN5Caver9GUIEffectC2Ev
 * Demangled: Caver::GUIEffect::GUIEffect(void)
 *
 * Callers: 1
 *   0x00000000001FDB50  Caver::GUIEffect::GUIEffect(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000004A6CFC string=0x00000000004A6D00 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIEffect::GUIEffect(__int64 this)
{
  *(_BYTE *)this = 0;
  *(_QWORD *)(this + 16) = 0;
  *(_QWORD *)(this + 24) = 0;
  *(_QWORD *)(this + 8) = 0;
  *(_BYTE *)(this + 64) = 0;
  *(_QWORD *)(this + 56) = 0;
  *(_QWORD *)(this + 104) = 0;
  *(_QWORD *)(this + 92) = 0;
  *(_QWORD *)(this + 84) = 0;
  *(_QWORD *)(this + 68) = 0xFF0000003E99999ALL;
  *(_QWORD *)(this + 76) = 0;
  return this;
}

