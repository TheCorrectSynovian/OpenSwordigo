/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF0B0
 * Mangled: ._ZN5Caver5Proto15ParticleEmitterC2Ev
 * Demangled: Caver::Proto::ParticleEmitter::ParticleEmitter(void)
 *
 * Callers: 2
 *   0x00000000002A69FC  Caver::ParticleEmitterComponent::InitWithComponent(Caver::ParticleEmitterComponent const*)
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *
 * Callees: 1
 *   0x000000000031CB5C  Caver::Proto::ParticleEmitter::ParticleEmitter(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF0B4 string=0x000000000031CB5C "H"
 *   insn=0x00000000001FF0B8 string=0x00000000001FF0BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::ParticleEmitter::ParticleEmitter(Caver::Proto::ParticleEmitter *this)
{
  return _ZN5Caver5Proto15ParticleEmitterC2Ev(this);
}

