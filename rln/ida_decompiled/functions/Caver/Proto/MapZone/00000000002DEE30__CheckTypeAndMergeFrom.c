/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DEE30
 * Mangled: _ZN5Caver5Proto7MapZone21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MapZone::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5320  Caver::Proto::MapZone::MergeFrom(Caver::Proto::MapZone const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002DEE30 string=0x00000000001F5320 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MapZone::CheckTypeAndMergeFrom(
        Caver::Proto::MapZone *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::MapZone::MergeFrom();
}

