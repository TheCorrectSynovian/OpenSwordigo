/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003891C0
 * Mangled: _ZN5Caver16OnlineController14IsAgeOfConsentEv
 * Demangled: Caver::OnlineController::IsAgeOfConsent(void)
 *
 * Callers: 0
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::OnlineController::IsAgeOfConsent(Caver::OnlineController *this)
{
  return *((_DWORD *)this + 2) > 15;
}

