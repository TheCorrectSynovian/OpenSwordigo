/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000322850
 * Mangled: _ZN5Caver5Proto19SimpleGlowComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::SimpleGlowComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC6C0  Caver::Proto::SimpleGlowComponent::MergeFrom(Caver::Proto::SimpleGlowComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000322850 string=0x00000000001FC6C0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::SimpleGlowComponent::CheckTypeAndMergeFrom(
        Caver::Proto::SimpleGlowComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::SimpleGlowComponent::MergeFrom();
}

