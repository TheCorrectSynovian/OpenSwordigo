/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC5B0
 * Mangled: ._ZN5Caver21AndroidIsAgeOfConsentEv
 * Demangled: Caver::AndroidIsAgeOfConsent(void)
 *
 * Callers: 1
 *   0x00000000004BAB18  Caver::OnlineController_Android::IsAgeOfConsent(void)
 *
 * Callees: 1
 *   0x000000000047AAF4  Caver::AndroidIsAgeOfConsent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC5B8 string=0x00000000001FC5BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidIsAgeOfConsent(Caver *this)
{
  return _ZN5Caver21AndroidIsAgeOfConsentEv(this);
}

