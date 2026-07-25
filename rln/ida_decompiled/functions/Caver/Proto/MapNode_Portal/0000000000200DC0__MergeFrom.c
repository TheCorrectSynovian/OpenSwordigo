/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200DC0
 * Mangled: ._ZN5Caver5Proto14MapNode_Portal9MergeFromERKS1_
 * Demangled: Caver::Proto::MapNode_Portal::MergeFrom(Caver::Proto::MapNode_Portal const&)
 *
 * Callers: 4
 *   0x00000000002DBB4C  Caver::Proto::MapNode_Portal::MapNode_Portal(Caver::Proto::MapNode_Portal const&)
 *   0x00000000002DC520  Caver::Proto::MapNode_Portal::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002DC524  Caver::Proto::MapNode_Portal::CopyFrom(Caver::Proto::MapNode_Portal const&)
 *   0x00000000002DDC30  google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::MapNode_Portal> const&)
 *
 * Callees: 1
 *   0x00000000002DBB4C  Caver::Proto::MapNode_Portal::MapNode_Portal(Caver::Proto::MapNode_Portal const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200DC8 string=0x0000000000200DCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::MapNode_Portal::MergeFrom()
{
  JUMPOUT(0x2DBBB8);
}

