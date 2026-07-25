/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203AD0
 * Mangled: ._ZN5Caver27CharAnimControllerComponent13FinishCastingERKN5boost13intrusive_ptrINS_12AnimKeysNodeEEE
 * Demangled: Caver::CharAnimControllerComponent::FinishCasting(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Callers: 1
 *   0x00000000002601E0  Caver::CharControllerComponent::FinishCasting(void)
 *
 * Callees: 1
 *   0x0000000000257A28  Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203AD8 string=0x0000000000203ADC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::CharAnimControllerComponent::FinishCasting()
{
  JUMPOUT(0x257D14);
}

