/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ec4a8
 * Function: Caver::Proto::StateProperties::CopyFrom
 * Signature: undefined __thiscall CopyFrom(StateProperties * this, StateProperties * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StateProperties::CopyFrom(Caver::Proto::StateProperties const&) */

void __thiscall
Caver::Proto::StateProperties::CopyFrom(StateProperties *this,StateProperties *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


