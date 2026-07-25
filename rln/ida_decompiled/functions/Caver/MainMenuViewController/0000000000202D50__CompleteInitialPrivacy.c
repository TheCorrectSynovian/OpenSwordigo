/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202D50
 * Mangled: ._ZN5Caver22MainMenuViewController22CompleteInitialPrivacyEv
 * Demangled: Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *
 * Callers: 2
 *   0x000000000036C584  Caver::MainMenuViewController::Update(float)
 *   0x000000000036E764  Caver::MainMenuViewController::AlertViewClickedButtonAtIndex(Caver::GUIAlertView *,int)
 *
 * Callees: 1
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202D58 string=0x0000000000202D5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MainMenuViewController::CompleteInitialPrivacy(Caver::MainMenuViewController *this)
{
  return _ZN5Caver22MainMenuViewController22CompleteInitialPrivacyEv(this);
}

