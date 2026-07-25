/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAC60
 * Mangled: _ZN5Caver24OnlineController_Android14GetAnalyticsIdEv
 * Demangled: Caver::OnlineController_Android::GetAnalyticsId(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7720  Caver::AndroidGetAnalyticsId(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BAC60 string=0x00000000001F7720 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController_Android::GetAnalyticsId(Caver::OnlineController_Android *this)
{
  return Caver::AndroidGetAnalyticsId(this);
}

