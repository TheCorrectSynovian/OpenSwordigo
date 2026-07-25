/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9DE0
 * Mangled: ._ZN5Caver13GameSceneView17SetCurrentMenuTabERKSs
 * Demangled: Caver::GameSceneView::SetCurrentMenuTab(std::string const&)
 *
 * Callers: 2
 *   0x00000000003577CC  Caver::GameViewController::GameMenuViewControllerDismissed(Caver::GameMenuViewController *)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x000000000034FA78  Caver::GameSceneView::SetCurrentMenuTab(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9DE8 string=0x00000000001F9DEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameSceneView::SetCurrentMenuTab()
{
  return _ZN5Caver13GameSceneView17SetCurrentMenuTabERKSs();
}

