/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F69C0
 * Mangled: ._ZN7_JNIEnv19CallStaticIntMethodEP7_jclassP10_jmethodIDz
 * Demangled: _JNIEnv::CallStaticIntMethod(_jclass *,_jmethodID *,...)
 *
 * Callers: 2
 *   0x000000000047AF4C  Caver::AndroidGetPlatformConsentState(void)
 *   0x000000000047B574  Caver::AndroidGetInterstitialAdInterval(std::string const&,int)
 *
 * Callees: 1
 *   0x000000000047AFA0  _JNIEnv::CallStaticIntMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F69C8 string=0x00000000001F69CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 _JNIEnv::CallStaticIntMethod()
{
  return _ZN7_JNIEnv19CallStaticIntMethodEP7_jclassP10_jmethodIDz();
}

