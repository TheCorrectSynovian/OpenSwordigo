/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9600
 * Mangled: ._ZN5Caver5Proto9Rectangle16default_instanceEv
 * Demangled: Caver::Proto::Rectangle::default_instance(void)
 *
 * Callers: 5
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *   0x00000000002F97F0  Caver::Proto::SceneObject::InitAsDefaultInstance(void)
 *   0x00000000002F9848  Caver::Proto::Scene::InitAsDefaultInstance(void)
 *   0x00000000002F9A78  Caver::Proto::GroundMeshComponent::InitAsDefaultInstance(void)
 *   0x00000000002F9BB8  Caver::Proto::ShapeComponent::InitAsDefaultInstance(void)
 *
 * Callees: 1
 *   0x00000000002CEDE0  Caver::Proto::Rectangle::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9608 string=0x00000000001F960C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Rectangle::default_instance(Caver::Proto::Rectangle *this)
{
  return _ZN5Caver5Proto9Rectangle16default_instanceEv(this);
}

