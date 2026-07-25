/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA4B0
 * Mangled: ._ZN5Caver11AudioSystem6UpdateEf
 * Demangled: Caver::AudioSystem::Update(float)
 *
 * Callers: 1
 *   0x0000000000210EFC  Caver::CaverShell::Update(float)
 *
 * Callees: 1
 *   0x000000000047FB9C  Caver::AudioSystem::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA4B8 string=0x00000000001FA4BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AudioSystem::Update(Caver::AudioSystem *this, float a2)
{
  return _ZN5Caver11AudioSystem6UpdateEf(this, a2);
}

