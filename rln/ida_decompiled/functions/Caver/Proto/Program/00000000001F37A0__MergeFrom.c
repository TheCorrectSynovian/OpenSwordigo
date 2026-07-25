/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F37A0
 * Mangled: ._ZN5Caver5Proto7Program9MergeFromERKS1_
 * Demangled: Caver::Proto::Program::MergeFrom(Caver::Proto::Program const&)
 *
 * Callers: 20
 *   0x00000000002D5604  Caver::Proto::Program::Program(Caver::Proto::Program const&)
 *   0x00000000002D5F88  Caver::Proto::Program::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D5F8C  Caver::Proto::Program::CopyFrom(Caver::Proto::Program const&)
 *   0x00000000002FC4C0  Caver::Proto::SceneObject::MergeFrom(Caver::Proto::SceneObject const&)
 *   0x00000000002FC9D4  Caver::Proto::ObjectLibrary::ObjectLibrary(Caver::Proto::ObjectLibrary const&)
 *   0x0000000000300304  Caver::Proto::SceneObjectGroup::SceneObjectGroup(Caver::Proto::SceneObjectGroup const&)
 *   0x0000000000301280  Caver::Proto::Scene::Scene(Caver::Proto::Scene const&)
 *   0x0000000000305D30  Caver::Proto::GroundPolygonComponent::GroundPolygonComponent(Caver::Proto::GroundPolygonComponent const&)
 *   0x000000000030B6B4  Caver::Proto::CollisionShapeComponent::CollisionShapeComponent(Caver::Proto::CollisionShapeComponent const&)
 *   0x00000000003158A8  Caver::Proto::PressureTriggerComponent::PressureTriggerComponent(Caver::Proto::PressureTriggerComponent const&)
 *   0x0000000000316C78  Caver::Proto::ProgramComponent::ProgramComponent(Caver::Proto::ProgramComponent const&)
 *   0x0000000000317654  Caver::Proto::MonsterEntityComponent::MonsterEntityComponent(Caver::Proto::MonsterEntityComponent const&)
 *   0x0000000000318DB0  Caver::Proto::BreakableObjectComponent::BreakableObjectComponent(Caver::Proto::BreakableObjectComponent const&)
 *   0x000000000031A2E8  Caver::Proto::EntityActionComponent::EntityActionComponent(Caver::Proto::EntityActionComponent const&)
 *   0x000000000031B71C  Caver::Proto::HeroEntityComponent::HeroEntityComponent(Caver::Proto::HeroEntityComponent const&)
 *   0x000000000031C4F8  Caver::Proto::PropertiesComponent::PropertiesComponent(Caver::Proto::PropertiesComponent const&)
 *   0x0000000000325670  Caver::Proto::AttackComponent::AttackComponent(Caver::Proto::AttackComponent const&)
 *   0x000000000032DFC8  Caver::Proto::CollectableItemComponent::CollectableItemComponent(Caver::Proto::CollectableItemComponent const&)
 *   0x000000000032EDDC  Caver::Proto::TouchableComponent::TouchableComponent(Caver::Proto::TouchableComponent const&)
 *   0x0000000000336E24  Caver::Proto::SpellComponent::SpellComponent(Caver::Proto::SpellComponent const&)
 *
 * Callees: 1
 *   0x00000000002D5604  Caver::Proto::Program::Program(Caver::Proto::Program const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F37A8 string=0x00000000001F37AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::Program::MergeFrom()
{
  JUMPOUT(0x2D567C);
}

