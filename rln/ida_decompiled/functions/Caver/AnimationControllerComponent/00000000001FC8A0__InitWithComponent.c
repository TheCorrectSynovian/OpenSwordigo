/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC8A0
 * Mangled: ._ZN5Caver28AnimationControllerComponent17InitWithComponentEPKS0_
 * Demangled: Caver::AnimationControllerComponent::InitWithComponent(Caver::AnimationControllerComponent const*)
 *
 * Callers: 2
 *   0x0000000000256100  Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *   0x0000000000258A2C  Caver::CharAnimControllerComponent::Clone(void)
 *
 * Callees: 1
 *   0x000000000021C154  Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC8A8 string=0x00000000001FC8AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::AnimationControllerComponent::InitWithComponent(
        Caver::AnimationControllerComponent *this,
        const Caver::AnimationControllerComponent *a2)
{
  JUMPOUT(0x21C4B8);
}

