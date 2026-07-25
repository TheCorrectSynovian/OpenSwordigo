/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD1C0
 * Mangled: ._ZNSt6vectorIN5Caver7MapNode6PortalESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
 * Demangled: std::vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>>::_M_insert_aux(__gnu_cxx::__normal_iterator<Caver::MapNode::Portal*,std::vector<Caver::MapNode::Portal,std::allocator<Caver::MapNode::Portal>>>,Caver::MapNode::Portal const&)
 *
 * Callers: 2
 *   0x00000000003BEB34  Caver::MapNode::LoadFromProtobufMessage(Caver::Proto::MapNode const&)
 *   0x00000000003BEDB8  Caver::MapNode::AddPortal(Caver::MapNode::Portal const&)
 *
 * Callees: 1
 *   0x00000000003BF274  Caver::MapNode::MusicName(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD1C8 string=0x00000000001FD1CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void std::vector<Caver::MapNode::Portal>::_M_insert_aux()
{
  JUMPOUT(0x3BF2F4);
}

