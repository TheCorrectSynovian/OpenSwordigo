/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6A00
 * Mangled: ._ZN5Caver32AndroidGetInterstitialAdIntervalERKSsi
 * Demangled: Caver::AndroidGetInterstitialAdInterval(std::string const&,int)
 *
 * Callers: 1
 *   0x00000000004BB54C  Caver::OnlineController_Android::ShowInterstitialAd(std::string const&,int,float)
 *
 * Callees: 1
 *   0x000000000047B574  Caver::AndroidGetInterstitialAdInterval(std::string const&,int)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6A08 string=0x00000000001F6A0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AndroidGetInterstitialAdInterval()
{
  return _ZN5Caver32AndroidGetInterstitialAdIntervalERKSsi();
}

