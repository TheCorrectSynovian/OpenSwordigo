/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5960
 * Mangled: ._ZN5Caver9GUIButton12SetTintColorENS_5ColorE
 * Demangled: Caver::GUIButton::SetTintColor(Caver::Color)
 *
 * Callers: 13
 *   0x00000000003662D0  Caver::GuidePurchaseViewController::SetBuyButtonEnabled(bool)
 *   0x0000000000366570  Caver::GuidePurchaseViewController::SetRestoreButtonEnabled(bool)
 *   0x00000000003671C8  Caver::GuidePurchaseViewController::GuidePurchaseViewRestoreButtonPressed(Caver::GuidePurchaseView *)
 *   0x0000000000380D28  Caver::OfflineAchievementsView::OfflineAchievementsView(boost::shared_ptr<Caver::PlayerProfile> const&)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x00000000003A8080  Caver::ProfileManagerLoadingView::ProfileManagerLoadingView(void)
 *   0x00000000003D6974  Caver::GameOverlayView::SetSkillButtonDisabled(bool)
 *   0x00000000003E0734  Caver::OverlayButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000003E4FB8  Caver::PurchaseView::PurchaseView(void)
 *   0x00000000003E6B00  Caver::PurchaseView::SetBuyButtonEnabled(bool)
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *   0x0000000000401D04  Caver::GuidePurchaseView::GuidePurchaseView(void)
 *
 * Callees: 1
 *   0x00000000004960A0  Caver::GUIButton::SetTintColor(Caver::Color)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F5964 string=0x00000000004960A0 "("
 *   insn=0x00000000001F5968 string=0x00000000001F596C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIButton::SetTintColor()
{
  return _ZN5Caver9GUIButton12SetTintColorENS_5ColorE();
}

