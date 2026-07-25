/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAC68
 * Mangled: _ZN5Caver24OnlineController_Android23GetPlatformConsentStateEv
 * Demangled: Caver::OnlineController_Android::GetPlatformConsentState(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F6280  Caver::AndroidGetPlatformConsentState(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BAC68 string=0x00000000001F6280 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController_Android::GetPlatformConsentState(Caver::OnlineController_Android *this)
{
  return Caver::AndroidGetPlatformConsentState(this);
}

