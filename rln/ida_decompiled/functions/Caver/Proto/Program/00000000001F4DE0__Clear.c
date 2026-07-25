/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4DE0
 * Mangled: ._ZN5Caver5Proto7Program5ClearEv
 * Demangled: Caver::Proto::Program::Clear(void)
 *
 * Callers: 16
 *   0x00000000002FC030  Caver::Proto::SceneObject::Clear(void)
 *   0x0000000000300918  Caver::Proto::SceneObjectGroup::Clear(void)
 *   0x0000000000301A58  Caver::Proto::Scene::Clear(void)
 *   0x000000000030631C  Caver::Proto::GroundPolygonComponent::Clear(void)
 *   0x000000000030BC58  Caver::Proto::CollisionShapeComponent::Clear(void)
 *   0x0000000000315C7C  Caver::Proto::PressureTriggerComponent::Clear(void)
 *   0x0000000000316FCC  Caver::Proto::ProgramComponent::Clear(void)
 *   0x0000000000317A20  Caver::Proto::MonsterEntityComponent::Clear(void)
 *   0x00000000003190F4  Caver::Proto::BreakableObjectComponent::Clear(void)
 *   0x000000000031A5BC  Caver::Proto::EntityActionComponent::Clear(void)
 *   0x000000000031B9F0  Caver::Proto::HeroEntityComponent::Clear(void)
 *   0x000000000031C7CC  Caver::Proto::PropertiesComponent::Clear(void)
 *   0x0000000000325AE0  Caver::Proto::AttackComponent::Clear(void)
 *   0x000000000032E4EC  Caver::Proto::CollectableItemComponent::Clear(void)
 *   0x000000000032F0C8  Caver::Proto::TouchableComponent::Clear(void)
 *   0x00000000003370F8  Caver::Proto::SpellComponent::Clear(void)
 *
 * Callees: 1
 *   0x00000000002D5B30  Caver::Proto::Program::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4DE8 string=0x00000000001F4DEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Program::Clear(Caver::Proto::Program *this)
{
  return _ZN5Caver5Proto7Program5ClearEv(this);
}

