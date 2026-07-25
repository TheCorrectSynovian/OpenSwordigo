/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D09C0
 * Mangled: _ZN5Caver5Proto7Polygon21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Polygon::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE8B0  Caver::Proto::Polygon::MergeFrom(Caver::Proto::Polygon const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Polygon::CheckTypeAndMergeFrom(
        Caver::Proto::Polygon *this,
        const Caver::Proto::Polygon *a2)
{
  Caver::Proto::Polygon::MergeFrom(this, a2);
}

