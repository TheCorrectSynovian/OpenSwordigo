/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201620
 * Mangled: ._ZN5Caver24SwingableWeaponComponent16CreateGlowObjectEv
 * Demangled: Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *
 * Callers: 1
 *   0x00000000002C4F40  Caver::SwingableWeaponComponent::SetGlowIntensity(float)
 *
 * Callees: 1
 *   0x00000000002C5980  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201628 string=0x000000000020162C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponComponent::CreateGlowObject(Caver::SwingableWeaponComponent *this)
{
  return _ZN5Caver24SwingableWeaponComponent16CreateGlowObjectEv(this);
}

