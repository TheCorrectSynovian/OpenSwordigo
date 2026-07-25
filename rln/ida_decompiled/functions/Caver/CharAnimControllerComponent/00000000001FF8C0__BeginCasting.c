/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF8C0
 * Mangled: ._ZN5Caver27CharAnimControllerComponent12BeginCastingEv
 * Demangled: Caver::CharAnimControllerComponent::BeginCasting(void)
 *
 * Callers: 1
 *   0x00000000002600A4  Caver::CharControllerComponent::BeginCasting(boost::intrusive_ptr<Caver::SkillComponent> const&)
 *
 * Callees: 1
 *   0x0000000000257A28  Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FF8C8 string=0x00000000001FF8CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharAnimControllerComponent::BeginCasting(Caver::CharAnimControllerComponent *this)
{
  JUMPOUT(0x257B80);
}

