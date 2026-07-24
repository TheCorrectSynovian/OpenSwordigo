/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0044d1f4
 * Function: Caver::GameSceneController::GameControlButtonUp
 * Signature: undefined __thiscall GameControlButtonUp(GameSceneController * this, GameControlButton param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameSceneController::GameControlButtonUp(Caver::GameControlButton) */

void __thiscall
Caver::GameSceneController::GameControlButtonUp(GameSceneController *this,int param_2)

{
  CharControllerComponent *this_00;
  
  this_00 = *(CharControllerComponent **)(this + 0xe0);
  if (this_00 != (CharControllerComponent *)0x0) {
    if (param_2 == 3) {
                    /* catch() { ... } // from try @ 0044b0d0 with catch @ 0044d220 */
      CharControllerComponent::StopJumping(this_00);
      return;
    }
    if (param_2 == 2) {
      CharControllerComponent::StopMovingToDirection(this_00,1);
      return;
    }
    if (param_2 == 1) {
      CharControllerComponent::StopMovingToDirection(this_00,-1);
      return;
    }
  }
                    /* catch() { ... } // from try @ 0044b11c with catch @ 0044d21c */
  return;
}


