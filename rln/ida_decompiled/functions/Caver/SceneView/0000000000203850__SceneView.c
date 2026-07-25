/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203850
 * Mangled: ._ZN5Caver9SceneViewC2Ev
 * Demangled: Caver::SceneView::SceneView(void)
 *
 * Callers: 3
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000038DF1C  Caver::MainMenuView::MainMenuView(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x0000000000371F64  Caver::SceneView::SceneView(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203858 string=0x000000000020385C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SceneView::SceneView(Caver::SceneView *this)
{
  return _ZN5Caver9SceneViewC2Ev(this);
}

