/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAC5C
 * Mangled: _ZN5Caver24OnlineController_Android20StartAdsAndAnalyticsEv
 * Demangled: Caver::OnlineController_Android::StartAdsAndAnalytics(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F86A0  Caver::AndroidStartAdsAndAnalytics(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BAC5C string=0x00000000001F86A0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController_Android::StartAdsAndAnalytics(Caver::OnlineController_Android *this)
{
  return Caver::AndroidStartAdsAndAnalytics(this);
}

