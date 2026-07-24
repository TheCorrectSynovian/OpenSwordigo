/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004b7e60
 * Function: Caver::GameState::CurrentLevelState
 * Signature: undefined __thiscall CurrentLevelState(GameState * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameState::CurrentLevelState(bool) */

undefined8 __thiscall Caver::GameState::CurrentLevelState(GameState *this,bool param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(*(long *)(this + 0x158) + -0x18) != 0) {
                    /* catch() { ... } // from try @ 004b7acc with catch @ 004b7e74
                       catch() { ... } // from try @ 004b7b18 with catch @ 004b7e74 */
    uVar1 = StateForLevelWithName(this,(string *)(this + 0x158),param_1);
    return uVar1;
  }
                    /* catch() { ... } // from try @ 004b7af8 with catch @ 004b7e7c */
  return 0;
}


