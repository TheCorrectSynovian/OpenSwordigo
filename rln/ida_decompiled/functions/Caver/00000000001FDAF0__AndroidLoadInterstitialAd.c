/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDAF0
 * Mangled: ._ZN5Caver25AndroidLoadInterstitialAdEv
 * Demangled: Caver::AndroidLoadInterstitialAd(void)
 *
 * Callers: 1
 *   0x00000000004BB54C  Caver::OnlineController_Android::ShowInterstitialAd(std::string const&,int,float)
 *
 * Callees: 1
 *   0x000000000047B520  Caver::AndroidLoadInterstitialAd(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDAF8 string=0x00000000001FDAFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidLoadInterstitialAd(Caver *this)
{
  return _ZN5Caver25AndroidLoadInterstitialAdEv(this);
}

