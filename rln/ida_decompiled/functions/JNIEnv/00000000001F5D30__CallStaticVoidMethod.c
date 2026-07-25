/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5D30
 * Mangled: ._ZN7_JNIEnv20CallStaticVoidMethodEP7_jclassP10_jmethodIDz
 * Demangled: _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Callers: 23
 *   0x00000000004792AC  Caver::StartTextInputWithDelegate(Caver::ITextInputDelegate *,std::string const&)
 *   0x00000000004793DC  Caver::StopTextInputWithDelegate(Caver::ITextInputDelegate *)
 *   0x0000000000479450  Caver::AndroidOpenURL(std::string const&)
 *   0x00000000004794D4  Caver::AndroidQuitApplication(void)
 *   0x000000000047A378  Caver::AndroidQueueStoreProductFetch(std::string const&)
 *   0x000000000047A3FC  Caver::AndroidProcessStoreQueue(void)
 *   0x000000000047A450  Caver::AndroidPurchaseStoreProduct(std::string const&)
 *   0x000000000047A4D4  Caver::AndroidConsumePurchasesForTesting(void)
 *   0x000000000047AB54  Caver::AndroidEnteredAge(int)
 *   0x000000000047AC7C  Caver::AndroidReceivedPrivacyConsent(bool)
 *   0x000000000047ACE4  Caver::AndroidWithdrawPrivacyConsent(void)
 *   0x000000000047AD38  Caver::AndroidStartAdsAndAnalytics(void)
 *   0x000000000047AD8C  Caver::AndroidGetAnalyticsId(void)
 *   0x000000000047AE9C  Caver::AndroidCopyToClipboard(std::string const&,std::string const&)
 *   0x000000000047B040  Caver::AndroidShowPlatformConsentOptions(void)
 *   0x000000000047B094  Caver::AndroidPrepareReviewFlow(void)
 *   0x000000000047B1A8  Caver::AndroidInitiateGoogleSignIn(void)
 *   0x000000000047B1FC  Caver::AndroidShowAchievements(void)
 *   0x000000000047B250  Caver::AndroidReportAchievementProgress(std::string const&,int,bool)
 *   0x000000000047B2EC  Caver::AndroidLoadSnapshot(std::string const&,double)
 *   0x000000000047B380  Caver::AndroidSaveSnapshot(std::string const&,std::string const&,std::string const&,long long,long long)
 *   0x000000000047B49C  Caver::AndroidDeleteSnapshot(std::string const&)
 *   0x000000000047B520  Caver::AndroidLoadInterstitialAd(void)
 *
 * Callees: 1
 *   0x000000000047933C  _JNIEnv::CallStaticVoidMethod(_jclass *,_jmethodID *,...)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5D38 string=0x00000000001F5D3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 _JNIEnv::CallStaticVoidMethod()
{
  return _ZN7_JNIEnv20CallStaticVoidMethodEP7_jclassP10_jmethodIDz();
}

