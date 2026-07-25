/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6B40
 * Mangled: ._ZN5Caver5Proto7Program16default_instanceEv
 * Demangled: Caver::Proto::Program::default_instance(void)
 *
 * Callers: 17
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *   0x00000000002F97F0  Caver::Proto::SceneObject::InitAsDefaultInstance(void)
 *   0x00000000002F9824  Caver::Proto::SceneObjectGroup::InitAsDefaultInstance(void)
 *   0x00000000002F9848  Caver::Proto::Scene::InitAsDefaultInstance(void)
 *   0x00000000002F9A1C  Caver::Proto::GroundPolygonComponent::InitAsDefaultInstance(void)
 *   0x00000000002F9C1C  Caver::Proto::CollisionShapeComponent::InitAsDefaultInstance(void)
 *   0x00000000002F9FBC  Caver::Proto::PressureTriggerComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA04C  Caver::Proto::ProgramComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA0A0  Caver::Proto::MonsterEntityComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA150  Caver::Proto::BreakableObjectComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA1D8  Caver::Proto::EntityActionComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA294  Caver::Proto::HeroEntityComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA31C  Caver::Proto::PropertiesComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA680  Caver::Proto::AttackComponent::InitAsDefaultInstance(void)
 *   0x00000000002FAA68  Caver::Proto::CollectableItemComponent::InitAsDefaultInstance(void)
 *   0x00000000002FAABC  Caver::Proto::TouchableComponent::InitAsDefaultInstance(void)
 *   0x00000000002FAE60  Caver::Proto::SpellComponent::InitAsDefaultInstance(void)
 *
 * Callees: 1
 *   0x00000000002D5AA8  Caver::Proto::Program::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6B48 string=0x00000000001F6B4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Program::default_instance(Caver::Proto::Program *this)
{
  return _ZN5Caver5Proto7Program16default_instanceEv(this);
}

