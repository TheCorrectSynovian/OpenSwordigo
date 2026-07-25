/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC900
 * Mangled: ._ZN5Caver5Proto15ParticleEmitterD2Ev
 * Demangled: Caver::Proto::ParticleEmitter::~ParticleEmitter()
 *
 * Callers: 1
 *   0x0000000000452D00  Caver::ParticleEmitter::Clone(void)
 *
 * Callees: 1
 *   0x000000000031CBA8  Caver::Proto::ParticleEmitter::ParticleEmitter(Caver::Proto::ParticleEmitter const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC908 string=0x00000000001FC90C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ParticleEmitter::~ParticleEmitter(Caver::Proto::ParticleEmitter *this)
{
  JUMPOUT(0x31CEC4);
}

