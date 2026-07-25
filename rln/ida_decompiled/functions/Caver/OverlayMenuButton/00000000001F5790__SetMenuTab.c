/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5790
 * Mangled: ._ZN5Caver17OverlayMenuButton10SetMenuTabERKSs
 * Demangled: Caver::OverlayMenuButton::SetMenuTab(std::string const&)
 *
 * Callers: 2
 *   0x000000000034FA78  Caver::GameSceneView::SetCurrentMenuTab(std::string const&)
 *   0x00000000003D41D8  Caver::GameOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003E0C4C  Caver::OverlayMenuButton::SetMenuTab(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5798 string=0x00000000001F579C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::OverlayMenuButton::SetMenuTab()
{
  return _ZN5Caver17OverlayMenuButton10SetMenuTabERKSs();
}

