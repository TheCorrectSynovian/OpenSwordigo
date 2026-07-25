/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDAC0
 * Mangled: ._ZN5Caver27CharAnimControllerComponent10StopActionEv
 * Demangled: Caver::CharAnimControllerComponent::StopAction(void)
 *
 * Callers: 2
 *   0x000000000025E040  Caver::CharControllerComponent::Hurt(void)
 *   0x000000000025E468  Caver::CharControllerComponent::Die(void)
 *
 * Callees: 1
 *   0x0000000000257A28  Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDAC8 string=0x00000000001FDACC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharAnimControllerComponent::StopAction(Caver::CharAnimControllerComponent *this)
{
  JUMPOUT(0x257F40);
}

