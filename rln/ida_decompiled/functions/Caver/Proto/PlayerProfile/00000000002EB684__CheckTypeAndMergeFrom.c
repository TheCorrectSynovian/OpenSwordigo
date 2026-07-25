/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EB684
 * Mangled: _ZN5Caver5Proto13PlayerProfile21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::PlayerProfile::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF870  Caver::Proto::PlayerProfile::MergeFrom(Caver::Proto::PlayerProfile const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::PlayerProfile::CheckTypeAndMergeFrom(
        Caver::Proto::PlayerProfile *this,
        const Caver::Proto::PlayerProfile *a2)
{
  Caver::Proto::PlayerProfile::MergeFrom(this, a2);
}

