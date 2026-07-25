/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031CFDC
 * Mangled: _ZN5Caver5Proto15ParticleEmitterD0Ev
 * Demangled: Caver::Proto::ParticleEmitter::~ParticleEmitter()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FF210  Caver::Proto::ParticleEmitter::~ParticleEmitter()
 *   0x000000000031D014  Caver::Proto::ParticleEmitter::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x000000000031CFFC string=0x00000000001F72B0 "0'"
 *   insn=0x000000000031D00C string=0x000000000031D010 "-"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::ParticleEmitter::~ParticleEmitter(Caver::Proto::ParticleEmitter *this)
{
  Caver::Proto::ParticleEmitter::~ParticleEmitter(this);
  operator delete(this);
}

