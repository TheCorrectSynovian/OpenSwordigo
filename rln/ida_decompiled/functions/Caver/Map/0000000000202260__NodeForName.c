/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202260
 * Mangled: ._ZN5Caver3Map11NodeForNameERKSs
 * Demangled: Caver::Map::NodeForName(std::string const&)
 *
 * Callers: 9
 *   0x0000000000351C5C  Caver::GameViewController::LoadGameState(void)
 *   0x0000000000354488  Caver::GameViewController::UpdateGuideTarget(bool)
 *   0x00000000003B62B4  Caver::GameState::LoadFromProtobufMessage(Caver::Proto::GameState const&)
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *   0x0000000000424008  Caver::MapView::UpdateTargetPath(void)
 *   0x0000000000424930  Caver::MapView::RecursivelySetVisibleNodes(Caver::MapNode *,Caver::Vector2 const&,Caver::Vector2 const&)
 *   0x0000000000424D10  Caver::MapView::UpdateNodesSprite(void)
 *   0x000000000042543C  Caver::MapView::AnimateLocationMarkerFromNodeToNode(boost::shared_ptr<Caver::MapNode> const&,boost::shared_ptr<Caver::MapNode> const&)
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000003BC1FC  Caver::Map::NodeForName(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202268 string=0x000000000020226C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Map::NodeForName()
{
  return _ZN5Caver3Map11NodeForNameERKSs();
}

