/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E7AA4
 * Mangled: _ZN5Caver5Proto8GameData21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::GameData::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAFB0  Caver::Proto::GameData::MergeFrom(Caver::Proto::GameData const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002E7AA4 string=0x00000000001FAFB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::GameData::CheckTypeAndMergeFrom(
        Caver::Proto::GameData *this,
        const Caver::Proto::GameData *a2)
{
  Caver::Proto::GameData::MergeFrom(this, a2);
}

