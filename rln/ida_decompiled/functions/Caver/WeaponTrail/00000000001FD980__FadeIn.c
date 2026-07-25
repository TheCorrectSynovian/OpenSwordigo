/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD980
 * Mangled: ._ZN5Caver11WeaponTrail6FadeInEf
 * Demangled: Caver::WeaponTrail::FadeIn(float)
 *
 * Callers: 1
 *   0x00000000002C5980  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *
 * Callees: 1
 *   0x00000000002CC57C  Caver::WeaponTrail::FadeIn(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD988 string=0x00000000001FD98C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrail::FadeIn(Caver::WeaponTrail *this, float a2)
{
  return _ZN5Caver11WeaponTrail6FadeInEf(this, a2);
}

