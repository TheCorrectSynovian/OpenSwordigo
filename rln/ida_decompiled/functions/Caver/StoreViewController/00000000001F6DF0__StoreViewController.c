/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6DF0
 * Mangled: ._ZN5Caver19StoreViewControllerC2Ev
 * Demangled: Caver::StoreViewController::StoreViewController(void)
 *
 * Callers: 4
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x000000000036F394  Caver::MainMenuViewController::MainMenuViewDidOpenShop(Caver::MainMenuView *)
 *   0x0000000000371414  Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *
 * Callees: 1
 *   0x00000000003EFFF4  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::StoreProductView,Caver::StoreProductView>(boost::shared_ptr<Caver::StoreProductView> const*,Caver::StoreProductView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6DF8 string=0x00000000001F6DFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::StoreViewController::StoreViewController(Caver::StoreViewController *this)
{
  JUMPOUT(0x3F04F0);
}

