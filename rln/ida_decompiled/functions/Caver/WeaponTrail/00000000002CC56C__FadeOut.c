/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC56C
 * Mangled: _ZN5Caver11WeaponTrail7FadeOutEf
 * Demangled: Caver::WeaponTrail::FadeOut(float)
 *
 * Callers: 1
 *   0x0000000000201690  Caver::WeaponTrail::FadeOut(float)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002CC56C string=0x00000000002CC570 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrail::FadeOut(__int64 this, float a2)
{
  *(_BYTE *)(this + 36) = 1;
  *(float *)(this + 40) = a2;
  return this;
}

