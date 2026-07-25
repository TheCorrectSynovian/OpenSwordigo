/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E92D0
 * Mangled: _ZN5Caver5Proto21PlayerProfile_Counter21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::PlayerProfile_Counter::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200D40  Caver::Proto::PlayerProfile_Counter::MergeFrom(Caver::Proto::PlayerProfile_Counter const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PlayerProfile_Counter::CheckTypeAndMergeFrom(
        Caver::Proto::PlayerProfile_Counter *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::PlayerProfile_Counter::MergeFrom();
}

