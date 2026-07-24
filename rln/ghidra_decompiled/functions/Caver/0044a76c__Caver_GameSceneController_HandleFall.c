/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044a76c
 * Function: Caver::GameSceneController::HandleFall
 * Signature: undefined __thiscall HandleFall(GameSceneController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::HandleFall() */

void __thiscall Caver::GameSceneController::HandleFall(GameSceneController *this)

{
  this[0x178] = (GameSceneController)0x0;
  HeroEntityComponent::ResetToSafePosition(*(HeroEntityComponent **)(this + 0xe8));
  return;
}


