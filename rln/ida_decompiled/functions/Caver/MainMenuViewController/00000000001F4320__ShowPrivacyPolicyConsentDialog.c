/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4320
 * Mangled: ._ZN5Caver22MainMenuViewController30ShowPrivacyPolicyConsentDialogEv
 * Demangled: Caver::MainMenuViewController::ShowPrivacyPolicyConsentDialog(void)
 *
 * Callers: 3
 *   0x000000000036C584  Caver::MainMenuViewController::Update(float)
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *   0x000000000036E598  `non-virtual thunk to'Caver::MainMenuViewController::MainMenuViewDidOpenPrivacyPolicy(Caver::MainMenuView *)
 *
 * Callees: 1
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4328 string=0x00000000001F432C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MainMenuViewController::ShowPrivacyPolicyConsentDialog(Caver::MainMenuViewController *this)
{
  JUMPOUT(0x36D660);
}

