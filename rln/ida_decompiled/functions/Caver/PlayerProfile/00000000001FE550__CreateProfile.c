/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE550
 * Mangled: ._ZN5Caver13PlayerProfile13CreateProfileERKSs
 * Demangled: Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Callers: 3
 *   0x000000000020E548  Caver::CaverShell::InitView(void)
 *   0x0000000000351C5C  Caver::GameViewController::LoadGameState(void)
 *   0x000000000039E1A8  Caver::ProfilePanelView::CreateProfile(void)
 *
 * Callees: 1
 *   0x00000000003BFDFC  Caver::PlayerProfile::CreateProfile(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE558 string=0x00000000001FE55C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::PlayerProfile::CreateProfile()
{
  return _ZN5Caver13PlayerProfile13CreateProfileERKSs();
}

