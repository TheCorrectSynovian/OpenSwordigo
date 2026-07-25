/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002574D0
 * Mangled: _ZN5Caver27CharAnimControllerComponent8IsMovingEv
 * Demangled: Caver::CharAnimControllerComponent::IsMoving(void)
 *
 * Callers: 1
 *   0x0000000000200C60  Caver::CharAnimControllerComponent::IsMoving(void)
 *
 * Callees: 0
 *
 * Referenced strings: 1
 *   insn=0x00000000002574D4 string=0x00000000002574D8 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

bool __fastcall Caver::CharAnimControllerComponent::IsMoving(Caver::CharAnimControllerComponent *this)
{
  __int64 v1; // x8

  v1 = *((_QWORD *)this + 41);
  return v1 && *(_BYTE *)(v1 + 44) == 0;
}

