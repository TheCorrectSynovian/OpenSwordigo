/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DDC2C
 * Mangled: _ZN5Caver5Proto7MapNode21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MapNode::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200EC0  Caver::Proto::MapNode::MergeFrom(Caver::Proto::MapNode const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MapNode::CheckTypeAndMergeFrom(
        Caver::Proto::MapNode *this,
        const Caver::Proto::MapNode *a2)
{
  Caver::Proto::MapNode::MergeFrom(this, a2);
}

