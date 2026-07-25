/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002011A0
 * Mangled: ._ZN5Caver5Scene12LoadFromFileERKSs
 * Demangled: Caver::Scene::LoadFromFile(std::string const&)
 *
 * Callers: 4
 *   0x000000000035303C  Caver::GameViewController::BackgroundLoad(void)
 *   0x000000000036B51C  Caver::MainMenuViewController::LoadView(void)
 *   0x000000000038BFD8  Caver::CreditsView::CreditsView(void)
 *   0x000000000039AC98  Caver::ProfilePanelView::InitWithProfile(boost::shared_ptr<Caver::PlayerProfile> const&)
 *
 * Callees: 1
 *   0x0000000000463780  Caver::Scene::LoadFromFile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002011A8 string=0x00000000002011AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Scene::LoadFromFile()
{
  return _ZN5Caver5Scene12LoadFromFileERKSs();
}

