/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f1698
 * Function: Caver::Proto::GameState::CopyFrom
 * Signature: undefined __thiscall CopyFrom(GameState * this, GameState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameState::CopyFrom(Caver::Proto::GameState const&) */

void __thiscall Caver::Proto::GameState::CopyFrom(GameState *this,GameState *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


