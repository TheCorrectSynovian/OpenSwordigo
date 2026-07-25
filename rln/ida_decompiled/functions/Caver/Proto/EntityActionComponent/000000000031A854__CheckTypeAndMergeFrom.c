/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031A854
 * Mangled: _ZN5Caver5Proto21EntityActionComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::EntityActionComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FAF80  Caver::Proto::EntityActionComponent::MergeFrom(Caver::Proto::EntityActionComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x000000000031A854 string=0x00000000001FAF80 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::EntityActionComponent::CheckTypeAndMergeFrom(
        Caver::Proto::EntityActionComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::EntityActionComponent::MergeFrom();
}

