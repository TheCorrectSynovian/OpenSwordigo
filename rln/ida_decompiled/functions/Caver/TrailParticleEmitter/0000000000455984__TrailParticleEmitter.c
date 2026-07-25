/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000455984
 * Mangled: _ZN5Caver20TrailParticleEmitterC2Ev
 * Demangled: Caver::TrailParticleEmitter::TrailParticleEmitter(void)
 *
 * Callers: 2
 *   0x0000000000201EC0  Caver::TrailParticleEmitter::TrailParticleEmitter(void)
 *   0x000000000045579C  Caver::SparkParticleEmitter::TitleForParameter(uint)
 *
 * Callees: 1
 *   0x00000000001F67F0  Caver::ParticleEmitter::ParticleEmitter(void)
 *
 * Referenced strings: 4
 *   insn=0x0000000000455994 string=0x00000000001F67F0 "0'"
 *   insn=0x0000000000455998 string=0x000000000045599C "1D"
 *   insn=0x00000000004559A0 string=0x00000000004559A4 "A"
 *   insn=0x00000000004559A4 string=0x00000000004559A8 "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::TrailParticleEmitter::TrailParticleEmitter(Caver::TrailParticleEmitter *this)
{
  __int64 result; // x0

  result = Caver::ParticleEmitter::ParticleEmitter(this);
  *((_DWORD *)this + 54) = 0;
  *(_QWORD *)this = off_6D4590;
  return result;
}

