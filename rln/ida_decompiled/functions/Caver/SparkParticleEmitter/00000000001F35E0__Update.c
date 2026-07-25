/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F35E0
 * Mangled: ._ZN5Caver20SparkParticleEmitter6UpdateEf
 * Demangled: Caver::SparkParticleEmitter::Update(float)
 *
 * Callers: 1
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *
 * Callees: 1
 *   0x000000000045525C  Caver::SparkParticleEmitter::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F35E8 string=0x00000000001F35EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SparkParticleEmitter::Update(Caver::SparkParticleEmitter *this, float a2)
{
  return _ZN5Caver20SparkParticleEmitter6UpdateEf(this, a2);
}

