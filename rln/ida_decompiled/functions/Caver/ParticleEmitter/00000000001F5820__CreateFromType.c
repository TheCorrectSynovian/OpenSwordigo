/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5820
 * Mangled: ._ZN5Caver15ParticleEmitter14CreateFromTypeENS0_4TypeE
 * Demangled: Caver::ParticleEmitter::CreateFromType(Caver::ParticleEmitter::Type)
 *
 * Callers: 1
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000452FC0  Caver::ParticleEmitter::LoadFromProtobufMessage(Caver::Proto::ParticleEmitter const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5828 string=0x00000000001F582C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ParticleEmitter::CreateFromType()
{
  JUMPOUT(0x453340);
}

