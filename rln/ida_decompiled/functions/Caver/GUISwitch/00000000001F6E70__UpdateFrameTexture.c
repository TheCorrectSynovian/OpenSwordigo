/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6E70
 * Mangled: ._ZN5Caver9GUISwitch18UpdateFrameTextureEv
 * Demangled: Caver::GUISwitch::UpdateFrameTexture(void)
 *
 * Callers: 9
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x0000000000346870  Caver::GameMenuViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *   0x0000000000346B28  Caver::GameMenuViewController::StoreViewControllerDidPurchaseProduct(Caver::StoreViewController *,std::string const&)
 *   0x0000000000371414  Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x0000000000371760  Caver::PortalViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *   0x00000000003717BC  `non-virtual thunk to'Caver::PortalViewController::PurchaseViewControllerDidPurchaseProduct(Caver::PurchaseViewController *)
 *   0x000000000037181C  Caver::PortalViewController::StoreViewControllerDidPurchaseProduct(Caver::StoreViewController *,std::string const&)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *
 * Callees: 1
 *   0x000000000049DC70  Caver::GUISwitch::UpdateFrameTexture(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6E78 string=0x00000000001F6E7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUISwitch::UpdateFrameTexture(Caver::GUISwitch *this)
{
  return _ZN5Caver9GUISwitch18UpdateFrameTextureEv(this);
}

