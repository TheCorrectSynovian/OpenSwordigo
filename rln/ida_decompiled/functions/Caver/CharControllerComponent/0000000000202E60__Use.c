/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202E60
 * Mangled: ._ZN5Caver23CharControllerComponent3UseEv
 * Demangled: Caver::CharControllerComponent::Use(void)
 *
 * Callers: 1
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000025F130  Caver::CharControllerComponent::Use(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202E68 string=0x0000000000202E6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::Use(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent3UseEv(this);
}

