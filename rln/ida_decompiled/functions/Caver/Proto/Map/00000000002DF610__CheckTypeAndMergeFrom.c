/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF610
 * Mangled: _ZN5Caver5Proto3Map21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Map::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x0000000000200920  Caver::Proto::Map::MergeFrom(Caver::Proto::Map const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Map::CheckTypeAndMergeFrom(Caver::Proto::Map *this, const Caver::Proto::Map *a2)
{
  Caver::Proto::Map::MergeFrom(this, a2);
}

