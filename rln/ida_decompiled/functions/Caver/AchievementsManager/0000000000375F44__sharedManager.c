/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000375F44
 * Mangled: _ZN5Caver19AchievementsManager13sharedManagerEv
 * Demangled: Caver::AchievementsManager::sharedManager(void)
 *
 * Callers: 1
 *   0x00000000001FD2D0  Caver::AchievementsManager::sharedManager(void)
 *
 * Callees: 5
 *   0x00000000001F55E0  operator new(ulong)
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001FC8E0  Caver::AchievementsManager::AchievementsManager(void)
 *   0x0000000000375F94  Caver::AchievementsManager::AchievementsManager(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 5
 *   insn=0x0000000000375F60 string=0x00000000001F55E0 "P'"
 *   insn=0x0000000000375F64 string=0x0000000000375F68 "^"
 *   insn=0x0000000000375F68 string=0x00000000001FC8E0 "0'"
 *   insn=0x0000000000375F88 string=0x00000000001F72B0 "0'"
 *   insn=0x0000000000375F8C string=0x0000000000375F90 "M."
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::AchievementsManager *__fastcall Caver::AchievementsManager::sharedManager(Caver::AchievementsManager *this)
{
  Caver::AchievementsManager *v1; // x19

  v1 = (Caver::AchievementsManager *)qword_6E9910;
  if ( !qword_6E9910 )
  {
    v1 = (Caver::AchievementsManager *)operator new(0x1D8u);
    Caver::AchievementsManager::AchievementsManager(v1);
    qword_6E9910 = (__int64)v1;
  }
  return v1;
}

