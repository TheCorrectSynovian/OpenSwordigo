/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201690
 * Mangled: ._ZN5Caver11WeaponTrail7FadeOutEf
 * Demangled: Caver::WeaponTrail::FadeOut(float)
 *
 * Callers: 1
 *   0x00000000002C5F98  Caver::SwingableWeaponComponent::Update(float)
 *
 * Callees: 1
 *   0x00000000002CC56C  Caver::WeaponTrail::FadeOut(float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201698 string=0x000000000020169C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrail::FadeOut(Caver::WeaponTrail *this, float a2)
{
  return _ZN5Caver11WeaponTrail7FadeOutEf(this, a2);
}

