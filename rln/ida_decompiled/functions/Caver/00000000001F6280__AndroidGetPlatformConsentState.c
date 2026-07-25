/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6280
 * Mangled: ._ZN5Caver30AndroidGetPlatformConsentStateEv
 * Demangled: Caver::AndroidGetPlatformConsentState(void)
 *
 * Callers: 1
 *   0x00000000004BAC68  Caver::OnlineController_Android::GetPlatformConsentState(void)
 *
 * Callees: 1
 *   0x000000000047AF4C  Caver::AndroidGetPlatformConsentState(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6288 string=0x00000000001F628C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidGetPlatformConsentState(Caver *this)
{
  return _ZN5Caver30AndroidGetPlatformConsentStateEv(this);
}

