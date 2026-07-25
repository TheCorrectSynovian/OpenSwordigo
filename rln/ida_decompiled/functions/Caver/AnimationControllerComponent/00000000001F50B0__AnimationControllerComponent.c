/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F50B0
 * Mangled: ._ZN5Caver28AnimationControllerComponentC2Ev
 * Demangled: Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *
 * Callers: 2
 *   0x000000000021D270  Caver::AnimationControllerComponent::Clone(void)
 *   0x0000000000256100  Caver::CharAnimControllerComponent::CharAnimControllerComponent(void)
 *
 * Callees: 1
 *   0x000000000021C154  Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F50B8 string=0x00000000001F50BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AnimationControllerComponent::AnimationControllerComponent(
        Caver::AnimationControllerComponent *this)
{
  return _ZN5Caver28AnimationControllerComponentC2Ev(this);
}

