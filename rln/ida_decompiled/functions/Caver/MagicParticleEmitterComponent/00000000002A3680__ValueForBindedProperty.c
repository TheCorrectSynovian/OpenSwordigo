/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002A3680
 * Mangled: _ZN5Caver29MagicParticleEmitterComponent22ValueForBindedPropertyEi
 * Demangled: Caver::MagicParticleEmitterComponent::ValueForBindedProperty(int)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3B60  Caver::ParticleEmitterComponent::ValueForBindedProperty(int)
 *
 * Referenced strings: 1
 *   insn=0x00000000002A3680 string=0x00000000001F3B60 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MagicParticleEmitterComponent::ValueForBindedProperty(
        Caver::MagicParticleEmitterComponent *this,
        int a2)
{
  return Caver::ParticleEmitterComponent::ValueForBindedProperty(this, a2);
}

