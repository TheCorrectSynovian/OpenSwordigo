/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002023A0
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponentC2Ev_0
 * Demangled: Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(void)
 *
 * Callers: 1
 *   0x00000000002C9364  Caver::SwingableWeaponControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x00000000002C76B8  Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002023A8 string=0x00000000002023AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(
        Caver::SwingableWeaponControllerComponent *this)
{
  return _ZN5Caver34SwingableWeaponControllerComponentC2Ev(this);
}

