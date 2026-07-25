/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCDD0
 * Mangled: ._ZNK5Caver5Proto7Vector28ByteSizeEv
 * Demangled: Caver::Proto::Vector2::ByteSize(void)
 *
 * Callers: 10
 *   0x00000000002DD97C  Caver::Proto::MapNode::ByteSize(void)
 *   0x00000000002FEE60  Caver::Proto::SceneObject::ByteSize(void)
 *   0x0000000000306B2C  Caver::Proto::GroundPolygonComponent::ByteSize(void)
 *   0x0000000000309D9C  Caver::Proto::TextureMappingComponent::ByteSize(void)
 *   0x000000000030DE88  Caver::Proto::HealthComponent::ByteSize(void)
 *   0x0000000000318B54  Caver::Proto::PhysicsObjectComponent::ByteSize(void)
 *   0x000000000032191C  Caver::Proto::FireEmitterComponent::ByteSize(void)
 *   0x0000000000322710  Caver::Proto::SimpleGlowComponent::ByteSize(void)
 *   0x0000000000331AD0  Caver::Proto::OverlayTextComponent::ByteSize(void)
 *   0x0000000000334610  Caver::Proto::SkillComponent::ByteSize(void)
 *
 * Callees: 1
 *   0x00000000002CE4E4  Caver::Proto::Vector2::ByteSize(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FCDD4 string=0x00000000002CE4E4 "P@9"
 *   insn=0x00000000001FCDD8 string=0x00000000001FCDDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Vector2::ByteSize(Caver::Proto::Vector2 *this)
{
  return _ZNK5Caver5Proto7Vector28ByteSizeEv(this);
}

