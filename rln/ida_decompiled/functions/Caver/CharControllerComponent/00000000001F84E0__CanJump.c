/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F84E0
 * Mangled: ._ZN5Caver23CharControllerComponent7CanJumpEv
 * Demangled: Caver::CharControllerComponent::CanJump(void)
 *
 * Callers: 1
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000025EA34  Caver::CharControllerComponent::CanJump(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F84E8 string=0x00000000001F84EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::CanJump(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent7CanJumpEv(this);
}

