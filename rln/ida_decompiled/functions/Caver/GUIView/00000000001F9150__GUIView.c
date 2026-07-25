/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9150
 * Mangled: ._ZN5Caver7GUIViewC2Ev
 * Demangled: Caver::GUIView::GUIView(void)
 *
 * Callers: 7
 *   0x0000000000386478  Caver::OfflineAchievementView::OfflineAchievementView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000003EC094  Caver::StoreProductView::StoreProductView(void)
 *   0x000000000041F0FC  Caver::MapMenuPage::ShowTravelToButtonFromNode(Caver::MapViewNode *)
 *   0x000000000043BACC  Caver::SkillPickerView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x000000000049901C  Caver::GUINavigationController::LoadView(void)
 *
 * Callees: 1
 *   0x000000000049E2A0  Caver::GUIView::GUIView(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F9154 string=0x000000000049E2A0 ""
 *   insn=0x00000000001F9158 string=0x00000000001F915C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::GUIView(Caver::GUIView *this)
{
  return _ZN5Caver7GUIViewC2Ev(this);
}

