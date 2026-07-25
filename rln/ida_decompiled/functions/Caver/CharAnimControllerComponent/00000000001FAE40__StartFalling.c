/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FAE40
 * Mangled: ._ZN5Caver27CharAnimControllerComponent12StartFallingEv
 * Demangled: Caver::CharAnimControllerComponent::StartFalling(void)
 *
 * Callers: 2
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *   0x000000000025EF40  Caver::CharControllerComponent::SetInitialAnimationControllerState(void)
 *
 * Callees: 1
 *   0x000000000025792C  Caver::CharAnimControllerComponent::StartFalling(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FAE48 string=0x00000000001FAE4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharAnimControllerComponent::StartFalling(Caver::CharAnimControllerComponent *this)
{
  return _ZN5Caver27CharAnimControllerComponent12StartFallingEv(this);
}

