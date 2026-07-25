/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002FDE20
 * Mangled: _ZN5Caver5Proto13ObjectLibrary21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ObjectLibrary::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FE1F0  Caver::Proto::ObjectLibrary::MergeFrom(Caver::Proto::ObjectLibrary const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ObjectLibrary::CheckTypeAndMergeFrom(
        Caver::Proto::ObjectLibrary *this,
        const Caver::Proto::ObjectLibrary *a2)
{
  Caver::Proto::ObjectLibrary::MergeFrom(this, a2);
}

