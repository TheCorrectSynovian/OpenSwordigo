/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002039B0
 * Mangled: ._ZNK5Caver8GUILabel8TextSizeEv
 * Demangled: Caver::GUILabel::TextSize(void)
 *
 * Callers: 22
 *   0x00000000003748B4  Caver::AchievementNotificationView::UpdateLayout(void)
 *   0x0000000000388640  Caver::OfflineAchievementView::LayoutSubviews(void)
 *   0x000000000038935C  Caver::BadgeCountView::BadgeCountView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000393F74  Caver::MainMenuView::AnimateButtonsIn(float)
 *   0x000000000039CB54  Caver::PlayerProfile::equippedArmorName(void)
 *   0x00000000003A8080  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *   0x00000000003C4F90  Caver::CoinBar::UpdateText(void)
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x00000000003ED584  Caver::StoreProductView::LayoutSubviews(void)
 *   0x00000000003F2A00  Caver::StoreViewController::UpdateProductBuyButton(std::string const&)
 *   0x00000000003F8230  Caver::AttributePointsView::LayoutSubviews(void)
 *   0x0000000000404520  Caver::GuidePurchaseView::LayoutSubviews(void)
 *   0x0000000000432A08  Caver::QuestsView::LayoutSubviews(void)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x0000000000490628  Caver::GUIAlertView::SetTitle(std::string const&)
 *   0x0000000000490850  Caver::GUIAlertView::SetMessage(std::string const&)
 *   0x0000000000490F48  Caver::GUIAlertView::AddLink(std::string const&)
 *   0x00000000004B9DBC  Caver::GUITextFieldImpl::TextInputTextDidChange(std::string const&)
 *   0x00000000004BA69C  Caver::GUITextFieldImpl::TextSize(void)
 *
 * Callees: 1
 *   0x0000000000498200  Caver::GUILabel::TextSize(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000002039B4 string=0x0000000000498200 "\t"
 *   insn=0x00000000002039B8 string=0x00000000002039BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUILabel::TextSize(Caver::GUILabel *this)
{
  return _ZNK5Caver8GUILabel8TextSizeEv(this);
}

