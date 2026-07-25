/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E0898
 * Mangled: _ZN5Caver5Proto4Item21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Item::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA290  Caver::Proto::Item::MergeFrom(Caver::Proto::Item const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002E0898 string=0x00000000001FA290 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Item::CheckTypeAndMergeFrom(
        Caver::Proto::Item *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::Item::MergeFrom();
}

