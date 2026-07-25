/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B250
 * Mangled: _ZN5Caver32AndroidReportAchievementProgressERKSsib
 * Demangled: Caver::AndroidReportAchievementProgress(std::string const&,int,bool)
 *
 * Callers: 1
 *   0x0000000000202B00  Caver::AndroidReportAchievementProgress(std::string const&,int,bool)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 12
 *   insn=0x000000000047B260 string=0x000000000047B264 "v"
 *   insn=0x000000000047B268 string=0x000000000047B26C "w"
 *   insn=0x000000000047B274 string=0x000000000047B278 "\t"
 *   insn=0x000000000047B280 string=0x00000000005962A4 "reportAchievementProgress"
 *   insn=0x000000000047B284 string=0x000000000047B288 ")"
 *   insn=0x000000000047B284 string=0x00000000005962BE "(Ljava/lang/String;IZ)V"
 *   insn=0x000000000047B28C string=0x000000000047B290 "B"
 *   insn=0x000000000047B290 string=0x000000000047B294 "c"
 *   insn=0x000000000047B298 string=0x000000000047B29C " "
 *   insn=0x000000000047B2B4 string=0x000000000047B2B8 ""
 *   insn=0x000000000047B2BC string=0x000000000047B2C0 "e"
 *   insn=0x000000000047B2E8 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidReportAchievementProgress(_QWORD *a1)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "reportAchievementProgress",
    "(Ljava/lang/String;IZ)V");
  (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)qword_6E9C60 + 1336LL))(qword_6E9C60, *a1);
  return _JNIEnv::CallStaticVoidMethod();
}

