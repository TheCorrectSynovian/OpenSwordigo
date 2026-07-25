/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B1FC
 * Mangled: _ZN5Caver23AndroidShowAchievementsEv
 * Demangled: Caver::AndroidShowAchievements(void)
 *
 * Callers: 1
 *   0x00000000001F9AD0  Caver::AndroidShowAchievements(void)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047B204 string=0x000000000047B208 "s"
 *   insn=0x000000000047B208 string=0x000000000047B20C "`2F"
 *   insn=0x000000000047B20C string=0x000000000047B210 "t"
 *   insn=0x000000000047B218 string=0x000000000047B21C ""
 *   insn=0x000000000047B218 string=0x0000000000596293 "showAchievements"
 *   insn=0x000000000047B220 string=0x000000000047B224 "BL\n"
 *   insn=0x000000000047B220 string=0x000000000059604E "()V"
 *   insn=0x000000000047B224 string=0x000000000047B228 "c8"
 *   insn=0x000000000047B228 string=0x000000000047B22C ""
 *   insn=0x000000000047B230 string=0x000000000047B234 "h2F"
 *   insn=0x000000000047B24C string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidShowAchievements(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "showAchievements",
    "()V");
  return _JNIEnv::CallStaticVoidMethod();
}

