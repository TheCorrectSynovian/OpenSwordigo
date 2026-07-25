/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5D50
 * Mangled: ._ZNK5Caver12VaryingColor11RandomColorEv
 * Demangled: Caver::VaryingColor::RandomColor(void)
 *
 * Callers: 2
 *   0x0000000000452078  Caver::FountainParticleEmitter::Update(float)
 *   0x00000000004559B8  Caver::TrailParticleEmitter::Update(float)
 *
 * Callees: 1
 *   0x000000000048AB64  Caver::VaryingColor::RandomColor(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5D58 string=0x00000000001F5D5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::VaryingColor::RandomColor(Caver::VaryingColor *this)
{
  return _ZNK5Caver12VaryingColor11RandomColorEv(this);
}

