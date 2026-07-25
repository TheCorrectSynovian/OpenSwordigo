/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201DC0
 * Mangled: ._ZNSt5dequeIN5boost10shared_ptrIN5Caver7MapNodeEEESaIS4_EE19_M_destroy_data_auxESt15_Deque_iteratorIS4_RS4_PS4_ESA_
 * Demangled: std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_destroy_data_aux(std::_Deque_iterator<boost::shared_ptr<Caver::MapNode>,boost::shared_ptr<Caver::MapNode>&,boost::shared_ptr<Caver::MapNode>*>,std::_Deque_iterator<boost::shared_ptr<Caver::MapNode>,boost::shared_ptr<Caver::MapNode>&,boost::shared_ptr<Caver::MapNode>*>)
 *
 * Callers: 1
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Callees: 1
 *   0x00000000003BE3BC  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapNode>> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201DC8 string=0x0000000000201DCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::deque<boost::shared_ptr<Caver::MapNode>>::_M_destroy_data_aux()
{
  JUMPOUT(0x3BE58C);
}

