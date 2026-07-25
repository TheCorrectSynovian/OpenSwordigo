/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8580
 * Mangled: ._ZN5Caver23CharControllerComponent6CanUseEv
 * Demangled: Caver::CharControllerComponent::CanUse(void)
 *
 * Callers: 2
 *   0x000000000034BC24  Caver::GameSceneController::GameControlButtonDown(Caver::GameControlButton)
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *
 * Callees: 1
 *   0x000000000025EAA0  Caver::CharControllerComponent::CanUse(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8588 string=0x00000000001F858C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::CharControllerComponent::CanUse(Caver::CharControllerComponent *this)
{
  return _ZN5Caver23CharControllerComponent6CanUseEv(this);
}

