/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4B70
 * Mangled: ._ZN5Caver12GUIAnimationC2Ev
 * Demangled: Caver::GUIAnimation::GUIAnimation(void)
 *
 * Callers: 24
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x000000000034FCCC  Caver::GUIPropertyValue::ValueWithFloat(float)
 *   0x00000000003C3F80  Caver::CoinBar::CoinBar(void)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003CA1B8  Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003CFE74  Caver::ExperienceBar::Update(float)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x00000000003E1704  Caver::OverlayMenuButton::FadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *   0x00000000003E1EC0  Caver::OverlayMenuButton::FadeInAnimationFinished(void *,Caver::GUIEvent *)
 *   0x00000000003E4378  Caver::TargetFrame::Update(float)
 *   0x00000000003FD9B0  Caver::CharacterView::SetLevelUpMode(void)
 *   0x0000000000400D04  Caver::GameOverView::GameOverView(void)
 *   0x000000000040BD50  Caver::InventoryItemPanel::AddToggleLabelsAnimation(void)
 *   0x000000000040C508  Caver::InventoryItemPanel::ToggleLabelsFadeOutAnimationFinished(void *,Caver::GUIEvent *)
 *   0x0000000000417F1C  Caver::ItemInfoView::EnablePurchasing(int,boost::intrusive_ptr<Caver::SceneObject> const&,bool)
 *   0x000000000042543C  Caver::MapView::AnimateLocationMarkerFromNodeToNode(boost::shared_ptr<Caver::MapNode> const&,boost::shared_ptr<Caver::MapNode> const&)
 *   0x000000000042B654  Caver::NewMenuView::PresentFromRectangle(Caver::Rectangle const&)
 *   0x000000000042BD20  Caver::NotificationView::NotificationView(void)
 *   0x000000000042C2F0  Caver::NotificationView::Update(float)
 *   0x000000000043D4B0  Caver::SkillPickerView::AddAnimations(bool)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *   0x000000000048F638  Caver::GUIAlertView::AddAnimations(bool)
 *   0x00000000004987E8  Caver::GUILoadingView::GUILoadingView(void)
 *   0x000000000049FF3C  Caver::GUIView::AddPopupAnimation(void)
 *
 * Callees: 1
 *   0x00000000004A5D34  Caver::GUIAnimation::GUIAnimation(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4B78 string=0x00000000001F4B7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIAnimation::GUIAnimation(Caver::GUIAnimation *this)
{
  return _ZN5Caver12GUIAnimationC2Ev(this);
}

