/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD940
 * Mangled: ._ZN5Caver11GameOptions13sharedOptionsEv
 * Demangled: Caver::GameOptions::sharedOptions(void)
 *
 * Callers: 16
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x000000000033E14C  Caver::ConfigureOverlayViewController::ConfigureOverlayViewLayoutDidChange(Caver::ConfigureOverlayView *)
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x0000000000357D1C  Caver::GameViewController::Update(float)
 *   0x0000000000367C84  Caver::GuidePurchaseViewController::HandlePurchaseSuccess(void)
 *   0x0000000000393094  Caver::MainMenuView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x00000000003A9710  Caver::StoreController::IsGuideUnlockedCheck(void)
 *   0x00000000003A9A78  Caver::StoreController::IsCoinDoublerUnlockedCheck(void)
 *   0x00000000003A9DE0  Caver::StoreController::IsNoAdsUnlockedCheck(void)
 *   0x00000000003AA148  Caver::StoreController::IsProductUnlockedCheck(std::string const&)
 *   0x00000000003AA898  Caver::StoreController::ResetProductUnlocksToPurchases(void)
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003D4C10  Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x0000000000439CFC  Caver::SettingsView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x000000000043A43C  Caver::SettingsView::UpdateAudioControls(void)
 *
 * Callees: 1
 *   0x00000000003B44A4  Caver::GameOptions::sharedOptions(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD948 string=0x00000000001FD94C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOptions::sharedOptions(Caver::GameOptions *this)
{
  return _ZN5Caver11GameOptions13sharedOptionsEv(this);
}

