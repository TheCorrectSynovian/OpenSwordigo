/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002013F0
 * Mangled: ._ZN5Caver27CharAnimControllerComponent20BlendToMoveAnimationEf
 * Demangled: Caver::CharAnimControllerComponent::BlendToMoveAnimation(float)
 *
 * Callers: 1
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x0000000000257A28  Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002013F8 string=0x00000000002013FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharAnimControllerComponent::BlendToMoveAnimation(
        Caver::CharAnimControllerComponent *this,
        float a2)
{
  JUMPOUT(0x258488);
}

