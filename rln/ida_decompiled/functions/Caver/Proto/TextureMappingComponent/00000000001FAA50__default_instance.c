/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAA50
 * Mangled: ._ZN5Caver5Proto23TextureMappingComponent16default_instanceEv
 * Demangled: Caver::Proto::TextureMappingComponent::default_instance(void)
 *
 * Callers: 1
 *   0x000000000023E2D4  Caver::TextureMappingComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9B2C  Caver::Proto::TextureMappingComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAA58 string=0x00000000001FAA5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::TextureMappingComponent::default_instance(Caver::Proto::TextureMappingComponent *this)
{
  return _ZN5Caver5Proto23TextureMappingComponent16default_instanceEv(this);
}

