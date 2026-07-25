/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE004
 * Mangled: _ZN5Caver5Proto8DateTime21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::DateTime::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5480  Caver::Proto::DateTime::MergeFrom(Caver::Proto::DateTime const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002CE004 string=0x00000000001F5480 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::DateTime::CheckTypeAndMergeFrom(
        Caver::Proto::DateTime *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::DateTime::MergeFrom();
}

