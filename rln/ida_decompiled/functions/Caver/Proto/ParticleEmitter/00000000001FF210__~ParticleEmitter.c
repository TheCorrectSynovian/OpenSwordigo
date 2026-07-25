/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF210
 * Mangled: ._ZN5Caver5Proto15ParticleEmitterD2Ev_0
 * Demangled: Caver::Proto::ParticleEmitter::~ParticleEmitter()
 *
 * Callers: 1
 *   0x000000000031CFDC  Caver::Proto::ParticleEmitter::~ParticleEmitter()
 *
 * Callees: 1
 *   0x000000000031CBA8  Caver::Proto::ParticleEmitter::ParticleEmitter(Caver::Proto::ParticleEmitter const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF218 string=0x00000000001FF21C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ParticleEmitter::~ParticleEmitter(Caver::Proto::ParticleEmitter *this)
{
  JUMPOUT(0x31CEC4);
}

