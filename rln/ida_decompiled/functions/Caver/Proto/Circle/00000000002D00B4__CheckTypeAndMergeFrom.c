/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D00B4
 * Mangled: _ZN5Caver5Proto6Circle21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Circle::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FA380  Caver::Proto::Circle::MergeFrom(Caver::Proto::Circle const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002D00B4 string=0x00000000001FA380 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Circle::CheckTypeAndMergeFrom(Caver::Proto::Circle *this, const Caver::Proto::Circle *a2)
{
  Caver::Proto::Circle::MergeFrom(this, a2);
}

