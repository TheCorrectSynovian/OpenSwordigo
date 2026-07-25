/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB420
 * Mangled: ._ZN5Caver12GUIResponder19HandleKeyboardEventERKNS_16GUIKeyboardEventE
 * Demangled: Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callers: 14
 *   0x0000000000383DD0  Caver::OfflineAchievementsView::AnimateIn(void)
 *   0x000000000038CF88  Caver::CreditsView::AnimateIn(void)
 *   0x00000000003946B0  Caver::MainMenuView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000003A27CC  Caver::ProfileSelectionView::AnimateIn(void)
 *   0x00000000003C8890  Caver::ConfigureOverlayView::HitTest(Caver::Vector2 const&)
 *   0x00000000003D7C60  Caver::GameOverlayView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000003E6BE0  Caver::PurchaseView::AnimateIn(void)
 *   0x00000000003EF488  Caver::StoreView::AnimateIn(void)
 *   0x0000000000401B2C  Caver::GameOverView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x000000000042CEEC  Caver::PauseView::TouchEnded(Caver::FWTouch const&)
 *   0x000000000042FA20  Caver::PortalView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x000000000043E2A0  Caver::SkillPickerView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x00000000004420BC  Caver::TabbedMenuView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *   0x0000000000491C10  Caver::GUIAlertView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x000000000049B56C  Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB428 string=0x00000000001FB42C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIResponder::HandleKeyboardEvent()
{
  return _ZN5Caver12GUIResponder19HandleKeyboardEventERKNS_16GUIKeyboardEventE();
}

