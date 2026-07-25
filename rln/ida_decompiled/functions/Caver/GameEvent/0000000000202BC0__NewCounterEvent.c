/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202BC0
 * Mangled: ._ZN5Caver9GameEvent15NewCounterEventERKSsi
 * Demangled: Caver::GameEvent::NewCounterEvent(std::string const&,int)
 *
 * Callers: 7
 *   0x0000000000272D10  Caver::HeroEntityComponent::HandleDamageCollision(Caver::CollisionShapeComponent *,Caver::CollisionShapeComponent *,Caver::CollisionInfo const&)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *   0x000000000034D490  Caver::GameSceneController::RegisterTreasureCollection(boost::intrusive_ptr<Caver::SceneObject> const&)
 *   0x0000000000357A14  Caver::GameViewController::PortalViewControllerDidGotoLevel(Caver::PortalViewController *,std::string const&)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x0000000000273368  Caver::GameEvent::NewCounterEvent(std::string const&,int)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202BC8 string=0x0000000000202BCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameEvent::NewCounterEvent()
{
  return _ZN5Caver9GameEvent15NewCounterEventERKSsi();
}

