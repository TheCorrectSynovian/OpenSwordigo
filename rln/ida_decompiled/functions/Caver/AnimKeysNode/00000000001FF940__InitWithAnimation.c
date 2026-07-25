/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF940
 * Mangled: ._ZN5Caver12AnimKeysNode17InitWithAnimationERKN5boost10shared_ptrIKNS_17KeyframeAnimationEEE
 * Demangled: Caver::AnimKeysNode::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
 *
 * Callers: 4
 *   0x000000000021F9D8  Caver::KeyframeAnimationComponent::KeyframeAnimationComponent(void)
 *   0x000000000021FD9C  Caver::KeyframeAnimationComponent::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
 *   0x000000000021FDFC  Caver::KeyframeAnimationComponent::LoadAnimation(void)
 *   0x0000000000221048  Caver::KeyframeAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *
 * Callees: 1
 *   0x0000000000212DF0  Caver::AnimKeysNode::InitWithAnimation(boost::shared_ptr<Caver::KeyframeAnimation const> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF948 string=0x00000000001FF94C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::AnimKeysNode::InitWithAnimation()
{
  return _ZN5Caver12AnimKeysNode17InitWithAnimationERKN5boost10shared_ptrIKNS_17KeyframeAnimationEEE();
}

