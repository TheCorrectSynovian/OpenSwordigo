/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200EC0
 * Mangled: ._ZN5Caver5Proto7MapNode9MergeFromERKS1_
 * Demangled: Caver::Proto::MapNode::MergeFrom(Caver::Proto::MapNode const&)
 *
 * Callers: 4
 *   0x00000000002DC700  Caver::Proto::MapNode::MapNode(Caver::Proto::MapNode const&)
 *   0x00000000002DDC2C  Caver::Proto::MapNode::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002DDD44  Caver::Proto::MapNode::CopyFrom(Caver::Proto::MapNode const&)
 *   0x00000000002DDF78  Caver::Proto::MapZone::MapZone(Caver::Proto::MapZone const&)
 *
 * Callees: 1
 *   0x00000000002DC700  Caver::Proto::MapNode::MapNode(Caver::Proto::MapNode const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200EC8 string=0x0000000000200ECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MapNode::MergeFrom(Caver::Proto::MapNode *this, const Caver::Proto::MapNode *a2)
{
  JUMPOUT(0x2DC804);
}

