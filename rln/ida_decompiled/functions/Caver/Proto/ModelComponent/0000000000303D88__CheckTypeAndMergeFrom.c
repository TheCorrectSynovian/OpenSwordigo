/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000303D88
 * Mangled: _ZN5Caver5Proto14ModelComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ModelComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001FCE70  Caver::Proto::ModelComponent::MergeFrom(Caver::Proto::ModelComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000303D88 string=0x00000000001FCE70 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ModelComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ModelComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ModelComponent::MergeFrom();
}

