/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200C60
 * Mangled: ._ZN5Caver27CharAnimControllerComponent8IsMovingEv
 * Demangled: Caver::CharAnimControllerComponent::IsMoving(void)
 *
 * Callers: 1
 *   0x000000000025B5D8  Caver::CharControllerComponent::RegisterLibrary(void)
 *
 * Callees: 1
 *   0x00000000002574D0  Caver::CharAnimControllerComponent::IsMoving(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200C64 string=0x00000000002574D0 ""
 *   insn=0x0000000000200C68 string=0x0000000000200C6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharAnimControllerComponent::IsMoving(Caver::CharAnimControllerComponent *this)
{
  return _ZN5Caver27CharAnimControllerComponent8IsMovingEv(this);
}

