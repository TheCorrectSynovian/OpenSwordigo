/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000305BAC
 * Mangled: _ZN5Caver5Proto33ModelTransformControllerComponent21CheckTypeAndMergeFromERKN6google8protobuf11MessageLiteE
 * Demangled: Caver::Proto::ModelTransformControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8EB0  Caver::Proto::ModelTransformControllerComponent::MergeFrom(Caver::Proto::ModelTransformControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000305BAC string=0x00000000001F8EB0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::ModelTransformControllerComponent::CheckTypeAndMergeFrom(
        Caver::Proto::ModelTransformControllerComponent *this,
        const google::protobuf::MessageLite *a2)
{
  Caver::Proto::ModelTransformControllerComponent::MergeFrom();
}

