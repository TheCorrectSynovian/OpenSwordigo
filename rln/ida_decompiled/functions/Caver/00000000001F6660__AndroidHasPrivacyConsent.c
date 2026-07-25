/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6660
 * Mangled: ._ZN5Caver24AndroidHasPrivacyConsentEv
 * Demangled: Caver::AndroidHasPrivacyConsent(void)
 *
 * Callers: 1
 *   0x00000000004BAB24  Caver::OnlineController_Android::OpenPrivacyPolicy(void)
 *
 * Callees: 1
 *   0x000000000047ABBC  Caver::AndroidHasPrivacyConsent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6668 string=0x00000000001F666C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AndroidHasPrivacyConsent(Caver *this)
{
  return _ZN5Caver24AndroidHasPrivacyConsentEv(this);
}

