/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8CE0
 * Mangled: ._ZN5Caver20GameInterfaceBuilder11NormalLabelERKSsNS_5ColorES3_
 * Demangled: Caver::GameInterfaceBuilder::NormalLabel(std::string const&,Caver::Color,Caver::Color)
 *
 * Callers: 21
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *   0x000000000038935C  Caver::BadgeCountView::BadgeCountView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003A4DE8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ProfileSelectionView,Caver::ProfileSelectionView>(boost::shared_ptr<Caver::ProfileSelectionView> const*,Caver::ProfileSelectionView *)
 *   0x00000000003A8080  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *   0x00000000003E4FB8  Caver::PurchaseView::PurchaseView(void)
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x00000000003F972C  Caver::CharacterView::CharacterView(void)
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x0000000000407478  Caver::InventoryItemPanel::Init(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000042C798  Caver::NotificationView::~NotificationView()
 *   0x0000000000430208  Caver::QuestsView::QuestsView(void)
 *   0x0000000000434DD0  std::__uninitialized_copy<false>::__uninit_copy<Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *>(Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *,Caver::QuestsView::LabelGroup *)
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *   0x000000000043F15C  Caver::StripeView::SetTitle(std::string const&)
 *
 * Callees: 1
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8CE8 string=0x00000000001F8CEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GameInterfaceBuilder::NormalLabel()
{
  JUMPOUT(0x33EA24);
}

