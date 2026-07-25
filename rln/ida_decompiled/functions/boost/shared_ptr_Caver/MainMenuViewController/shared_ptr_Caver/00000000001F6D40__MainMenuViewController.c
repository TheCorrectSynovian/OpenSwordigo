/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6D40
 * Mangled: ._ZN5boost10shared_ptrIN5Caver22MainMenuViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::MainMenuViewController>::shared_ptr<Caver::MainMenuViewController>(Caver::MainMenuViewController *)
 *
 * Callers: 3
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x000000000038D904  Caver::CreditsViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *
 * Callees: 1
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6D48 string=0x00000000001F6D4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::MainMenuViewController>::shared_ptr<Caver::MainMenuViewController>()
{
  JUMPOUT(0x2109CC);
}

