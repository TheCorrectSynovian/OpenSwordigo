/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F93F0
 * Mangled: ._ZN7_JNIEnv23CallStaticBooleanMethodEP7_jclassP10_jmethodIDz
 * Demangled: _JNIEnv::CallStaticBooleanMethod(_jclass *,_jmethodID *,...)
 *
 * Callers: 8
 *   0x000000000047A528  Caver::AndroidCheckPromotion(std::string const&)
 *   0x000000000047AA94  Caver::AndroidIsAgeKnown(void)
 *   0x000000000047AAF4  Caver::AndroidIsAgeOfConsent(void)
 *   0x000000000047ABBC  Caver::AndroidHasPrivacyConsent(void)
 *   0x000000000047AC1C  Caver::AndroidIsExplicitPrivacyConsent(void)
 *   0x000000000047B0E8  Caver::AndroidStartReviewFlow(void)
 *   0x000000000047B148  Caver::AndroidIsGoogleGameServicesAvailable(void)
 *   0x000000000047B600  Caver::AndroidShowInterstitialAd(double)
 *
 * Callees: 1
 *   0x000000000047A5B8  _JNIEnv::CallStaticBooleanMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F93F8 string=0x00000000001F93FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 _JNIEnv::CallStaticBooleanMethod()
{
  return _ZN7_JNIEnv23CallStaticBooleanMethodEP7_jclassP10_jmethodIDz();
}

