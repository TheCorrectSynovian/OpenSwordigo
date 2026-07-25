/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202150
 * Mangled: ._ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto14MapNode_PortalEE9MergeFromERKS5_
 * Demangled: google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal> const&)
 *
 * Callers: 1
 *   0x00000000002DC700  Caver::Proto::MapNode::MapNode(Caver::Proto::MapNode const&)
 *
 * Callees: 1
 *   0x00000000002DDC30  google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202158 string=0x000000000020215C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>::MergeFrom()
{
  return _ZN6google8protobuf16RepeatedPtrFieldIN5Caver5Proto14MapNode_PortalEE9MergeFromERKS5_();
}

