/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAB18
 * Mangled: _ZN5Caver24OnlineController_Android14IsAgeOfConsentEv
 * Demangled: Caver::OnlineController_Android::IsAgeOfConsent(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC5B0  Caver::AndroidIsAgeOfConsent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000004BAB18 string=0x00000000001FC5B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::OnlineController_Android::IsAgeOfConsent(Caver::OnlineController_Android *this)
{
  return Caver::AndroidIsAgeOfConsent(this);
}

