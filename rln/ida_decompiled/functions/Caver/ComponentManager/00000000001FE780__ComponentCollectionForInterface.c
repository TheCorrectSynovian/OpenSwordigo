/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE780
 * Mangled: ._ZN5Caver16ComponentManager31ComponentCollectionForInterfaceEl
 * Demangled: Caver::ComponentManager::ComponentCollectionForInterface(long)
 *
 * Callers: 12
 *   0x000000000024723C  Caver::ComponentManager::RegisterComponentInterface(long,Caver::Component *)
 *   0x000000000026C0F0  Caver::EntityControllerComponent::Update(float)
 *   0x00000000002784A0  Caver::ItemDropComponent::CreateItemObjects(void)
 *   0x0000000000299B44  Caver::MonsterControllerComponent::FindNearestEnemy(void)
 *   0x0000000000348568  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::GameOverView,Caver::GameOverView>(boost::shared_ptr<Caver::GameOverView> const*,Caver::GameOverView *)
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000466454  Caver::Scene::DrawGroundMeshes(Caver::RenderingContext *,Caver::Matrix4 const&,bool)
 *   0x00000000004665D4  Caver::Scene::DrawModels(Caver::RenderingContext *,Caver::Matrix4 const&,bool,bool)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000468E8C  Caver::Scene::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x000000000024731C  Caver::ComponentManager::ComponentCollectionForInterface(long)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE788 string=0x00000000001FE78C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ComponentManager::ComponentCollectionForInterface(Caver::ComponentManager *this, __int64 a2)
{
  return _ZN5Caver16ComponentManager31ComponentCollectionForInterfaceEl(this, a2);
}

