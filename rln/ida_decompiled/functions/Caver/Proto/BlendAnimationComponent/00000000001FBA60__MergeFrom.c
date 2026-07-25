/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBA60
 * Mangled: ._ZN5Caver5Proto23BlendAnimationComponent9MergeFromERKS1_
 * Demangled: Caver::Proto::BlendAnimationComponent::MergeFrom(Caver::Proto::BlendAnimationComponent const&)
 *
 * Callers: 3
 *   0x0000000000304A5C  Caver::Proto::BlendAnimationComponent::BlendAnimationComponent(Caver::Proto::BlendAnimationComponent const&)
 *   0x000000000030504C  Caver::Proto::BlendAnimationComponent::CheckTypeAndMergeFrom(google::protobuf::MessageLite const&)
 *   0x0000000000305050  Caver::Proto::BlendAnimationComponent::CopyFrom(Caver::Proto::BlendAnimationComponent const&)
 *
 * Callees: 1
 *   0x0000000000304A5C  Caver::Proto::BlendAnimationComponent::BlendAnimationComponent(Caver::Proto::BlendAnimationComponent const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBA68 string=0x00000000001FBA6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::Proto::BlendAnimationComponent::MergeFrom()
{
  JUMPOUT(0x304AA8);
}

