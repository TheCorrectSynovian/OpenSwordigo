/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CC57C
 * Mangled: _ZN5Caver11WeaponTrail6FadeInEf
 * Demangled: Caver::WeaponTrail::FadeIn(float)
 *
 * Callers: 1
 *   0x00000000001FD980  Caver::WeaponTrail::FadeIn(float)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WeaponTrail::FadeIn(__int64 this, float a2)
{
  *(_DWORD *)(this + 48) = 0;
  *(float *)(this + 52) = a2;
  return this;
}

