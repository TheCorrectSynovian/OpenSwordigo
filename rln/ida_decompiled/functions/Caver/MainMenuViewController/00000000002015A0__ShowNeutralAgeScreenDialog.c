/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002015A0
 * Mangled: ._ZN5Caver22MainMenuViewController26ShowNeutralAgeScreenDialogEv
 * Demangled: Caver::MainMenuViewController::ShowNeutralAgeScreenDialog(void)
 *
 * Callers: 1
 *   0x000000000036C584  Caver::MainMenuViewController::Update(float)
 *
 * Callees: 1
 *   0x000000000036CA58  Caver::MainMenuViewController::CompleteInitialPrivacy(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002015A8 string=0x00000000002015AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MainMenuViewController::ShowNeutralAgeScreenDialog(Caver::MainMenuViewController *this)
{
  JUMPOUT(0x36CBDC);
}

