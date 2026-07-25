/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9AD0
 * Mangled: ._ZN5Caver23AndroidShowAchievementsEv
 * Demangled: Caver::AndroidShowAchievements(void)
 *
 * Callers: 1
 *   0x00000000004BA8B4  Caver::OnlineController_Android::LaunchAchievements(void)
 *
 * Callees: 1
 *   0x000000000047B1FC  Caver::AndroidShowAchievements(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9AD8 string=0x00000000001F9ADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidShowAchievements(Caver *this)
{
  return _ZN5Caver23AndroidShowAchievementsEv(this);
}

