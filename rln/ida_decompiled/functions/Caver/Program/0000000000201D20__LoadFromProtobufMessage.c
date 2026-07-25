/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201D20
 * Mangled: ._ZN5Caver7Program23LoadFromProtobufMessageERKNS_5Proto7ProgramE
 * Demangled: Caver::Program::LoadFromProtobufMessage(Caver::Proto::Program const&)
 *
 * Callers: 17
 *   0x0000000000217C08  Caver::CollisionShapeComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000231690  Caver::ProgramComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023323C  Caver::PropertiesComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000023F538  Caver::TouchableComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002546AC  Caver::BreakableObjectComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000261A70  Caver::CollectableItemComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000267034  Caver::EntityActionComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000272138  Caver::HeroEntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000027B148  Caver::MonsterEntityComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000028FAE4  Caver::SpellComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x0000000000290D6C  Caver::AttackComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002B53F0  Caver::PressureTriggerComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x00000000002BECE0  Caver::GroundPolygonComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *   0x000000000045C5FC  Caver::ObjectLibrary::LoadFromProtobufMessage(Caver::Proto::ObjectLibrary const&)
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *   0x00000000004701FC  Caver::SceneObject::Clone(void)
 *   0x0000000000475190  Caver::SceneObjectGroup::LoadFromProtobufMessage(Caver::Proto::SceneObjectGroup const&)
 *
 * Callees: 1
 *   0x00000000004C0068  Caver::Program::~Program()
 *
 * Referenced strings: 1
 *   insn=0x0000000000201D28 string=0x0000000000201D2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Program::LoadFromProtobufMessage(Caver::Program *this, const Caver::Proto::Program *a2)
{
  JUMPOUT(0x4C0350);
}

