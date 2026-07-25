/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5B00
 * Mangled: ._ZN5Caver23CharControllerComponent17ResetAirJumpCountEv
 * Demangled: Caver::CharControllerComponent::ResetAirJumpCount(void)
 *
 * Callers: 1
 *   0x000000000028A9FC  Caver::MagicHookshotComponent::HandleMessage(int,void *)
 *
 * Callees: 1
 *   0x000000000025E038  Caver::CharControllerComponent::ResetAirJumpCount(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5B08 string=0x00000000001F5B0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::ResetAirJumpCount(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent17ResetAirJumpCountEv(this);
}

