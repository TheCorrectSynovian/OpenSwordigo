/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3F40
 * Mangled: ._ZN5Caver20WeaponTrailComponent10ResetTrailEv
 * Demangled: Caver::WeaponTrailComponent::ResetTrail(void)
 *
 * Callers: 2
 *   0x00000000002C5980  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *   0x00000000002C5EF8  Caver::SwingableWeaponComponent::StopSwing(void)
 *
 * Callees: 1
 *   0x00000000002CCF38  Caver::WeaponTrailComponent::ResetTrail(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3F48 string=0x00000000001F3F4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::WeaponTrailComponent::ResetTrail(Caver::WeaponTrailComponent *this)
{
  return _ZN5Caver20WeaponTrailComponent10ResetTrailEv(this);
}

