/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB930
 * Mangled: ._ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver7MapNode6PortalES5_EET0_T_S7_S6_
 * Demangled: std::__uninitialized_copy<false>::__uninit_copy<Caver::MapNode::Portal *,Caver::MapNode::Portal *>(Caver::MapNode::Portal *,Caver::MapNode::Portal *,Caver::MapNode::Portal *)
 *
 * Callers: 1
 *   0x00000000003BF274  Caver::MapNode::MusicName(void)
 *
 * Callees: 1
 *   0x00000000003BF76C  std::__uninitialized_copy<false>::__uninit_copy<Caver::MapNode::Portal *,Caver::MapNode::Portal *>(Caver::MapNode::Portal *,Caver::MapNode::Portal *,Caver::MapNode::Portal *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB938 string=0x00000000001FB93C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 std::__uninitialized_copy<false>::__uninit_copy<Caver::MapNode::Portal *,Caver::MapNode::Portal *>()
{
  return _ZNSt20__uninitialized_copyILb0EE13__uninit_copyIPN5Caver7MapNode6PortalES5_EET0_T_S7_S6_();
}

