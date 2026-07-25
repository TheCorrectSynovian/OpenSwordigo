/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F96A0
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver7MapNodeEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::MapNode>(Caver::MapNode *)
 *
 * Callers: 1
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Callees: 1
 *   0x00000000003BDD08  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapZone>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::MapZone>> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F96A8 string=0x00000000001F96AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::detail::shared_count::shared_count<Caver::MapNode>()
{
  JUMPOUT(0x3BDD84);
}

