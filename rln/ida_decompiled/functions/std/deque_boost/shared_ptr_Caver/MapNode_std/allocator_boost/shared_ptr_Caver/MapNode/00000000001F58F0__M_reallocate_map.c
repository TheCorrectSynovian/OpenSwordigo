/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F58F0
 * Mangled: ._ZNSt5dequeIN5boost10shared_ptrIN5Caver7MapNodeEEESaIS4_EE17_M_reallocate_mapEmb
 * Demangled: std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_reallocate_map(ulong,bool)
 *
 * Callers: 1
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Callees: 1
 *   0x00000000003BE774  std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::_M_reallocate_map(ulong,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F58F8 string=0x00000000001F58FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::deque<boost::shared_ptr<Caver::MapNode>>::_M_reallocate_map()
{
  return _ZNSt5dequeIN5boost10shared_ptrIN5Caver7MapNodeEEESaIS4_EE17_M_reallocate_mapEmb();
}

