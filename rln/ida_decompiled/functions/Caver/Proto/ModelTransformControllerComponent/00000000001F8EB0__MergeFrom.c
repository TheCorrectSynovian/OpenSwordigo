/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8EB0
 * Mangled: ._ZN5Caver5Proto33ModelTransformControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::ModelTransformControllerComponent::MergeFrom(Caver::Proto::ModelTransformControllerComponent const&)
 *
 * Callers: 3
 *   0x000000000030517C  Caver::Proto::ModelTransformControllerComponent::ModelTransformControllerComponent(Caver::Proto::ModelTransformControllerComponent const&)
 *   0x0000000000305BAC  Caver::Proto::ModelTransformControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000305BB0  Caver::Proto::ModelTransformControllerComponent::CopyFrom(Caver::Proto::ModelTransformControllerComponent const&)
 *
 * Callees: 1
 *   0x000000000030517C  Caver::Proto::ModelTransformControllerComponent::ModelTransformControllerComponent(Caver::Proto::ModelTransformControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8EB8 string=0x00000000001F8EBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::ModelTransformControllerComponent::MergeFrom()
{
  JUMPOUT(0x3051D0);
}

