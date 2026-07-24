/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003cf930
 * Function: Caver::Proto::Box::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Box * this, Box * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Box::CopyFrom(Caver::Proto::Box const&) */

void __thiscall Caver::Proto::Box::CopyFrom(Box *this,Box *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


