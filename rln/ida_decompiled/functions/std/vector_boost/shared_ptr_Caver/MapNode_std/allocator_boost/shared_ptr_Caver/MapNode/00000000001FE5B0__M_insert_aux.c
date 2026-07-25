/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE5B0
 * Mangled: ._ZNSt6vectorIN5boost10shared_ptrIN5Caver7MapNodeEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
 * Demangled: std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapNode>*,std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>>,boost::shared_ptr<Caver::MapNode> const&)
 *
 * Callers: 1
 *   0x00000000003BAD18  Caver::Map::LoadFromProtobufMessage(Caver::Proto::Map const&)
 *
 * Callees: 1
 *   0x00000000003BD23C  std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_insert_aux(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::MapNode>*,std::vector<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>>,boost::shared_ptr<Caver::MapNode> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE5B8 string=0x00000000001FE5BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::vector<boost::shared_ptr<Caver::MapNode>>::_M_insert_aux()
{
  return _ZNSt6vectorIN5boost10shared_ptrIN5Caver7MapNodeEEESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_();
}

