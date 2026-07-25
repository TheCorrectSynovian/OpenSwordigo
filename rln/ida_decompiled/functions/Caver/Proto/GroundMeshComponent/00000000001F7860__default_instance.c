/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7860
 * Mangled: ._ZN5Caver5Proto19GroundMeshComponent16default_instanceEv
 * Demangled: Caver::Proto::GroundMeshComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002B6F2C  Caver::GroundMeshComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000002F9AA4  Caver::Proto::GroundMeshComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7868 string=0x00000000001F786C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::GroundMeshComponent::default_instance(Caver::Proto::GroundMeshComponent *this)
{
  return _ZN5Caver5Proto19GroundMeshComponent16default_instanceEv(this);
}

