/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B040
 * Mangled: _ZN5Caver33AndroidShowPlatformConsentOptionsEv
 * Demangled: Caver::AndroidShowPlatformConsentOptions(void)
 *
 * Callers: 1
 *   0x00000000001F97F0  Caver::AndroidShowPlatformConsentOptions(void)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 12
 *   insn=0x000000000047B048 string=0x000000000047B04C "s"
 *   insn=0x000000000047B04C string=0x000000000047B050 "`2F"
 *   insn=0x000000000047B050 string=0x000000000047B054 "t"
 *   insn=0x000000000047B05C string=0x000000000047B060 ""
 *   insn=0x000000000047B05C string=0x0000000000596223 "showPlatformConsentOptions"
 *   insn=0x000000000047B064 string=0x000000000047B068 "B"
 *   insn=0x000000000047B064 string=0x000000000059604E "()V"
 *   insn=0x000000000047B068 string=0x000000000047B06C "c8"
 *   insn=0x000000000047B06C string=0x000000000047B070 ""
 *   insn=0x000000000047B074 string=0x000000000047B078 "h2F"
 *   insn=0x000000000047B08C string=0x000000000047B090 "("
 *   insn=0x000000000047B090 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidShowPlatformConsentOptions(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "showPlatformConsentOptions",
    "()V");
  return _JNIEnv::CallStaticVoidMethod();
}

