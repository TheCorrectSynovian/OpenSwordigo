/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F45A0
 * Mangled: ._ZN5Caver11SceneObject12AddComponentEPNS_9ComponentE
 * Demangled: Caver::SceneObject::AddComponent(Caver::Component *)
 *
 * Callers: 26
 *   0x00000000002231BC  sub_2231BC
 *   0x00000000002283D8  sub_2283D8
 *   0x000000000022A4BC  Caver::ObjectLinkControllerComponent::RegisterLibrary(void)
 *   0x000000000022EAB8  Caver::OverlayTextComponent::CombatTextFromObject(std::string const&,boost::intrusive_ptr<Caver::SceneObject> const&,Caver::Vector3 const&,float)
 *   0x00000000002303C4  Caver::PortalComponent::RegisterLibrary(void)
 *   0x000000000023D4BC  Caver::TextBubbleComponent::SetHandleTouches(bool)
 *   0x0000000000241318  sub_241318
 *   0x0000000000241434  sub_241434
 *   0x0000000000241574  sub_241574
 *   0x00000000002416CC  sub_2416CC
 *   0x0000000000241814  sub_241814
 *   0x0000000000241950  sub_241950
 *   0x0000000000241AA4  sub_241AA4
 *   0x00000000002556FC  Caver::BreakableObjectComponent::Break(void)
 *   0x00000000002709F0  Caver::HealthComponent::ApplyFireArmorDamageToObject(Caver::SceneObject *)
 *   0x000000000027267C  Caver::HeroEntityComponent::Prepare(void)
 *   0x000000000027BDB8  Caver::MonsterEntityComponent::Prepare(void)
 *   0x000000000027C118  Caver::MonsterEntityComponent::HandleDamageImpact(Caver::DamageImpact *)
 *   0x000000000027F440  Caver::PhysicsObjectComponent::Prepare(void)
 *   0x00000000002846CC  Caver::MagicBoltComponent::Prepare(void)
 *   0x0000000000289C5C  Caver::MagicHookshotComponent::FindGrabbableObject(void)
 *   0x000000000029A714  Caver::MonsterDeathControllerComponent::CreateSliceObject(boost::shared_ptr<Caver::Model> const&,Caver::Vector3 const&)
 *   0x00000000002B1A84  Caver::BushControllerComponent::HandleMessage(int,void *)
 *   0x0000000000348B6C  Caver::GameSceneController::SpawnHeroAt(std::string const&)
 *   0x000000000034AAE4  Caver::GameSceneController::HandleGameEvent(Caver::GameEvent const&)
 *   0x00000000004770DC  sub_4770DC
 *
 * Callees: 1
 *   0x000000000046F83C  Caver::SceneObject::AddComponent(Caver::Component *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F45A8 string=0x00000000001F45AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneObject::AddComponent(Caver::SceneObject *this, Caver::Component *a2)
{
  return _ZN5Caver11SceneObject12AddComponentEPNS_9ComponentE(this, a2);
}

