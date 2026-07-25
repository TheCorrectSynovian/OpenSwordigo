/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000452044
 * Mangled: _ZN5Caver23FountainParticleEmitterC2Ev
 * Demangled: Caver::FountainParticleEmitter::FountainParticleEmitter(void)
 *
 * Callers: 2
 *   0x00000000001FD5E0  Caver::FountainParticleEmitter::FountainParticleEmitter(void)
 *   0x0000000000451E5C  Caver::BlastParticleEmitter::TitleForParameter(uint)
 *
 * Callees: 1
 *   0x00000000001F67F0  Caver::ParticleEmitter::ParticleEmitter(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000452054 string=0x00000000001F67F0 "0'"
 *   insn=0x0000000000452058 string=0x000000000045205C "1@"
 *   insn=0x0000000000452060 string=0x0000000000452064 "A"
 *   insn=0x0000000000452064 string=0x0000000000452068 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::FountainParticleEmitter::FountainParticleEmitter(Caver::FountainParticleEmitter *this)
{
  __int64 result; // x0

  result = Caver::ParticleEmitter::ParticleEmitter(this);
  *((_DWORD *)this + 54) = 0;
  *(_QWORD *)this = off_6D4370;
  return result;
}

