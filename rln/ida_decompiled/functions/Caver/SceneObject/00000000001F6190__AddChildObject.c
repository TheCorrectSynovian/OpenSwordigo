/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6190
 * Mangled: ._ZN5Caver11SceneObject14AddChildObjectERKN5boost13intrusive_ptrIS0_EE
 * Demangled: Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 11
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000025F148  Caver::CharControllerComponent::Pickup(Caver::SceneObject *,bool)
 *   0x000000000028CD94  Caver::ProjectileControllerComponent::CreateBlast(void)
 *   0x000000000028E658  Caver::SkillComponent::BeginCasting(void)
 *   0x000000000028EC2C  Caver::SkillComponent::FinishCasting(void)
 *   0x000000000029E624  Caver::SkellyMonsterControllerComponent::HandleMessage(int,void *)
 *   0x00000000002C8AEC  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *   0x00000000002C8EEC  Caver::SwingableWeaponControllerComponent::SetWeaponComponent(boost::intrusive_ptr<Caver::SwingableWeaponComponent> const&)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x0000000000369AD0  Caver::HeroEquipmentManager::ApplyArmorTrinket(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000004770DC  sub_4770DC
 *
 * Callees: 1
 *   0x0000000000473374  Caver::SceneObject::AddChildObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6198 string=0x00000000001F619C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SceneObject::AddChildObject()
{
  return _ZN5Caver11SceneObject14AddChildObjectERKN5boost13intrusive_ptrIS0_EE();
}

