/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCE40
 * Mangled: ._ZN5Caver24ParticleEmitterComponent14PrepareEmitterERKN5boost10shared_ptrINS_15ParticleEmitterEEE
 * Demangled: Caver::ParticleEmitterComponent::PrepareEmitter(boost::shared_ptr<Caver::ParticleEmitter> const&)
 *
 * Callers: 3
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AA4C4  Caver::ParticleEmitterComponent::SetEmitter(boost::shared_ptr<Caver::ParticleEmitter> const&)
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCE48 string=0x00000000001FCE4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::ParticleEmitterComponent::PrepareEmitter()
{
  JUMPOUT(0x2AA958);
}

