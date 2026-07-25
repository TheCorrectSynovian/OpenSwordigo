/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB490
 * Mangled: ._ZN5Caver11SceneObject13SetIdentifierERKSs
 * Demangled: Caver::SceneObject::SetIdentifier(std::string const&)
 *
 * Callers: 10
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x00000000002C5980  Caver::SwingableWeaponComponent::CreateGlowObject(void)
 *   0x00000000002C8AEC  Caver::SwingableWeaponControllerComponent::CreateWeapon(void)
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000460DFC  Caver::ObjectTemplate::TemplateFromObject(std::string const&,Caver::SceneObject *)
 *   0x0000000000464574  Caver::Scene::AddObject(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000469290  sub_469290
 *   0x0000000000472850  Caver::SceneObject::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x000000000047301C  Caver::SceneObject::SetIdentifier(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB498 string=0x00000000001FB49C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::SceneObject::SetIdentifier()
{
  return _ZN5Caver11SceneObject13SetIdentifierERKSs();
}

