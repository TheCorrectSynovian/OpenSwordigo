/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8A30
 * Mangled: ._ZN5Caver7GUIView12AddAnimationERKN5boost10shared_ptrINS_12GUIAnimationEEE
 * Demangled: Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *
 * Callers: 41
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x000000000034FCCC  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x0000000000374B20  Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *   0x0000000000375368  Caver::AchievementNotificationView::AnimateOutAfterDelay(float)
 *   0x0000000000383DD0  Caver::OfflineAchievementsView::AnimateIn(void)
 *   0x000000000038CF88  Caver::CreditsView::AnimateIn(void)
 *   0x0000000000393F74  Caver::MainMenuView::AnimateButtonsIn(float)
 *   0x0000000000394244  Caver::MainMenuView::SetOnlineMenuVisible(bool)
 *   0x00000000003973D4  Caver::OnlineMenuView::AnimateIn(void)
 *   0x000000000039DA3C  Caver::ProfilePanelView::AnimateIn(void)
 *   0x00000000003A27CC  Caver::ProfileSelectionView::AnimateIn(void)
 *   0x00000000003A899C  Caver::ProfileManagerLoadingView::Update(float)
 *   0x00000000003A9064  Caver::ProfileManagerLoadingViewController::Update(float)
 *   0x00000000003C3F80  Caver::CoinBar::CoinBar(void)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003CA1B8  Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003CFE74  Caver::ExperienceBar::Update(float)
 *   0x00000000003E1704  Caver::OverlayMenuButton::FadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *   0x00000000003E1EC0  Caver::OverlayMenuButton::FadeInAnimationFinished(void *,Caver::GUIEvent *)
 *   0x00000000003E4378  Caver::TargetFrame::Update(float)
 *   0x00000000003E6BE0  Caver::PurchaseView::AnimateIn(void)
 *   0x00000000003EF488  Caver::StoreView::AnimateIn(void)
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *   0x0000000000404A8C  Caver::GuidePurchaseView::AnimateIn(void)
 *   0x000000000040BD50  Caver::InventoryItemPanel::AddToggleLabelsAnimation(void)
 *   0x000000000040C508  Caver::InventoryItemPanel::ToggleLabelsFadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *   0x0000000000411A84  Caver::InventoryView::AnimateIn(void)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000042543C  Caver::MapView::AnimateLocationMarkerFromNodeToNode(boost::shared_ptr<Caver::MapNode> const&,boost::shared_ptr<Caver::MapNode> const&)
 *   0x000000000042B654  Caver::NewMenuView::PresentFromRectangle(Caver::Rectangle const&)
 *   0x000000000042BD20  Caver::NotificationView::NotificationView(void)
 *   0x000000000042C2F0  Caver::NotificationView::Update(float)
 *   0x000000000042CEEC  Caver::PauseView::TouchEnded(Caver::FWTouch const&)
 *   0x000000000042F460  Caver::PortalView::AnimateIn(void)
 *   0x000000000043650C  Caver::SceneLoadingView::Update(float)
 *   0x000000000043A43C  Caver::SettingsView::UpdateAudioControls(void)
 *   0x000000000043D4B0  Caver::SkillPickerView::AddAnimations(bool)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x000000000048F638  Caver::GUIAlertView::AddAnimations(bool)
 *   0x00000000004987E8  Caver::GUILoadingView::GUILoadingView(void)
 *
 * Callees: 1
 *   0x000000000049FE44  Caver::GUIView::AddAnimation(boost::shared_ptr<Caver::GUIAnimation> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8A38 string=0x00000000001F8A3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIView::AddAnimation()
{
  return _ZN5Caver7GUIView12AddAnimationERKN5boost10shared_ptrINS_12GUIAnimationEEE();
}

