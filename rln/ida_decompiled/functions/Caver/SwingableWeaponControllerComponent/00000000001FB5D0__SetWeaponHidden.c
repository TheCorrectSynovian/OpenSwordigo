/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB5D0
 * Mangled: ._ZN5Caver34SwingableWeaponControllerComponent15SetWeaponHiddenEb
 * Demangled: Caver::SwingableWeaponControllerComponent::SetWeaponHidden(bool)
 *
 * Callers: 4
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x000000000025F148  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *   0x00000000002600A4  Caver::CharControllerComponent::BeginCasting(boost::intrusive_ptr<Caver::SkillComponent> const&)
 *   0x000000000026064C  sub_26064C
 *
 * Callees: 1
 *   0x00000000002C8EEC  Caver::SwingableWeaponControllerComponent::SetWeaponComponent(boost::intrusive_ptr<Caver::SwingableWeaponComponent> const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB5D4 string=0x00000000002C9070 "\tL@"
 *   insn=0x00000000001FB5D8 string=0x00000000001FB5DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::SwingableWeaponControllerComponent::SetWeaponHidden(
        Caver::SwingableWeaponControllerComponent *this)
{
  JUMPOUT(0x2C9070);
}

