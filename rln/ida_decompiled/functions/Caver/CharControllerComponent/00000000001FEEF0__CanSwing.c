/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEEF0
 * Mangled: ._ZN5Caver23CharControllerComponent8CanSwingEv
 * Demangled: Caver::CharControllerComponent::CanSwing(void)
 *
 * Callers: 1
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *
 * Callees: 1
 *   0x000000000025D00C  Caver::CharControllerComponent::CanSwing(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEEF8 string=0x00000000001FEEFC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::CanSwing(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent8CanSwingEv(this);
}

