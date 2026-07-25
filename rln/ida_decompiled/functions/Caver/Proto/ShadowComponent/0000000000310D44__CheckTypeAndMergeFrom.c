/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000310D44
 * Mangled: _ZN5Caver5Proto15ShadowComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ShadowComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F3BF0  Caver::Proto::ShadowComponent::MergeFrom(Caver::Proto::ShadowComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000310D44 string=0x00000000001F3BF0 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ShadowComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ShadowComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ShadowComponent::MergeFrom();
}

