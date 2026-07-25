/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF270
 * Mangled: ._ZN5Caver15StoreController16SharedControllerEv
 * Demangled: Caver::StoreController::SharedController(void)
 *
 * Callers: 19
 *   0x00000000003437FC  Caver::GameMenuViewController::TabbedMenuViewSelectedTabDidChange(Caver::TabbedMenuView *)
 *   0x0000000000346274  Caver::GameMenuViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x00000000003656F4  Caver::GuidePurchaseViewController::LoadView(void)
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *   0x00000000003671C8  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *   0x000000000036C584  Caver::MainMenuViewController::Update(float)
 *   0x000000000036F394  Caver::MainMenuViewController::MainMenuViewDidOpenShop(Caver::MainMenuView *)
 *   0x0000000000371414  Caver::PortalViewController::GuideToggleViewEnableStateChanged(Caver::GuideToggleView *)
 *   0x000000000039FB4C  Caver::ProfilePanelView::DeleteTextFieldValueChanged(void *,Caver::GUIEvent *)
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003EA4EC  Caver::PurchaseViewController::FetchProduct(std::string const&)
 *   0x00000000003EB75C  Caver::PurchaseViewController::HandlePurchaseSuccess(void)
 *   0x00000000003F08EC  Caver::StoreViewController::LoadView(void)
 *   0x00000000003F2524  Caver::StoreViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x00000000003F3CD8  Caver::StoreViewController::Update(float)
 *   0x00000000004BB450  std::list<Caver::TargetAction<void ()(bool,std::string const&)>,std::allocator<Caver::TargetAction<void ()(bool,std::string const&)>>>::erase(std::_List_iterator<Caver::TargetAction<void ()(bool,std::string const&)>>)
 *
 * Callees: 1
 *   0x00000000003A9598  Caver::StoreController::SharedController(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF278 string=0x00000000001FF27C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::StoreController::SharedController(Caver::StoreController *this)
{
  return _ZN5Caver15StoreController16SharedControllerEv(this);
}

