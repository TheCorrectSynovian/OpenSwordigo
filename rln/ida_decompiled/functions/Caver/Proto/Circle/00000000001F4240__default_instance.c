/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4240
 * Mangled: ._ZN5Caver5Proto6Circle16default_instanceEv
 * Demangled: Caver::Proto::Circle::default_instance(void)
 *
 * Callers: 2
 *   0x00000000002F6790  Caver::Proto::protobuf_AddDesc_Scene_2eproto(void)
 *   0x00000000002F9BB8  Caver::Proto::ShapeComponent::InitAsDefaultInstance(void)
 *
 * Callees: 1
 *   0x00000000002CFD20  Caver::Proto::Circle::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4248 string=0x00000000001F424C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::Circle::default_instance(Caver::Proto::Circle *this)
{
  return _ZN5Caver5Proto6Circle16default_instanceEv(this);
}

