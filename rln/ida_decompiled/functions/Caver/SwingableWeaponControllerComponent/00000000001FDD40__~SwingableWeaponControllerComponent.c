/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDD40
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponentD2Ev
 * Demangled: Caver::SwingableWeaponControllerComponent::~SwingableWeaponControllerComponent()
 *
 * Callers: 1
 *   0x00000000002C76B8  Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(void)
 *
 * Callees: 1
 *   0x00000000002C76B8  Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDD48 string=0x00000000001FDD4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SwingableWeaponControllerComponent::~SwingableWeaponControllerComponent(
        Caver::SwingableWeaponControllerComponent *this)
{
  JUMPOUT(0x2C798C);
}

