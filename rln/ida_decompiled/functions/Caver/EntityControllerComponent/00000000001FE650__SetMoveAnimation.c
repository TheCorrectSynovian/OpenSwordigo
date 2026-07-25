/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE650
 * Mangled: ._ZN5Caver25EntityControllerComponent16SetMoveAnimationERKN5boost13intrusive_ptrINS_12AnimKeysNodeEEE
 * Demangled: Caver::EntityControllerComponent::SetMoveAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Callers: 2
 *   0x000000000026B4E0  Caver::EntityControllerComponent::Prepare(void)
 *   0x000000000026DE84  sub_26DE84
 *
 * Callees: 1
 *   0x000000000026B4E0  Caver::EntityControllerComponent::Prepare(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE658 string=0x00000000001FE65C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::EntityControllerComponent::SetMoveAnimation()
{
  JUMPOUT(0x26B848);
}

