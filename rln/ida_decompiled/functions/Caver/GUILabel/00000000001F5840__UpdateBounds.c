/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5840
 * Mangled: ._ZN5Caver8GUILabel12UpdateBoundsEv
 * Demangled: Caver::GUILabel::UpdateBounds(void)
 *
 * Callers: 26
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *   0x0000000000383ADC  Caver::OfflineAchievementsView::LayoutSubviews(void)
 *   0x0000000000388640  Caver::OfflineAchievementView::LayoutSubviews(void)
 *   0x000000000038A020  Caver::ChooseAgeView::ChooseAgeView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x000000000039824C  Caver::ProfilePanelView::ProfilePanelView(void)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003FB1F0  Caver::CharacterView::CreateAttributesHeaderView(void)
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *   0x00000000004069EC  Caver::GuideToggleView::GuideToggleView(void)
 *   0x000000000040D64C  Caver::InventoryTrinketSlot::Init(boost::shared_ptr<Caver::GameState> const&,float)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000041B220  Caver::LevelUpView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *   0x000000000042C798  Caver::NotificationView::~NotificationView()
 *   0x00000000004370B8  Caver::SettingsView::SettingsView(void)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000043E760  boost::checked_array_delete<boost::shared_ptr<Caver::MenuItemSlot>>(boost::shared_ptr<Caver::MenuItemSlot> *)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x000000000048EFC8  Caver::GUIAlertView::GUIAlertView(void)
 *   0x0000000000497B54  Caver::GUILabel::UpdateText(void)
 *   0x0000000000497FDC  Caver::GUILabel::AddText(std::string const&)
 *   0x00000000004981C4  Caver::GUILabel::SetBounds(Caver::Rectangle const&)
 *   0x00000000004BA630  Caver::GUITextFieldImpl::setHorizontalTextAlignment(Caver::GUITextAlignment)
 *   0x00000000004BA648  Caver::GUITextFieldImpl::setVerticalTextAlignment(Caver::GUITextAlignment)
 *
 * Callees: 1
 *   0x0000000000497B54  Caver::GUILabel::UpdateText(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5848 string=0x00000000001F584C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUILabel::UpdateBounds(Caver::GUILabel *this)
{
  JUMPOUT(0x497E24);
}

