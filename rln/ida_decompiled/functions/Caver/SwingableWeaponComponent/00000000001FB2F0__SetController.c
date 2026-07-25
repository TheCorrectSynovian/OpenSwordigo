/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB2F0
 * Mangled: ._ZN5Caver24SwingableWeaponComponent13SetControllerEPNS_34SwingableWeaponControllerComponentE
 * Demangled: Caver::SwingableWeaponComponent::SetController(Caver::SwingableWeaponControllerComponent *)
 *
 * Callers: 2
 *   0x00000000002C76B8  Caver::SwingableWeaponControllerComponent::SwingableWeaponControllerComponent(void)
 *   0x00000000002C8EEC  Caver::SwingableWeaponControllerComponent::SetWeaponComponent(boost::intrusive_ptr<Caver::SwingableWeaponComponent> const&)
 *
 * Callees: 1
 *   0x00000000002C5978  Caver::SwingableWeaponComponent::SetController(Caver::SwingableWeaponControllerComponent *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB2F8 string=0x00000000001FB2FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponComponent::SetController(
        Caver::SwingableWeaponComponent *this,
        Caver::SwingableWeaponControllerComponent *a2)
{
  return _ZN5Caver24SwingableWeaponComponent13SetControllerEPNS_34SwingableWeaponControllerComponentE(this, a2);
}

