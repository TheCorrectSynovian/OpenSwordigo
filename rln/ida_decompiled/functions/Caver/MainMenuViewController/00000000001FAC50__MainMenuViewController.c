/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAC50
 * Mangled: ._ZN5Caver22MainMenuViewControllerC2Ev
 * Demangled: Caver::MainMenuViewController::MainMenuViewController(void)
 *
 * Callers: 3
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x000000000038D904  Caver::CreditsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x000000000036ACA4  Caver::MainMenuViewController::MainMenuViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAC58 string=0x00000000001FAC5C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::MainMenuViewController::MainMenuViewController(Caver::MainMenuViewController *this)
{
  return _ZN5Caver22MainMenuViewControllerC2Ev(this);
}

