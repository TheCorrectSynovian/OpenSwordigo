/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002027E0
 * Mangled: ._ZN5Caver5Proto14ModelComponent16default_instanceEv
 * Demangled: Caver::Proto::ModelComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002247DC  Caver::ModelComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002F9928  Caver::Proto::ModelComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002027E8 string=0x00000000002027EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ModelComponent::default_instance(Caver::Proto::ModelComponent *this)
{
  return _ZN5Caver5Proto14ModelComponent16default_instanceEv(this);
}

