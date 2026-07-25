/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFA10
 * Mangled: ._ZN5Caver5Proto28AnimationControllerComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::AnimationControllerComponent::MergeFrom(Caver::Proto::AnimationControllerComponent const&)
 *
 * Callers: 3
 *   0x00000000003117C0  Caver::Proto::AnimationControllerComponent::AnimationControllerComponent(Caver::Proto::AnimationControllerComponent const&)
 *   0x0000000000311D48  Caver::Proto::AnimationControllerComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000311D4C  Caver::Proto::AnimationControllerComponent::CopyFrom(Caver::Proto::AnimationControllerComponent const&)
 *
 * Callees: 1
 *   0x00000000003117C0  Caver::Proto::AnimationControllerComponent::AnimationControllerComponent(Caver::Proto::AnimationControllerComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFA18 string=0x00000000001FFA1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::AnimationControllerComponent::MergeFrom()
{
  JUMPOUT(0x311810);
}

