/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203470
 * Mangled: ._ZNSt11_Deque_baseIN5boost10shared_ptrIN5Caver7MapNodeEEESaIS4_EE17_M_initialize_mapEm
 * Demangled: std::_Deque_base<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_initialize_map(ulong)
 *
 * Callers: 1
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Callees: 1
 *   0x00000000003BE3BC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203478 string=0x000000000020347C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::_Deque_base<boost::shared_ptr<Caver::MapNode>>::_M_initialize_map()
{
  JUMPOUT(0x3BE438);
}

