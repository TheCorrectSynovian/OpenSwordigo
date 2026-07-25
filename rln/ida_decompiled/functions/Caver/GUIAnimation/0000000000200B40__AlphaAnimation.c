/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200B40
 * Mangled: ._ZN5Caver12GUIAnimation14AlphaAnimationEfff
 * Demangled: Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *
 * Callers: 15
 *   0x0000000000383DD0  Caver::OfflineAchievementsView::AnimateIn(void)
 *   0x000000000038CF88  Caver::CreditsView::AnimateIn(void)
 *   0x0000000000394244  Caver::MainMenuView::SetOnlineMenuVisible(bool)
 *   0x000000000039DA3C  Caver::ProfilePanelView::AnimateIn(void)
 *   0x00000000003A899C  Caver::ProfileManagerLoadingView::Update(float)
 *   0x00000000003A9064  Caver::ProfileManagerLoadingViewController::Update(float)
 *   0x00000000003E6BE0  Caver::PurchaseView::AnimateIn(void)
 *   0x00000000003EF488  Caver::StoreView::AnimateIn(void)
 *   0x0000000000404A8C  Caver::GuidePurchaseView::AnimateIn(void)
 *   0x000000000042CEEC  Caver::PauseView::TouchEnded(Caver::FWTouch const&)
 *   0x000000000042F460  Caver::PortalView::AnimateIn(void)
 *   0x000000000043650C  Caver::SceneLoadingView::Update(float)
 *   0x000000000043A43C  Caver::SettingsView::UpdateAudioControls(void)
 *   0x000000000043D4B0  Caver::SkillPickerView::AddAnimations(bool)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *
 * Callees: 1
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200B48 string=0x0000000000200B4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIAnimation::AlphaAnimation(Caver::GUIAnimation *this, float a2, float a3, float a4)
{
  return _ZN5Caver12GUIAnimation14AlphaAnimationEfff(this, a2, a3, a4);
}

