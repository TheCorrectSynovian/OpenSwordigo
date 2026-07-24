/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f1d70
 * Function: Caver::Proto::LevelState::~LevelState
 * Signature: undefined __thiscall ~LevelState(LevelState * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LevelState::~LevelState() */

void __thiscall Caver::Proto::LevelState::~LevelState(LevelState *this)

{
  ~LevelState(this);
  operator_delete(this);
  return;
}


