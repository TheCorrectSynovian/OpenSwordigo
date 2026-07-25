/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203310
 * Mangled: ._ZN5boost10shared_ptrIN5Caver19StoreViewControllerEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::StoreViewController>::shared_ptr<Caver::StoreViewController>(Caver::StoreViewController *)
 *
 * Callers: 4
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000036F394  Caver::MainMenuViewController::MainMenuViewDidOpenShop(Caver::MainMenuView *)
 *   0x0000000000371414  Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callees: 1
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203318 string=0x000000000020331C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::StoreViewController>::shared_ptr<Caver::StoreViewController>()
{
  JUMPOUT(0x346780);
}

