/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202020
 * Mangled: ._ZN5Caver29AndroidReceivedPrivacyConsentEb
 * Demangled: Caver::AndroidReceivedPrivacyConsent(bool)
 *
 * Callers: 1
 *   0x00000000004BAC54  Caver::OnlineController_Android::ReceivedPrivacyConsent(bool)
 *
 * Callees: 1
 *   0x000000000047AC7C  Caver::AndroidReceivedPrivacyConsent(bool)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202028 string=0x000000000020202C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidReceivedPrivacyConsent(Caver *this, bool a2)
{
  return _ZN5Caver29AndroidReceivedPrivacyConsentEb(this, a2);
}

