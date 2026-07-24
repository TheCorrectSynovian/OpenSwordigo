/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d00b8
 * Function: Caver::Proto::Circle::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Circle * this, Circle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Circle::CopyFrom(Caver::Proto::Circle const&) */

void __thiscall Caver::Proto::Circle::CopyFrom(Circle *this,Circle *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


