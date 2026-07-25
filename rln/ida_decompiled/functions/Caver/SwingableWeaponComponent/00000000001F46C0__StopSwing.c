/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F46C0
 * Mangled: ._ZN5Caver24SwingableWeaponComponent9StopSwingEv
 * Demangled: Caver::SwingableWeaponComponent::StopSwing(void)
 *
 * Callers: 1
 *   0x00000000002C90B4  Caver::SwingableWeaponControllerComponent::StopSwing(void)
 *
 * Callees: 1
 *   0x00000000002C5EF8  Caver::SwingableWeaponComponent::StopSwing(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F46C8 string=0x00000000001F46CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponComponent::StopSwing(Caver::SwingableWeaponComponent *this)
{
  return _ZN5Caver24SwingableWeaponComponent9StopSwingEv(this);
}

