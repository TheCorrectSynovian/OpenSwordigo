/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFBE0
 * Mangled: ._ZN5Caver24SwingableWeaponComponentC2Ev_0
 * Demangled: Caver::SwingableWeaponComponent::SwingableWeaponComponent(void)
 *
 * Callers: 1
 *   0x000000000024FC78  Caver::SwingableWeaponComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002C3464  Caver::SwingableWeaponComponent::SwingableWeaponComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFBE8 string=0x00000000001FFBEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponComponent::SwingableWeaponComponent(Caver::SwingableWeaponComponent *this)
{
  return _ZN5Caver24SwingableWeaponComponentC2Ev(this);
}

