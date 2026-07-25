/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB0B0
 * Mangled: ._ZN5Caver5Proto7Vector216default_instanceEv
 * Demangled: Caver::Proto::Vector2::default_instance(void)
 *
 * Callers: 11
 *   0x00000000002DB544  Caver::Proto::protobuf_AddDesc_GameData_2eproto(void)
 *   0x00000000002DBA4C  Caver::Proto::MapNode::InitAsDefaultInstance(void)
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *   0x00000000002F97F0  Caver::Proto::SceneObject::InitAsDefaultInstance(void)
 *   0x00000000002F9B08  Caver::Proto::TextureMappingComponent::InitAsDefaultInstance(void)
 *   0x00000000002F9CB4  Caver::Proto::HealthComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA0FC  Caver::Proto::PhysicsObjectComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA42C  Caver::Proto::FireEmitterComponent::InitAsDefaultInstance(void)
 *   0x00000000002FA498  Caver::Proto::SimpleGlowComponent::InitAsDefaultInstance(void)
 *   0x00000000002FAB48  Caver::Proto::OverlayTextComponent::InitAsDefaultInstance(void)
 *   0x00000000002FACA8  Caver::Proto::SkillComponent::InitAsDefaultInstance(void)
 *
 * Callees: 1
 *   0x00000000002CE2A8  Caver::Proto::Vector2::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB0B8 string=0x00000000001FB0BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Vector2::default_instance(Caver::Proto::Vector2 *this)
{
  return _ZN5Caver5Proto7Vector216default_instanceEv(this);
}

