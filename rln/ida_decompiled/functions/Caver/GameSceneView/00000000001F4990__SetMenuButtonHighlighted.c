/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4990
 * Mangled: ._ZN5Caver13GameSceneView24SetMenuButtonHighlightedEb
 * Demangled: Caver::GameSceneView::SetMenuButtonHighlighted(bool)
 *
 * Callers: 2
 *   0x000000000035A7C8  boost::shared_ptr<Caver::PortalViewController>::shared_ptr<Caver::PortalViewController>(Caver::PortalViewController *)
 *   0x000000000035B604  Caver::GameViewController::AddItemToCharacter(boost::shared_ptr<Caver::Item> const&)
 *
 * Callees: 1
 *   0x000000000034FAB4  Caver::GameSceneView::SetMenuButtonHighlighted(bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4994 string=0x000000000034FAB4 ""
 *   insn=0x00000000001F4998 string=0x00000000001F499C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameSceneView::SetMenuButtonHighlighted(Caver::GameSceneView *this, bool a2)
{
  return _ZN5Caver13GameSceneView24SetMenuButtonHighlightedEb(this, a2);
}

