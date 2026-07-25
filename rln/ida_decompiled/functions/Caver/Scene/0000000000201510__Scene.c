/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201510
 * Mangled: ._ZN5Caver5SceneC2Ev
 * Demangled: Caver::Scene::Scene(void)
 *
 * Callers: 4
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x00000000004625B0  Caver::Scene::Scene(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201518 string=0x000000000020151C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Scene::Scene(Caver::Scene *this)
{
  return _ZN5Caver5SceneC2Ev(this);
}

