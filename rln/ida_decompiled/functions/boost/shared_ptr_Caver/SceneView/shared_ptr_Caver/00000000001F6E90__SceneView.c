/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6E90
 * Mangled: ._ZN5boost10shared_ptrIN5Caver9SceneViewEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>(Caver::SceneView *)
 *
 * Callers: 3
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x000000000038D294  boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>(Caver::SceneView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6E98 string=0x00000000001F6E9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::shared_ptr<Caver::SceneView>::shared_ptr<Caver::SceneView>()
{
  return _ZN5boost10shared_ptrIN5Caver9SceneViewEEC2IS2_EEPT_();
}

