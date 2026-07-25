/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAC6C
 * Mangled: _ZN5Caver24OnlineController_Android26ShowPlatformConsentOptionsEv
 * Demangled: Caver::OnlineController_Android::ShowPlatformConsentOptions(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F97F0  Caver::AndroidShowPlatformConsentOptions(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BAC6C string=0x00000000001F97F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController_Android::ShowPlatformConsentOptions(Caver::OnlineController_Android *this)
{
  return Caver::AndroidShowPlatformConsentOptions(this);
}

