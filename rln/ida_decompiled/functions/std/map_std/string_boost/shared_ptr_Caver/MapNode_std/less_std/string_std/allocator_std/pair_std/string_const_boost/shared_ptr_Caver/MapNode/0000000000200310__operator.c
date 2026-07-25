/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200310
 * Mangled: ._ZNSt3mapISsN5boost10shared_ptrIN5Caver7MapNodeEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_
 * Demangled: std::map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::operator[](std::string const&)
 *
 * Callers: 4
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *   0x00000000003BC04C  Caver::Map::RecursivelySetNodePositions(Caver::MapNode *)
 *   0x00000000003BC1FC  Caver::Map::NodeForName(std::string const&)
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Callees: 1
 *   0x00000000003BBB9C  std::map<std::string,boost::shared_ptr<Caver::MapNode>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::MapNode>>>>::operator[](std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200318 string=0x000000000020031C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::map<std::string,boost::shared_ptr<Caver::MapNode>>::operator[]()
{
  return _ZNSt3mapISsN5boost10shared_ptrIN5Caver7MapNodeEEESt4lessISsESaISt4pairIKSsS4_EEEixERS8_();
}

