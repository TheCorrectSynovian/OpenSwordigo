/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BA8B4
 * Mangled: _ZN5Caver24OnlineController_Android18LaunchAchievementsEv
 * Demangled: Caver::OnlineController_Android::LaunchAchievements(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F9AD0  Caver::AndroidShowAchievements(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BA8B4 string=0x00000000001F9AD0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController_Android::LaunchAchievements(Caver::OnlineController_Android *this)
{
  return Caver::AndroidShowAchievements(this);
}

