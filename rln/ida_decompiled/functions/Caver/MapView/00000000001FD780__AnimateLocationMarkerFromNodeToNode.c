/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD780
 * Mangled: ._ZN5Caver7MapView35AnimateLocationMarkerFromNodeToNodeERKN5boost10shared_ptrINS_7MapNodeEEES6_
 * Demangled: Caver::MapView::AnimateLocationMarkerFromNodeToNode(boost::shared_ptr<Caver::MapNode> const&,boost::shared_ptr<Caver::MapNode> const&)
 *
 * Callers: 1
 *   0x0000000000436A54  Caver::SceneLoadingView::AnimateIn(void)
 *
 * Callees: 1
 *   0x000000000042543C  Caver::MapView::AnimateLocationMarkerFromNodeToNode(boost::shared_ptr<Caver::MapNode> const&,boost::shared_ptr<Caver::MapNode> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD788 string=0x00000000001FD78C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MapView::AnimateLocationMarkerFromNodeToNode()
{
  return _ZN5Caver7MapView35AnimateLocationMarkerFromNodeToNodeERKN5boost10shared_ptrINS_7MapNodeEEES6_();
}

