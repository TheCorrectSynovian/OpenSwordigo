/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047AD38
 * Mangled: _ZN5Caver27AndroidStartAdsAndAnalyticsEv
 * Demangled: Caver::AndroidStartAdsAndAnalytics(void)
 *
 * Callers: 1
 *   0x00000000001F86A0  Caver::AndroidStartAdsAndAnalytics(void)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047AD40 string=0x000000000047AD44 "s"
 *   insn=0x000000000047AD44 string=0x000000000047AD48 "`2F"
 *   insn=0x000000000047AD48 string=0x000000000047AD4C "t"
 *   insn=0x000000000047AD54 string=0x000000000047AD58 ""
 *   insn=0x000000000047AD54 string=0x0000000000596196 "startAdsAndAnalytics"
 *   insn=0x000000000047AD5C string=0x000000000047AD60 "BX"
 *   insn=0x000000000047AD5C string=0x000000000059604E "()V"
 *   insn=0x000000000047AD60 string=0x000000000047AD64 "c8"
 *   insn=0x000000000047AD64 string=0x000000000047AD68 ""
 *   insn=0x000000000047AD6C string=0x000000000047AD70 "h2F"
 *   insn=0x000000000047AD88 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidStartAdsAndAnalytics(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "startAdsAndAnalytics",
    "()V");
  return _JNIEnv::CallStaticVoidMethod();
}

