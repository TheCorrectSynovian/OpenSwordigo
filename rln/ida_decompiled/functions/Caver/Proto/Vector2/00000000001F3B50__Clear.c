/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3B50
 * Mangled: ._ZN5Caver5Proto7Vector25ClearEv
 * Demangled: Caver::Proto::Vector2::Clear(void)
 *
 * Callers: 9
 *   0x00000000002DCEF0  Caver::Proto::MapNode::Clear(void)
 *   0x00000000002FC030  Caver::Proto::SceneObject::Clear(void)
 *   0x00000000003099F0  Caver::Proto::TextureMappingComponent::Clear(void)
 *   0x000000000030DADC  Caver::Proto::HealthComponent::Clear(void)
 *   0x000000000031855C  Caver::Proto::PhysicsObjectComponent::Clear(void)
 *   0x00000000003210F4  Caver::Proto::FireEmitterComponent::Clear(void)
 *   0x0000000000322104  Caver::Proto::SimpleGlowComponent::Clear(void)
 *   0x0000000000331594  Caver::Proto::OverlayTextComponent::Clear(void)
 *   0x0000000000334240  Caver::Proto::SkillComponent::Clear(void)
 *
 * Callees: 1
 *   0x00000000002CE304  Caver::Proto::Vector2::Clear(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F3B54 string=0x00000000002CE304 "P@9H"
 *   insn=0x00000000001F3B58 string=0x00000000001F3B5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Vector2::Clear(Caver::Proto::Vector2 *this)
{
  return _ZN5Caver5Proto7Vector25ClearEv(this);
}

