/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4EB0
 * Mangled: ._ZN5Caver27CharAnimControllerComponentD2Ev
 * Demangled: Caver::CharAnimControllerComponent::~CharAnimControllerComponent()
 *
 * Callers: 1
 *   0x0000000000257A28  Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Callees: 1
 *   0x0000000000257A28  Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4EB8 string=0x00000000001F4EBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharAnimControllerComponent::~CharAnimControllerComponent(
        Caver::CharAnimControllerComponent *this)
{
  JUMPOUT(0x25854C);
}

