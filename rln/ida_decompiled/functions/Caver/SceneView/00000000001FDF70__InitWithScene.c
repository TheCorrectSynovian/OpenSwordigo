/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDF70
 * Mangled: ._ZN5Caver9SceneView13InitWithSceneERKN5boost10shared_ptrINS_5SceneEEE
 * Demangled: Caver::SceneView::InitWithScene(boost::shared_ptr<Caver::Scene> const&)
 *
 * Callers: 3
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x0000000000371F64  Caver::SceneView::SceneView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDF78 string=0x00000000001FDF7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::SceneView::InitWithScene()
{
  JUMPOUT(0x37200C);
}

