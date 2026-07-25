/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4170
 * Mangled: ._ZN5Caver15ParticleEmitter21SaveToProtobufMessageEPNS_5Proto15ParticleEmitterE
 * Demangled: Caver::ParticleEmitter::SaveToProtobufMessage(Caver::Proto::ParticleEmitter *)
 *
 * Callers: 2
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *
 * Callees: 1
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4178 string=0x00000000001F417C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ParticleEmitter::SaveToProtobufMessage()
{
  JUMPOUT(0x452D90);
}

