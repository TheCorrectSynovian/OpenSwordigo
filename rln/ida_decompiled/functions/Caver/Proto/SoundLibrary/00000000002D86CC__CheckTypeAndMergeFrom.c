/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D86CC
 * Mangled: _ZN5Caver5Proto12SoundLibrary21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SoundLibrary::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FEB40  Caver::Proto::SoundLibrary::MergeFrom(Caver::Proto::SoundLibrary const&)
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SoundLibrary::CheckTypeAndMergeFrom(
        Caver::Proto::SoundLibrary *this,
        const Caver::Proto::SoundLibrary *a2)
{
  Caver::Proto::SoundLibrary::MergeFrom(this, a2);
}

