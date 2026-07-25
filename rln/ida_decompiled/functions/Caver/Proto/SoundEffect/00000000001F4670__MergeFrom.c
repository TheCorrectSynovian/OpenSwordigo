/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4670
 * Mangled: ._ZN5Caver5Proto11SoundEffect9MergeFromERKS1_
 * Demangled: Caver::Proto::SoundEffect::MergeFrom(Caver::Proto::SoundEffect const&)
 *
 * Callers: 4
 *   0x00000000002D7620  Caver::Proto::SoundEffect::SoundEffect(Caver::Proto::SoundEffect const&)
 *   0x00000000002D7F38  Caver::Proto::SoundEffect::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x00000000002D7F3C  Caver::Proto::SoundEffect::CopyFrom(Caver::Proto::SoundEffect const&)
 *   0x00000000002D86D0  google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect>::MergeFrom(google::protobuf::RepeatedPtrField<Caver::Proto::SoundEffect> const&)
 *
 * Callees: 1
 *   0x00000000002D7620  Caver::Proto::SoundEffect::SoundEffect(Caver::Proto::SoundEffect const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4678 string=0x00000000001F467C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SoundEffect::MergeFrom(
        Caver::Proto::SoundEffect *this,
        const Caver::Proto::SoundEffect *a2)
{
  JUMPOUT(0x2D7698);
}

