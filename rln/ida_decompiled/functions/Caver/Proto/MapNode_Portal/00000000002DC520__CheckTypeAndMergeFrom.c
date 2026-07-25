/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DC520
 * Mangled: _ZN5Caver5Proto14MapNode_Portal21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MapNode_Portal::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200DC0  Caver::Proto::MapNode_Portal::MergeFrom(Caver::Proto::MapNode_Portal const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MapNode_Portal::CheckTypeAndMergeFrom(
        Caver::Proto::MapNode_Portal *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::MapNode_Portal::MergeFrom();
}

