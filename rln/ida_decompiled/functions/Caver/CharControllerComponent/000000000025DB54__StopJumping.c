/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025DB54
 * Mangled: _ZN5Caver23CharControllerComponent11StopJumpingEv
 * Demangled: Caver::CharControllerComponent::StopJumping(void)
 *
 * Callers: 1
 *   0x00000000001F3C40  Caver::CharControllerComponent::StopJumping(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharControllerComponent::StopJumping(__int64 this)
{
  *(_BYTE *)(this + 588) = 0;
  return this;
}

