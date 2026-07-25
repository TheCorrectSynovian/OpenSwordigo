/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FE020
 * Mangled: ._ZN5Caver27CharAnimControllerComponent12StartJumpingEb
 * Demangled: Caver::CharAnimControllerComponent::StartJumping(bool)
 *
 * Callers: 2
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x000000000025EF40  Caver::CharControllerComponent::SetInitialAnimationControllerState(void)
 *
 * Callees: 1
 *   0x000000000025764C  Caver::CharAnimControllerComponent::StartJumping(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FE028 string=0x00000000001FE02C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharAnimControllerComponent::StartJumping(Caver::CharAnimControllerComponent *this, bool a2)
{
  return _ZN5Caver27CharAnimControllerComponent12StartJumpingEb(this, a2);
}

