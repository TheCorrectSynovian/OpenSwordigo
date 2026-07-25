/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC750
 * Mangled: ._ZN5Caver9GUIButton8SetImageERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUIButton::SetImage(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 13
 *   0x000000000033E904  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::ConfigureOverlayView,Caver::ConfigureOverlayView>(boost::shared_ptr<Caver::ConfigureOverlayView> const*,Caver::ConfigureOverlayView *)
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000395EB8  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::OnlineMenuView,Caver::OnlineMenuView>(boost::shared_ptr<Caver::OnlineMenuView> const*,Caver::OnlineMenuView *)
 *   0x00000000003CA1B8  Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003E0C4C  Caver::OverlayMenuButton::SetMenuTab(std::string const&)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x000000000042A9C8  Caver::NewMenuView::NewMenuView(void)
 *   0x000000000043A43C  Caver::SettingsView::UpdateAudioControls(void)
 *   0x0000000000495B00  Caver::GUIButton::SetImage(std::string const&)
 *
 * Callees: 1
 *   0x0000000000495B00  Caver::GUIButton::SetImage(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC758 string=0x00000000001FC75C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIButton::SetImage()
{
  JUMPOUT(0x495BCC);
}

