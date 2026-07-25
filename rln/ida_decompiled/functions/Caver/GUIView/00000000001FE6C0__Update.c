/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE6C0
 * Mangled: ._ZN5Caver7GUIView6UpdateEf
 * Demangled: Caver::GUIView::Update(float)
 *
 * Callers: 36
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x0000000000372220  Caver::SceneView::Update(float)
 *   0x0000000000374B18  Caver::AchievementNotificationView::Update(float)
 *   0x000000000039465C  Caver::MainMenuView::Update(float)
 *   0x000000000039DA3C  Caver::ProfilePanelView::AnimateIn(void)
 *   0x00000000003A248C  Caver::ProfileSelectionView::Update(float)
 *   0x00000000003A899C  Caver::ProfileManagerLoadingView::Update(float)
 *   0x00000000003C4C84  Caver::CoinBar::Update(float)
 *   0x00000000003CFE74  Caver::ExperienceBar::Update(float)
 *   0x00000000003E06A0  Caver::OverlayButton::Update(float)
 *   0x00000000003E4378  Caver::TargetFrame::Update(float)
 *   0x00000000003F8ADC  Caver::AttributePointsView::Update(float)
 *   0x00000000003FF594  Caver::CharacterView::Update(float)
 *   0x000000000040AD00  Caver::InventoryItemPanel::Update(float)
 *   0x000000000040E0F0  Caver::InventoryTrinketSlot::Update(float)
 *   0x0000000000411A84  Caver::InventoryView::AnimateIn(void)
 *   0x00000000004149FC  Caver::ItemBuyPopupView::Update(float)
 *   0x0000000000416758  Caver::ItemInfoPopupView::Update(float)
 *   0x000000000041C790  Caver::LevelUpView::Update(float)
 *   0x000000000041CD00  Caver::LoadingView::Update(float)
 *   0x0000000000420618  Caver::MapPopupView::Update(float)
 *   0x0000000000425ABC  Caver::MapView::Update(float)
 *   0x000000000042A41C  Caver::MenuItemSlot::Update(float)
 *   0x000000000042B654  Caver::NewMenuView::PresentFromRectangle(Caver::Rectangle const&)
 *   0x000000000042C2F0  Caver::NotificationView::Update(float)
 *   0x000000000043AF84  Caver::SettingsView::Update(float)
 *   0x000000000043DFD8  Caver::SkillPickerView::Update(float)
 *   0x0000000000441D38  Caver::TabbedMenuView::Update(float)
 *   0x000000000044353C  Caver::TabView::Update(float)
 *   0x00000000004918F0  Caver::GUIAlertView::PresentFromView(Caver::GUIView *)
 *   0x0000000000494468  Caver::GUIBubbleView::GUIBubbleView(void)
 *   0x000000000049B75C  Caver::GUIScrollView::Update(float)
 *   0x000000000049CCD8  Caver::GUISlider::Update(float)
 *   0x00000000004A22B8  Caver::GUIWindow::SetRootViewController(boost::shared_ptr<Caver::GUIViewController> const&)
 *   0x00000000004A770C  Caver::GUIEffectView::Update(float)
 *   0x00000000004B9C54  Caver::GUITextFieldImpl::Update(float)
 *
 * Callees: 1
 *   0x000000000049E55C  Caver::GUIView::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE6C8 string=0x00000000001FE6CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::Update(Caver::GUIView *this, float a2)
{
  return _ZN5Caver7GUIView6UpdateEf(this, a2);
}

