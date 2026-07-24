/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ce008
 * Function: Caver::Proto::DateTime::CopyFrom
 * Signature: undefined __thiscall CopyFrom(DateTime * this, DateTime * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DateTime::CopyFrom(Caver::Proto::DateTime const&) */

void __thiscall Caver::Proto::DateTime::CopyFrom(DateTime *this,DateTime *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


