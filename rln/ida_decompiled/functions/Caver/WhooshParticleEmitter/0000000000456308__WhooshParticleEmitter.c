/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000456308
 * Mangled: _ZN5Caver21WhooshParticleEmitterC2Ev
 * Demangled: Caver::WhooshParticleEmitter::WhooshParticleEmitter(void)
 *
 * Callers: 2
 *   0x00000000001FF3B0  Caver::WhooshParticleEmitter::WhooshParticleEmitter(void)
 *   0x00000000004560A4  Caver::TrailParticleEmitter::TitleForParameter(uint)
 *
 * Callees: 1
 *   0x00000000001F67F0  Caver::ParticleEmitter::ParticleEmitter(void)
 *
 * Referenced strings: 5
 *   insn=0x0000000000456314 string=0x0000000000456318 "6"
 *   insn=0x0000000000456318 string=0x00000000001F67F0 "0'"
 *   insn=0x000000000045631C string=0x0000000000456320 "AD"
 *   insn=0x0000000000456324 string=0x0000000000456328 "A"
 *   insn=0x0000000000456328 string=0x000000000045632C "h"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::WhooshParticleEmitter::WhooshParticleEmitter(Caver::WhooshParticleEmitter *this)
{
  __int64 result; // x0

  result = Caver::ParticleEmitter::ParticleEmitter(this);
  *((_DWORD *)this + 54) = 0;
  *(_QWORD *)this = off_6D4600;
  return result;
}

