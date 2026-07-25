/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3480
 * Mangled: ._ZN5Caver23BlendAnimationComponent13setAnimation2EPNS_18AnimationComponentE
 * Demangled: Caver::BlendAnimationComponent::setAnimation2(Caver::AnimationComponent *)
 *
 * Callers: 5
 *   0x000000000021E7B8  Caver::BlendAnimationComponent::ConnectOutlets(void)
 *   0x000000000021F2EC  Caver::BlendAnimationComponent::ValueForBindedProperty(int)
 *   0x000000000021F52C  Caver::BlendAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000021F5D4  `non-virtual thunk to'Caver::BlendAnimationComponent::SetValueForBindedProperty(int,Caver::BindingValue const&)
 *   0x000000000021F8F0  Caver::BlendAnimationComponent::className(void)
 *
 * Callees: 1
 *   0x000000000021E83C  Caver::BlendAnimationComponent::setAnimation1(Caver::AnimationComponent *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3488 string=0x00000000001F348C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::BlendAnimationComponent::setAnimation2()
{
  JUMPOUT(0x21E988);
}

