/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEB40
 * Mangled: ._ZN5Caver5Proto12SoundLibrary9MergeFromERKS1_
 * Demangled: Caver::Proto::SoundLibrary::MergeFrom(Caver::Proto::SoundLibrary const&)
 *
 * Callers: 3
 *   0x00000000002D807C  Caver::Proto::SoundLibrary::SoundLibrary(Caver::Proto::SoundLibrary const&)
 *   0x00000000002D86CC  Caver::Proto::SoundLibrary::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D87F8  Caver::Proto::SoundLibrary::CopyFrom(Caver::Proto::SoundLibrary const&)
 *
 * Callees: 1
 *   0x00000000002D807C  Caver::Proto::SoundLibrary::SoundLibrary(Caver::Proto::SoundLibrary const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEB48 string=0x00000000001FEB4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SoundLibrary::MergeFrom(
        Caver::Proto::SoundLibrary *this,
        const Caver::Proto::SoundLibrary *a2)
{
  JUMPOUT(0x2D8138);
}

