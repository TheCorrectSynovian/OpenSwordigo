/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025E9C8
 * Mangled: _ZN5Caver23CharControllerComponent12StartJumpingEv
 * Demangled: Caver::CharControllerComponent::StartJumping(void)
 *
 * Callers: 1
 *   0x00000000001FFC30  Caver::CharControllerComponent::StartJumping(void)
 *
 * Callees: 0
 *
 * Referenced strings: 2
 *   insn=0x000000000025E9C8 string=0x000000000025E9CC "("
 *   insn=0x000000000025E9CC string=0x000000000025E9D0 "0\t9"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharControllerComponent::StartJumping(__int64 this)
{
  *(_QWORD *)(this + 592) = 1;
  *(_BYTE *)(this + 588) = 1;
  return this;
}

