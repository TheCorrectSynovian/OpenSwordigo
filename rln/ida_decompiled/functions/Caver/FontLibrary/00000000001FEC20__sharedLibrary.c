/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEC20
 * Mangled: ._ZN5Caver11FontLibrary13sharedLibraryEv
 * Demangled: Caver::FontLibrary::sharedLibrary(void)
 *
 * Callers: 38
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x000000000022E30C  Caver::OverlayTextComponent::UpdateText(void)
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *   0x00000000003C3F80  Caver::CoinBar::CoinBar(void)
 *   0x00000000003CDB58  Caver::ExperienceBar::ExperienceBar(void)
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000003DCAC0  std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIAnimation>*,std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>>,ulong,boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000003E2B10  Caver::TargetFrame::TargetFrame(void)
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x00000000003F5BF0  boost::enable_shared_from_this<Caver::GUIViewController>::_internal_accept_owner<Caver::PurchaseViewController,Caver::PurchaseViewController>(boost::shared_ptr<Caver::PurchaseViewController> const*,Caver::PurchaseViewController *)
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x000000000040D64C  Caver::InventoryTrinketSlot::Init(boost::shared_ptr<Caver::GameState> const&,float)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x000000000041538C  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *   0x0000000000416BD0  Caver::ItemInfoView::Init(void)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000041CF44  Caver::MapMenuPage::MapMenuPage(void)
 *   0x000000000041F0FC  Caver::MapMenuPage::ShowTravelToButtonFromNode(Caver::MapViewNode *)
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000004C259C  Caver::Font::FontWithName(std::string const&)
 *   0x00000000004C25C8  Caver::Font::SystemFont(void)
 *   0x00000000004C25EC  Caver::Font::SmallSystemFont(void)
 *   0x00000000004C2610  Caver::Font::DefaultFont(void)
 *   0x00000000004C2634  Caver::Font::SmallDefaultFont(void)
 *
 * Callees: 1
 *   0x00000000004C33B0  Caver::FontLibrary::sharedLibrary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEC28 string=0x00000000001FEC2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FontLibrary::sharedLibrary(Caver::FontLibrary *this)
{
  return _ZN5Caver11FontLibrary13sharedLibraryEv(this);
}

