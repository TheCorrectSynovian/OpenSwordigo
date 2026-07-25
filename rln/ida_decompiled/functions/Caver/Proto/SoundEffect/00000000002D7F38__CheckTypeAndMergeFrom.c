/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D7F38
 * Mangled: _ZN5Caver5Proto11SoundEffect21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SoundEffect::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F4670  Caver::Proto::SoundEffect::MergeFrom(Caver::Proto::SoundEffect const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002D7F38 string=0x00000000001F4670 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SoundEffect::CheckTypeAndMergeFrom(
        Caver::Proto::SoundEffect *this,
        const Caver::Proto::SoundEffect *a2)
{
  Caver::Proto::SoundEffect::MergeFrom(this, a2);
}

