/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF2A0
 * Mangled: ._ZN5boost10shared_ptrIN5Caver5SceneEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>(Caver::Scene *)
 *
 * Callers: 4
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF2A8 string=0x00000000001FF2AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::Scene>::shared_ptr<Caver::Scene>()
{
  JUMPOUT(0x353F7C);
}

