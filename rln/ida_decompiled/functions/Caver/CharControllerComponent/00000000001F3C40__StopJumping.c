/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3C40
 * Mangled: ._ZN5Caver23CharControllerComponent11StopJumpingEv
 * Demangled: Caver::CharControllerComponent::StopJumping(void)
 *
 * Callers: 1
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000025DB54  Caver::CharControllerComponent::StopJumping(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3C48 string=0x00000000001F3C4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::StopJumping(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent11StopJumpingEv(this);
}

