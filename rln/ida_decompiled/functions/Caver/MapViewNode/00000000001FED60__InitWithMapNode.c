/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FED60
 * Mangled: ._ZN5Caver11MapViewNode15InitWithMapNodeERKN5boost10shared_ptrINS_7MapNodeEEE
 * Demangled: Caver::MapViewNode::InitWithMapNode(boost::shared_ptr<Caver::MapNode> const&)
 *
 * Callers: 1
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *
 * Callees: 1
 *   0x000000000042963C  Caver::MapViewNode::InitWithMapNode(boost::shared_ptr<Caver::MapNode> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FED68 string=0x00000000001FED6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::MapViewNode::InitWithMapNode()
{
  return _ZN5Caver11MapViewNode15InitWithMapNodeERKN5boost10shared_ptrINS_7MapNodeEEE();
}

