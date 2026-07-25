/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1158
 * Mangled: _ZN5Caver5Proto10FloatColor21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::FloatColor::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FF190  Caver::Proto::FloatColor::MergeFrom(Caver::Proto::FloatColor const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::FloatColor::CheckTypeAndMergeFrom(
        Caver::Proto::FloatColor *this,
        const Caver::Proto::FloatColor *a2)
{
  Caver::Proto::FloatColor::MergeFrom(this, a2);
}

