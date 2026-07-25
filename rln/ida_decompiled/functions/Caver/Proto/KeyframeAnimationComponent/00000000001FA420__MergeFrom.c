/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA420
 * Mangled: ._ZN5Caver5Proto26KeyframeAnimationComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::KeyframeAnimationComponent::MergeFrom(Caver::Proto::KeyframeAnimationComponent const&)
 *
 * Callers: 3
 *   0x0000000000303F2C  Caver::Proto::KeyframeAnimationComponent::KeyframeAnimationComponent(Caver::Proto::KeyframeAnimationComponent const&)
 *   0x000000000030491C  Caver::Proto::KeyframeAnimationComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000304920  Caver::Proto::KeyframeAnimationComponent::CopyFrom(Caver::Proto::KeyframeAnimationComponent const&)
 *
 * Callees: 1
 *   0x0000000000303F2C  Caver::Proto::KeyframeAnimationComponent::KeyframeAnimationComponent(Caver::Proto::KeyframeAnimationComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA428 string=0x00000000001FA42C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::KeyframeAnimationComponent::MergeFrom()
{
  JUMPOUT(0x303F8C);
}

