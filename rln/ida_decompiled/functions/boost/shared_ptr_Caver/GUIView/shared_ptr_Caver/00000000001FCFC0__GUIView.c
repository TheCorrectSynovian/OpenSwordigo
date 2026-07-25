/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCFC0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver7GUIViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(Caver::GUIView *)
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
 *   0x0000000000388D70  boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>(Caver::GUIView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCFC8 string=0x00000000001FCFCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::GUIView>::shared_ptr<Caver::GUIView>()
{
  return _ZN5boost10shared_ptrIN5Caver7GUIViewEEC2IS2_EEPT_();
}

