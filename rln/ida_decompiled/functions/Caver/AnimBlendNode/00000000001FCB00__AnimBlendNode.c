/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCB00
 * Mangled: ._ZN5Caver13AnimBlendNodeC2ERKN5boost13intrusive_ptrINS_8AnimNodeEEES6_ff
 * Demangled: Caver::AnimBlendNode::AnimBlendNode(boost::intrusive_ptr<Caver::AnimNode> const&,boost::intrusive_ptr<Caver::AnimNode> const&,float,float)
 *
 * Callers: 6
 *   0x000000000021CCB8  Caver::AnimationControllerComponent::BlendToAnimationNode(boost::intrusive_ptr<Caver::AnimNode> const&,float)
 *   0x0000000000256BCC  Caver::CharAnimControllerComponent::Prepare(void)
 *   0x0000000000257A28  Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *   0x0000000000294798  Caver::BouncingMonsterControllerComponent::Prepare(void)
 *   0x0000000000295E40  Caver::ChargingMonsterControllerComponent::Prepare(void)
 *   0x000000000029C6EC  Caver::ShootingMonsterControllerComponent::Prepare(void)
 *
 * Callees: 1
 *   0x0000000000212834  Caver::AnimBlendNode::AnimBlendNode(boost::intrusive_ptr<Caver::AnimNode> const&,boost::intrusive_ptr<Caver::AnimNode> const&,float,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCB08 string=0x00000000001FCB0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AnimBlendNode::AnimBlendNode()
{
  return _ZN5Caver13AnimBlendNodeC2ERKN5boost13intrusive_ptrINS_8AnimNodeEEES6_ff();
}

