/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CF158
 * Mangled: _ZN5Caver5Proto9Rectangle21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::Rectangle::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000002021D0  Caver::Proto::Rectangle::MergeFrom(Caver::Proto::Rectangle const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Rectangle::CheckTypeAndMergeFrom(
        Caver::Proto::Rectangle *this,
        const Caver::Proto::Rectangle *a2)
{
  Caver::Proto::Rectangle::MergeFrom(this, a2);
}

