/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201BC0
 * Mangled: ._ZN5Caver20HeroEquipmentManager4InitERKN5boost10shared_ptrINS_9GameStateEEERKNS1_13intrusive_ptrINS_11SceneObjectEEE
 * Demangled: Caver::HeroEquipmentManager::Init(boost::shared_ptr<Caver::GameState> const&,boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Callers: 2
 *   0x000000000034965C  Caver::GameSceneController::AddHeroObjectToScene(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x0000000000368C74  Caver::HeroEquipmentManager::Init(boost::shared_ptr<Caver::GameState> const&,boost::intrusive_ptr<Caver::SceneObject> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201BC8 string=0x0000000000201BCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::HeroEquipmentManager::Init()
{
  return _ZN5Caver20HeroEquipmentManager4InitERKN5boost10shared_ptrINS_9GameStateEEERKNS1_13intrusive_ptrINS_11SceneObjectEEE();
}

