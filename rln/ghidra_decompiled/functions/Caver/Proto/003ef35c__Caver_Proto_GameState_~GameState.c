/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ef35c
 * Function: Caver::Proto::GameState::~GameState
 * Signature: undefined __thiscall ~GameState(GameState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameState::~GameState() */

void __thiscall Caver::Proto::GameState::~GameState(GameState *this)

{
  ~GameState(this);
  operator_delete(this);
  return;
}


