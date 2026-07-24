/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003f2578
 * Function: Caver::Proto::LevelState::CopyFrom
 * Signature: undefined __thiscall CopyFrom(LevelState * this, LevelState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::LevelState::CopyFrom(Caver::Proto::LevelState const&) */

void __thiscall Caver::Proto::LevelState::CopyFrom(LevelState *this,LevelState *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


