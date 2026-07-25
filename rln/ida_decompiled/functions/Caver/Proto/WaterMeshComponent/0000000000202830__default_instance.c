/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202830
 * Mangled: ._ZN5Caver5Proto18WaterMeshComponent16default_instanceEv
 * Demangled: Caver::Proto::WaterMeshComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002C21F8  Caver::WaterMeshComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9B88  Caver::Proto::WaterMeshComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202838 string=0x000000000020283C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::WaterMeshComponent::default_instance(Caver::Proto::WaterMeshComponent *this)
{
  return _ZN5Caver5Proto18WaterMeshComponent16default_instanceEv(this);
}

