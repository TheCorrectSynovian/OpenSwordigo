/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004BAC54
 * Mangled: _ZN5Caver24OnlineController_Android22ReceivedPrivacyConsentEb
 * Demangled: Caver::OnlineController_Android::ReceivedPrivacyConsent(bool)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000202020  Caver::AndroidReceivedPrivacyConsent(bool)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::OnlineController_Android::ReceivedPrivacyConsent(
        Caver::OnlineController_Android *this,
        bool a2)
{
  return Caver::AndroidReceivedPrivacyConsent((Caver *)a2, a2);
}

