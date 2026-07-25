/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E2490
 * Mangled: _ZN5Caver5Proto5Quest21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Quest::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3A30  Caver::Proto::Quest::MergeFrom(Caver::Proto::Quest const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002E2490 string=0x00000000001F3A30 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Quest::CheckTypeAndMergeFrom(
        Caver::Proto::Quest *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::Quest::MergeFrom();
}

