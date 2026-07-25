/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8CF0
 * Mangled: ._ZN5Caver27CharAnimControllerComponent11StartMovingEv
 * Demangled: Caver::CharAnimControllerComponent::StartMoving(void)
 *
 * Callers: 2
 *   0x000000000025E888  Caver::CharControllerComponent::StartMovingToDirection(int)
 *   0x000000000025EF40  Caver::CharControllerComponent::SetInitialAnimationControllerState(void)
 *
 * Callees: 1
 *   0x00000000002574F0  Caver::CharAnimControllerComponent::StartMoving(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8CF8 string=0x00000000001F8CFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharAnimControllerComponent::StartMoving(Caver::CharAnimControllerComponent *this)
{
  return _ZN5Caver27CharAnimControllerComponent11StartMovingEv(this);
}

