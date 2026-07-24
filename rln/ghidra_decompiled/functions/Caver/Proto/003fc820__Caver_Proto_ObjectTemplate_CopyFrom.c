/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003fc820
 * Function: Caver::Proto::ObjectTemplate::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ObjectTemplate * this, ObjectTemplate * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectTemplate::CopyFrom(Caver::Proto::ObjectTemplate const&) */

void __thiscall Caver::Proto::ObjectTemplate::CopyFrom(ObjectTemplate *this,ObjectTemplate *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


