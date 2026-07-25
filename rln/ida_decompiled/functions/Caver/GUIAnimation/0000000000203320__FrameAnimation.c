/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203320
 * Mangled: ._ZN5Caver12GUIAnimation14FrameAnimationERKNS_9RectangleES3_f
 * Demangled: Caver::GUIAnimation::FrameAnimation(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *
 * Callers: 12
 *   0x0000000000374B20  Caver::AchievementNotificationView::PresentInView(Caver::GUIView *)
 *   0x0000000000375368  Caver::AchievementNotificationView::AnimateOutAfterDelay(float)
 *   0x0000000000383DD0  Caver::OfflineAchievementsView::AnimateIn(void)
 *   0x0000000000393F74  Caver::MainMenuView::AnimateButtonsIn(float)
 *   0x00000000003973D4  Caver::OnlineMenuView::AnimateIn(void)
 *   0x00000000003A27CC  Caver::ProfileSelectionView::AnimateIn(void)
 *   0x00000000003E6BE0  Caver::PurchaseView::AnimateIn(void)
 *   0x00000000003EF488  Caver::StoreView::AnimateIn(void)
 *   0x0000000000404A8C  Caver::GuidePurchaseView::AnimateIn(void)
 *   0x0000000000411A84  Caver::InventoryView::AnimateIn(void)
 *   0x000000000043D4B0  Caver::SkillPickerView::AddAnimations(bool)
 *   0x000000000043F67C  Caver::TabbedMenuView::TabbedMenuView(void)
 *
 * Callees: 1
 *   0x00000000004A5E88  Caver::GUIAnimation::AlphaAnimation(float,float,float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203328 string=0x000000000020332C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIAnimation::FrameAnimation()
{
  JUMPOUT(0x4A6510);
}

