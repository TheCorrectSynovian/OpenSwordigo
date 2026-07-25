/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC8E0
 * Mangled: ._ZN5Caver19AchievementsManagerC2Ev
 * Demangled: Caver::AchievementsManager::AchievementsManager(void)
 *
 * Callers: 1
 *   0x0000000000375F44  Caver::AchievementsManager::sharedManager(void)
 *
 * Callees: 1
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC8E8 string=0x00000000001FC8EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AchievementsManager::AchievementsManager(Caver::AchievementsManager *this)
{
  return _ZN5Caver19AchievementsManagerC2Ev(this);
}

