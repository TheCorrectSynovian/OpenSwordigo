/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F34D0
 * Mangled: ._ZNK5Caver5Proto7Program8ByteSizeEv
 * Demangled: Caver::Proto::Program::ByteSize(void)
 *
 * Callers: 17
 *   0x00000000002FDBD4  Caver::Proto::ObjectLibrary::ByteSize(void)
 *   0x00000000002FEE60  Caver::Proto::SceneObject::ByteSize(void)
 *   0x0000000000300F78  Caver::Proto::SceneObjectGroup::ByteSize(void)
 *   0x00000000003023A4  Caver::Proto::Scene::ByteSize(void)
 *   0x0000000000306B2C  Caver::Proto::GroundPolygonComponent::ByteSize(void)
 *   0x000000000030C788  Caver::Proto::CollisionShapeComponent::ByteSize(void)
 *   0x0000000000316138  Caver::Proto::PressureTriggerComponent::ByteSize(void)
 *   0x0000000000317430  Caver::Proto::ProgramComponent::ByteSize(void)
 *   0x0000000000317F08  Caver::Proto::MonsterEntityComponent::ByteSize(void)
 *   0x000000000031954C  Caver::Proto::BreakableObjectComponent::ByteSize(void)
 *   0x000000000031A7E0  Caver::Proto::EntityActionComponent::ByteSize(void)
 *   0x000000000031BC14  Caver::Proto::HeroEntityComponent::ByteSize(void)
 *   0x000000000031C9F0  Caver::Proto::PropertiesComponent::ByteSize(void)
 *   0x000000000032635C  Caver::Proto::AttackComponent::ByteSize(void)
 *   0x000000000032EADC  Caver::Proto::CollectableItemComponent::ByteSize(void)
 *   0x000000000032F398  Caver::Proto::TouchableComponent::ByteSize(void)
 *   0x000000000033731C  Caver::Proto::SpellComponent::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002D5E7C  Caver::Proto::Program::ByteSize(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F34D8 string=0x00000000001F34DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Program::ByteSize(Caver::Proto::Program *this)
{
  return _ZNK5Caver5Proto7Program8ByteSizeEv(this);
}

