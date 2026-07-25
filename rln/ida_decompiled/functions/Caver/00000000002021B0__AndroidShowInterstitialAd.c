/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002021B0
 * Mangled: ._ZN5Caver25AndroidShowInterstitialAdEd
 * Demangled: Caver::AndroidShowInterstitialAd(double)
 *
 * Callers: 1
 *   0x00000000004BB54C  Caver::OnlineController_Android::ShowInterstitialAd(std::string const&,int,float)
 *
 * Callees: 1
 *   0x000000000047B600  Caver::AndroidShowInterstitialAd(double)
 *
 * Referenced strings: 1
 *   insn=0x00000000002021B8 string=0x00000000002021BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidShowInterstitialAd(Caver *this, double a2)
{
  return _ZN5Caver25AndroidShowInterstitialAdEd(this, a2);
}

