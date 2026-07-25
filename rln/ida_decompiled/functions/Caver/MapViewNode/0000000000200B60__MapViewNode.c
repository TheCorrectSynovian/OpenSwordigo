/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200B60
 * Mangled: ._ZN5Caver11MapViewNodeC2Ev
 * Demangled: Caver::MapViewNode::MapViewNode(void)
 *
 * Callers: 1
 *   0x0000000000422FB4  Caver::MapView::Init(boost::shared_ptr<Caver::Map> const&,boost::shared_ptr<Caver::GameState> const&,bool,bool)
 *
 * Callees: 1
 *   0x0000000000429238  std::vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapViewNode>*,std::vector<boost::shared_ptr<Caver::MapViewNode>,std::allocator<boost::shared_ptr<Caver::MapViewNode>>>>,boost::shared_ptr<Caver::MapViewNode> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200B68 string=0x0000000000200B6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MapViewNode::MapViewNode(Caver::MapViewNode *this)
{
  JUMPOUT(0x429614);
}

