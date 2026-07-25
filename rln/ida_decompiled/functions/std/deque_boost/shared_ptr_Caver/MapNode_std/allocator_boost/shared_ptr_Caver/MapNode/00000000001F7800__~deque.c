/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7800
 * Mangled: ._ZNSt5dequeIN5boost10shared_ptrIN5Caver7MapNodeEEESaIS4_EED2Ev
 * Demangled: std::deque<boost::shared_ptr<Caver::MapNode>,std::allocator<boost::shared_ptr<Caver::MapNode>>>::~deque()
 *
 * Callers: 1
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Callees: 1
 *   0x00000000003BC240  Caver::Map::SaveToProtobufMessage(Caver::Proto::Map *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7808 string=0x00000000001F780C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::deque<boost::shared_ptr<Caver::MapNode>>::~deque()
{
  JUMPOUT(0x3BD144);
}

