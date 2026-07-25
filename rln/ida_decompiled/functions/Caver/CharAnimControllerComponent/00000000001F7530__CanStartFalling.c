/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7530
 * Mangled: ._ZN5Caver27CharAnimControllerComponent15CanStartFallingEv
 * Demangled: Caver::CharAnimControllerComponent::CanStartFalling(void)
 *
 * Callers: 1
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x000000000025764C  Caver::CharAnimControllerComponent::StartJumping(bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F7534 string=0x00000000002578BC ""
 *   insn=0x00000000001F7538 string=0x00000000001F753C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharAnimControllerComponent::CanStartFalling(Caver::CharAnimControllerComponent *this)
{
  JUMPOUT(0x2578BC);
}

