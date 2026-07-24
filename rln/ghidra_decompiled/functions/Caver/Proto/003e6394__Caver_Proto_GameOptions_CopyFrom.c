/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e6394
 * Function: Caver::Proto::GameOptions::CopyFrom
 * Signature: undefined __thiscall CopyFrom(GameOptions * this, GameOptions * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameOptions::CopyFrom(Caver::Proto::GameOptions const&) */

void __thiscall Caver::Proto::GameOptions::CopyFrom(GameOptions *this,GameOptions *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


