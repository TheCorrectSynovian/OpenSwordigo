/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFD30
 * Mangled: ._ZNSt11_Deque_baseIN5boost10shared_ptrIN5Caver7MapNodeEEESaIS4_EE15_M_create_nodesEPPS4_S8_
 * Demangled: std::_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_create_nodes(boost::shared_ptr<Caver::MapNode>**,boost::shared_ptr<Caver::MapNode>**)
 *
 * Callers: 1
 *   0x00000000003BE3BC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>> const&)
 *
 * Callees: 1
 *   0x00000000003BE3BC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFD38 string=0x00000000001FFD3C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Deque_base<boost::shared_ptr<Caver::MapNode>>::_M_create_nodes()
{
  JUMPOUT(0x3BE510);
}

