/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC220
 * Mangled: ._ZN5Caver9GUIButton8SetTitleERKSs
 * Demangled: Caver::GUIButton::SetTitle(std::string const&)
 *
 * Callers: 18
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000003662D0  Caver::GuidePurchaseViewController::SetBuyButtonEnabled(bool)
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *   0x00000000003671C8  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000393F74  Caver::MainMenuView::AnimateButtonsIn(float)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003E4FB8  Caver::PurchaseView::PurchaseView(void)
 *   0x00000000003E6BB8  Caver::PurchaseView::SetBuyButtonTitle(std::string const&)
 *   0x00000000003E871C  Caver::PurchaseViewController::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000041F0FC  Caver::MapMenuPage::ShowTravelToButtonFromNode(Caver::MapViewNode *)
 *   0x0000000000490F48  Caver::GUIAlertView::AddLink(std::string const&)
 *
 * Callees: 1
 *   0x0000000000495A74  Caver::GUIButton::SetTitle(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC228 string=0x00000000001FC22C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIButton::SetTitle(Caver::GUIButton *this)
{
  return _ZN5Caver9GUIButton8SetTitleERKSs(this);
}

