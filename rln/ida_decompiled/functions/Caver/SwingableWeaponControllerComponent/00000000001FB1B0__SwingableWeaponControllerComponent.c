/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB1B0
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponentC2Ev
 * Demangled: Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000024FCB8  Caver::SwingableWeaponControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x00000000002C76B8  Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB1B8 string=0x00000000001FB1BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(
        Caver::SwingableWeaponControllerComponent *this)
{
  return _ZN5Caver34SwingableWeaponControllerComponentC2Ev(this);
}

