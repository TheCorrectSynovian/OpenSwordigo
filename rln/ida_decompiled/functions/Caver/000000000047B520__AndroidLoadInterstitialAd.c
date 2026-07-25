/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000047B520
 * Mangled: _ZN5Caver25AndroidLoadInterstitialAdEv
 * Demangled: Caver::AndroidLoadInterstitialAd(void)
 *
 * Callers: 1
 *   0x00000000001FDAF0  Caver::AndroidLoadInterstitialAd(void)
 *
 * Callees: 1
 *   0x00000000001F5D30  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 11
 *   insn=0x000000000047B528 string=0x000000000047B52C "s"
 *   insn=0x000000000047B52C string=0x000000000047B530 "`2F"
 *   insn=0x000000000047B530 string=0x000000000047B534 "t"
 *   insn=0x000000000047B53C string=0x000000000047B540 ""
 *   insn=0x000000000047B53C string=0x0000000000596342 "loadInterstitialAd"
 *   insn=0x000000000047B544 string=0x000000000047B548 "B"
 *   insn=0x000000000047B544 string=0x000000000059604E "()V"
 *   insn=0x000000000047B548 string=0x000000000047B54C "c8"
 *   insn=0x000000000047B54C string=0x000000000047B550 ""
 *   insn=0x000000000047B554 string=0x000000000047B558 "h2F"
 *   insn=0x000000000047B570 string=0x00000000001F5D30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::AndroidLoadInterstitialAd(Caver *this)
{
  (*(void (__fastcall **)(__int64, __int64, const char *, const char *))(*(_QWORD *)qword_6E9C60 + 904LL))(
    qword_6E9C60,
    qword_6E9C68,
    "loadInterstitialAd",
    "()V");
  return _JNIEnv::CallStaticVoidMethod();
}

