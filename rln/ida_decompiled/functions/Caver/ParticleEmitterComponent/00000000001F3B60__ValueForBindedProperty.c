/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3B60
 * Mangled: ._ZN5Caver24ParticleEmitterComponent22ValueForBindedPropertyEi
 * Demangled: Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *
 * Callers: 3
 *   0x00000000002A3680  Caver::MagicParticleEmitterComponent::ValueForBindedProperty(int)
 *   0x00000000002A3684  `non-virtual thunk to'Caver::MagicParticleEmitterComponent::ValueForBindedProperty(int)
 *   0x00000000002A9CB8  `non-virtual thunk to'Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *
 * Callees: 1
 *   0x00000000002A99E4  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3B68 string=0x00000000001F3B6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::ParticleEmitterComponent::ValueForBindedProperty(
        Caver::ParticleEmitterComponent *this,
        int a2)
{
  return _ZN5Caver24ParticleEmitterComponent22ValueForBindedPropertyEi(this, a2);
}

