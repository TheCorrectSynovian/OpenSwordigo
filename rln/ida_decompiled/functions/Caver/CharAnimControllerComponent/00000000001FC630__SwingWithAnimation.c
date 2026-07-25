/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC630
 * Mangled: ._ZN5Caver27CharAnimControllerComponent18SwingWithAnimationERKN5boost13intrusive_ptrINS_12AnimKeysNodeEEE
 * Demangled: Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Callers: 1
 *   0x000000000025D078  Caver::CharControllerComponent::Swing(void)
 *
 * Callees: 1
 *   0x0000000000257A28  Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC638 string=0x00000000001FC63C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::CharAnimControllerComponent::SwingWithAnimation()
{
  return _ZN5Caver27CharAnimControllerComponent18SwingWithAnimationERKN5boost13intrusive_ptrINS_12AnimKeysNodeEEE();
}

