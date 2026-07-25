/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB740
 * Mangled: ._ZN5Caver24ParticleEmitterComponent20UpdateLocalTransformEv
 * Demangled: Caver::ParticleEmitterComponent::UpdateLocalTransform(void)
 *
 * Callers: 2
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x00000000002AA5B4  Caver::ParticleEmitterComponent::Prepare(void)
 *
 * Callees: 1
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB748 string=0x00000000001FB74C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ParticleEmitterComponent::UpdateLocalTransform(Caver::ParticleEmitterComponent *this)
{
  JUMPOUT(0x2AA330);
}

