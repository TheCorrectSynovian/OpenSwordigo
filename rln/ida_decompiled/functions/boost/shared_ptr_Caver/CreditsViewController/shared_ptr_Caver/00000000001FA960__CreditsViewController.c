/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA960
 * Mangled: ._ZN5boost10shared_ptrIN5Caver21CreditsViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::CreditsViewController>::shared_ptr<Caver::CreditsViewController>(Caver::CreditsViewController *)
 *
 * Callers: 2
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *   0x000000000036F67C  Caver::MainMenuViewController::MainMenuViewDidGoToCredits(Caver::MainMenuView *)
 *
 * Callees: 1
 *   0x000000000035716C  Caver::GameViewController::GotoCredits(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA968 string=0x00000000001FA96C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::CreditsViewController>::shared_ptr<Caver::CreditsViewController>()
{
  JUMPOUT(0x357390);
}

