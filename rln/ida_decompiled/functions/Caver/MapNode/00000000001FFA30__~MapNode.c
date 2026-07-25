/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFA30
 * Mangled: ._ZN5Caver7MapNodeD2Ev
 * Demangled: Caver::MapNode::~MapNode()
 *
 * Callers: 2
 *   0x00000000003BDD08  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapZone>> const&)
 *   0x00000000003BDE18  boost::detail::sp_counted_impl_p<Caver::MapNode>::dispose(void)
 *
 * Callees: 1
 *   0x00000000003BDE6C  Caver::MapNode::~MapNode()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFA38 string=0x00000000001FFA3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::MapNode::~MapNode(Caver::MapNode *this)
{
  _ZN5Caver7MapNodeD2Ev(this);
}

