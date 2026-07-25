/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000025E038
 * Mangled: _ZN5Caver23CharControllerComponent17ResetAirJumpCountEv
 * Demangled: Caver::CharControllerComponent::ResetAirJumpCount(void)
 *
 * Callers: 1
 *   0x00000000001F5B00  Caver::CharControllerComponent::ResetAirJumpCount(void)
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::CharControllerComponent::ResetAirJumpCount(__int64 this)
{
  *(_DWORD *)(this + 608) = 0;
  return this;
}

