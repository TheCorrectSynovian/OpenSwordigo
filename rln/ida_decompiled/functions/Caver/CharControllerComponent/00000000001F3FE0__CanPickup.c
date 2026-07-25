/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3FE0
 * Mangled: ._ZN5Caver23CharControllerComponent9CanPickupEv
 * Demangled: Caver::CharControllerComponent::CanPickup(void)
 *
 * Callers: 2
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *
 * Callees: 1
 *   0x000000000025EBB8  Caver::CharControllerComponent::CanPickup(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3FE8 string=0x00000000001F3FEC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::CanPickup(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent9CanPickupEv(this);
}

