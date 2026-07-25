/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDFE0
 * Mangled: ._ZN5Caver11SceneObject17RemoveChildObjectEPS0_b
 * Demangled: Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *
 * Callers: 11
 *   0x000000000022AECC  Caver::ObjectLinkControllerComponent::DestroyLink(void)
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *   0x000000000025DAE0  Caver::CharControllerComponent::DropWithoutAnimation(void)
 *   0x000000000025F148  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *   0x000000000029E624  Caver::SkellyMonsterControllerComponent::HandleMessage(int,void *)
 *   0x00000000002C8AEC  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *   0x00000000002C8EEC  Caver::SwingableWeaponControllerComponent::SetWeaponComponent(boost::intrusive_ptr<Caver::SwingableWeaponComponent> const&)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000004653C4  Caver::Scene::RemoveObject(boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x00000000004770DC  sub_4770DC
 *
 * Callees: 1
 *   0x0000000000473558  Caver::SceneObject::RemoveChildObject(Caver::SceneObject*,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDFE8 string=0x00000000001FDFEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::RemoveChildObject(Caver::SceneObject *this, Caver::SceneObject *a2, bool a3)
{
  return _ZN5Caver11SceneObject17RemoveChildObjectEPS0_b(this, a2, a3);
}

