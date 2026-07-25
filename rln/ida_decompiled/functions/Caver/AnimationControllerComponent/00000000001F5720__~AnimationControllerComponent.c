/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5720
 * Mangled: ._ZN5Caver28AnimationControllerComponentD2Ev
 * Demangled: Caver::AnimationControllerComponent::~AnimationControllerComponent()
 *
 * Callers: 3
 *   0x000000000021CCB8  Caver::AnimationControllerComponent::BlendToAnimationNode(boost::intrusive_ptr<Caver::AnimNode> const&,float)
 *   0x0000000000256100  Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *   0x0000000000257A28  Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Callees: 1
 *   0x000000000021CCB8  Caver::AnimationControllerComponent::BlendToAnimationNode(boost::intrusive_ptr<Caver::AnimNode> const&,float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5728 string=0x00000000001F572C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AnimationControllerComponent::~AnimationControllerComponent(
        Caver::AnimationControllerComponent *this)
{
  JUMPOUT(0x21D084);
}

