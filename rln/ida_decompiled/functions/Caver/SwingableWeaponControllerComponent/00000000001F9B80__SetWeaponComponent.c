/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9B80
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponent18SetWeaponComponentERKN5boost13intrusive_ptrINS_24SwingableWeaponComponentEEE
 * Demangled: Caver::SwingableWeaponControllerComponent::SetWeaponComponent(boost::intrusive_ptr<Caver::SwingableWeaponComponent> const&)
 *
 * Callers: 2
 *   0x000000000029DC48  Caver::SkellyMonsterControllerComponent::CreateWeapons(void)
 *   0x00000000002C8AEC  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *
 * Callees: 1
 *   0x00000000002C8EEC  Caver::SwingableWeaponControllerComponent::SetWeaponComponent(boost::intrusive_ptr<Caver::SwingableWeaponComponent> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9B88 string=0x00000000001F9B8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SwingableWeaponControllerComponent::SetWeaponComponent(
        Caver::SwingableWeaponControllerComponent *a1)
{
  return _ZN5Caver34SwingableWeaponControllerComponent18SetWeaponComponentERKN5boost13intrusive_ptrINS_24SwingableWeaponComponentEEE(a1);
}

