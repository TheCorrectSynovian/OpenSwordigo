/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA6B0
 * Mangled: ._ZN5Caver7MapView10SelectNodeERKN5boost10shared_ptrINS_7MapNodeEEE
 * Demangled: Caver::MapView::SelectNode(boost::shared_ptr<Caver::MapNode> const&)
 *
 * Callers: 2
 *   0x000000000041DE54  Caver::MapMenuPage::InitWithGameState(boost::shared_ptr<Caver::GameState> const&,bool)
 *   0x000000000042D348  Caver::PortalView::PortalView(void)
 *
 * Callees: 1
 *   0x0000000000427978  Caver::MapView::SelectNode(boost::shared_ptr<Caver::MapNode> const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FA6B4 string=0x0000000000427978 "("
 *   insn=0x00000000001FA6B8 string=0x00000000001FA6BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MapView::SelectNode()
{
  return _ZN5Caver7MapView10SelectNodeERKN5boost10shared_ptrINS_7MapNodeEEE();
}

