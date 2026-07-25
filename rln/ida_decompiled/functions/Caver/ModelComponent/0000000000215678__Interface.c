/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000215678
 * Mangled: _ZN5Caver14ModelComponent9InterfaceEv
 * Demangled: Caver::ModelComponent::Interface(void)
 *
 * Callers: 23
 *   0x00000000002155A8  Caver::ComponentOutlet<Caver::ModelComponent>::Interface(void)
 *   0x0000000000215678  Caver::ModelComponent::Interface(void)
 *   0x000000000022668C  Caver::ModelComponent::ImplementsInterface(long)
 *   0x00000000002266A0  Caver::ModelComponent::RegisterInterfaces(Caver::ComponentManager *)
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x00000000002354E4  Caver::ShadowComponent::Prepare(void)
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x0000000000255C24  `non-virtual thunk to'Caver::BreakableObjectComponent::Update(float)
 *   0x0000000000255CB4  Caver::BreakableObjectComponent::FlashModel(Caver::Color const&,float)
 *   0x0000000000255D50  Caver::BreakableObjectComponent::HandleMessage(int,void *)
 *   0x0000000000268CD8  Caver::EntityComponent::RegisterLibrary(void)
 *   0x0000000000268EB4  Caver::EntityComponent::Update(float)
 *   0x0000000000285DC0  Caver::MagicBombComponent::Prepare(void)
 *   0x000000000028C0B0  Caver::ObjectModifierComponent::Prepare(void)
 *   0x000000000029A028  Caver::MonsterDeathControllerComponent::KillMonster(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x00000000002CB384  Caver::WeaponGlowComponent::Prepare(void)
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000039DA3C  Caver::ProfilePanelView::AnimateIn(void)
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *   0x00000000004665D4  Caver::Scene::DrawModels(Caver::RenderingContext *,Caver::Matrix4 const&,bool,bool)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 (__fastcall *__fastcall Caver::ModelComponent::Interface(
        Caver::ModelComponent *this))(Caver::ModelComponent *__hidden this)
{
  return Caver::ModelComponent::Interface;
}

