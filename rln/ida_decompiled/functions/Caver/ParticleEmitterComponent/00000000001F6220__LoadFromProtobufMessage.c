/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6220
 * Mangled: ._ZN5Caver24ParticleEmitterComponent23LoadFromProtobufMessageERKNS_5Proto9ComponentE
 * Demangled: Caver::ParticleEmitterComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callers: 1
 *   0x00000000002A3660  Caver::MagicParticleEmitterComponent::LoadFromProtobufMessage(Caver::Proto::Component const&)
 *
 * Callees: 1
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6228 string=0x00000000001F622C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ParticleEmitterComponent::LoadFromProtobufMessage()
{
  JUMPOUT(0x2A6C2C);
}

