/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200440
 * Mangled: ._ZN5Caver23CharControllerComponent15CanBeginCastingEv
 * Demangled: Caver::CharControllerComponent::CanBeginCasting(void)
 *
 * Callers: 1
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000025ECD0  Caver::CharControllerComponent::CanBeginCasting(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200448 string=0x000000000020044C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::CanBeginCasting(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent15CanBeginCastingEv(this);
}

