/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002026D0
 * Mangled: ._ZN5Caver11FontLibrary16SmallDefaultFontEv
 * Demangled: Caver::FontLibrary::SmallDefaultFont(void)
 *
 * Callers: 13
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *   0x0000000000372D08  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::SkillPickerView,Caver::SkillPickerView>(boost::shared_ptr<Caver::SkillPickerView> const*,Caver::SkillPickerView *)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003E611C  Caver::PurchaseView::SetProductInfo(std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,float)
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *   0x00000000003EDC0C  Caver::StoreView::StoreView(void)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000004C2634  Caver::Font::SmallDefaultFont(void)
 *
 * Callees: 1
 *   0x00000000004C40DC  Caver::FontLibrary::SystemFont(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002026D8 string=0x00000000002026DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::FontLibrary::SmallDefaultFont(Caver::FontLibrary *this)
{
  JUMPOUT(0x4C44A8);
}

