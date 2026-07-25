/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4B90
 * Mangled: ._ZN5Caver5Proto23ParticleObjectComponent16default_instanceEv
 * Demangled: Caver::Proto::ParticleObjectComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002ACBEC  Caver::ParticleObjectComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA4F8  Caver::Proto::ParticleObjectComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4B98 string=0x00000000001F4B9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ParticleObjectComponent::default_instance(Caver::Proto::ParticleObjectComponent *this)
{
  return _ZN5Caver5Proto23ParticleObjectComponent16default_instanceEv(this);
}

