/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4A40
 * Mangled: ._ZN5Caver19AchievementsManager6UpdateEf
 * Demangled: Caver::AchievementsManager::Update(float)
 *
 * Callers: 1
 *   0x0000000000210EFC  Caver::CaverShell::Update(float)
 *
 * Callees: 1
 *   0x000000000037D8F4  Caver::AchievementsManager::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4A48 string=0x00000000001F4A4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AchievementsManager::Update(Caver::AchievementsManager *this, float a2)
{
  return _ZN5Caver19AchievementsManager6UpdateEf(this, a2);
}

