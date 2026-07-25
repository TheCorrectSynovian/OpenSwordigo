/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F76E0
 * Mangled: ._ZN5Caver27CharAnimControllerComponent5ResetEv
 * Demangled: Caver::CharAnimControllerComponent::Reset(void)
 *
 * Callers: 1
 *   0x000000000025EF40  Caver::CharControllerComponent::SetInitialAnimationControllerState(void)
 *
 * Callees: 1
 *   0x0000000000256BCC  Caver::CharAnimControllerComponent::Prepare(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F76E4 string=0x00000000002570DC ""
 *   insn=0x00000000001F76E8 string=0x00000000001F76EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::CharAnimControllerComponent::Reset(Caver::CharAnimControllerComponent *this)
{
  JUMPOUT(0x2570DC);
}

