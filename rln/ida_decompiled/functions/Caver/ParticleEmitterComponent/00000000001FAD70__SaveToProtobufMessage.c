/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAD70
 * Mangled: ._ZNK5Caver24ParticleEmitterComponent21SaveToProtobufMessageEPNS_5Proto9ComponentE
 * Demangled: Caver::ParticleEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callers: 1
 *   0x00000000002A3664  Caver::MagicParticleEmitterComponent::SaveToProtobufMessage(Caver::Proto::Component *)
 *
 * Callees: 1
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAD78 string=0x00000000001FAD7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ParticleEmitterComponent::SaveToProtobufMessage()
{
  JUMPOUT(0x2A6F04);
}

