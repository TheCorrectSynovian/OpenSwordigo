/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002037D0
 * Mangled: ._ZN5Caver28AnimationControllerComponentC2Ev_0
 * Demangled: Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *
 * Callers: 1
 *   0x000000000024FA04  Caver::AnimationControllerComponent::Create(void)
 *
 * Callees: 1
 *   0x000000000021C154  Caver::AnimationControllerComponent::AnimationControllerComponent(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000002037D8 string=0x00000000002037DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::AnimationControllerComponent::AnimationControllerComponent(
        Caver::AnimationControllerComponent *this)
{
  return _ZN5Caver28AnimationControllerComponentC2Ev(this);
}

