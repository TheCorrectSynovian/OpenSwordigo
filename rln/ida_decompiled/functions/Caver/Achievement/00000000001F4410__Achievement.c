/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4410
 * Mangled: ._ZN5Caver11AchievementC2ERKS0_
 * Demangled: Caver::Achievement::Achievement(Caver::Achievement const&)
 *
 * Callers: 1
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *
 * Callees: 1
 *   0x000000000037D1F0  Caver::Achievement::Achievement(Caver::Achievement const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4418 string=0x00000000001F441C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Achievement::Achievement(Caver::Achievement *this, const Caver::Achievement *a2)
{
  return _ZN5Caver11AchievementC2ERKS0_(this, a2);
}

