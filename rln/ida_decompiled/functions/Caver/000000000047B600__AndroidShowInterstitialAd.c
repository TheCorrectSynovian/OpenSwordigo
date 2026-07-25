/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B600
 * Mangled: _ZN5Caver25AndroidShowInterstitialAdEd
 * Demangled: Caver::AndroidShowInterstitialAd(double)
 *
 * Callers: 1
 *   0x00000000002021B0  Caver::AndroidShowInterstitialAd(double)
 *
 * Callees: 1
 *   0x00000000001F93F0  _JNIEnv::CallStaticBooleanMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 13
 *   insn=0x000000000047B60C string=0x000000000047B610 "s"
 *   insn=0x000000000047B610 string=0x000000000047B614 "`2F"
 *   insn=0x000000000047B614 string=0x000000000047B618 "t"
 *   insn=0x000000000047B620 string=0x000000000047B624 ""
 *   insn=0x000000000047B620 string=0x0000000000596386 "showInterstitialAd"
 *   insn=0x000000000047B628 string=0x000000000047B62C "B"
 *   insn=0x000000000047B628 string=0x0000000000596399 "(D)Z"
 *   insn=0x000000000047B62C string=0x000000000047B630 "cd"
 *   insn=0x000000000047B630 string=0x000000000047B634 ""
 *   insn=0x000000000047B634 string=0x000000000047B638 ""
 *   insn=0x000000000047B63C string=0x000000000047B640 "h2F"
 *   insn=0x000000000047B650 string=0x000000000047B654 "g"
 *   insn=0x000000000047B654 string=0x00000000001F93F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::AndroidShowInterstitialAd(Caver *this, double a2)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "showInterstitialAd",
    "(D)Z");
  return (unsigned __int8)_JNIEnv::CallStaticBooleanMethod() != 0;
}

