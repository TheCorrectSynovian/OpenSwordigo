/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003361D8
 * Mangled: _ZN5Caver5Proto18MagicBombComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::MagicBombComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC5C0  Caver::Proto::MagicBombComponent::MergeFrom(Caver::Proto::MagicBombComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000003361D8 string=0x00000000001FC5C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::MagicBombComponent::CheckTypeAndMergeFrom(
        Caver::Proto::MagicBombComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::MagicBombComponent::MergeFrom();
}

