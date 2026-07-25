/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000330DD8
 * Mangled: _ZN5Caver5Proto17ItemDropComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ItemDropComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FC5F0  Caver::Proto::ItemDropComponent::MergeFrom(Caver::Proto::ItemDropComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000330DD8 string=0x00000000001FC5F0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ItemDropComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ItemDropComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ItemDropComponent::MergeFrom();
}

