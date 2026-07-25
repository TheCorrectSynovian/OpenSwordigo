/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E6390
 * Mangled: _ZN5Caver5Proto11GameOptions21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::GameOptions::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5B90  Caver::Proto::GameOptions::MergeFrom(Caver::Proto::GameOptions const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002E6390 string=0x00000000001F5B90 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GameOptions::CheckTypeAndMergeFrom(
        Caver::Proto::GameOptions *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::GameOptions::MergeFrom();
}

