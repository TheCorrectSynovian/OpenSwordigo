/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F72C0
 * Mangled: ._ZN5Caver15ParticleEmitter5CloneEv
 * Demangled: Caver::ParticleEmitter::Clone(void)
 *
 * Callers: 2
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x00000000002A9CC0  Caver::ParticleEmitterComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F72C8 string=0x00000000001F72CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitter::Clone(Caver::ParticleEmitter *this)
{
  return _ZN5Caver15ParticleEmitter5CloneEv(this);
}

