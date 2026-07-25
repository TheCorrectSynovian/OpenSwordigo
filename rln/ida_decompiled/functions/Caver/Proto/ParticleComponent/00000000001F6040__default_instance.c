/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6040
 * Mangled: ._ZN5Caver5Proto17ParticleComponent16default_instanceEv
 * Demangled: Caver::Proto::ParticleComponent::default_instance(void)
 *
 * Callers: 1
 *   0x00000000002A4EA0  Caver::ParticleComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002FA3FC  Caver::Proto::ParticleComponent::default_instance(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6048 string=0x00000000001F604C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ParticleComponent::default_instance(Caver::Proto::ParticleComponent *this)
{
  return _ZN5Caver5Proto17ParticleComponent16default_instanceEv(this);
}

