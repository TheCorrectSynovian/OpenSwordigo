/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB750
 * Mangled: ._ZN5Caver5Proto14MapNode_PortalC2Ev
 * Demangled: Caver::Proto::MapNode_Portal::MapNode_Portal(void)
 *
 * Callers: 1
 *   0x00000000003BEE30  Caver::MapNode::SaveToProtobufMessage(Caver::Proto::MapNode *)
 *
 * Callees: 1
 *   0x00000000002DBAEC  Caver::Proto::MapNode_Portal::MapNode_Portal(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB754 string=0x00000000002DBAEC "h "
 *   insn=0x00000000001FB758 string=0x00000000001FB75C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Proto::MapNode_Portal::MapNode_Portal(Caver::Proto::MapNode_Portal *this)
{
  return _ZN5Caver5Proto14MapNode_PortalC2Ev(this);
}

