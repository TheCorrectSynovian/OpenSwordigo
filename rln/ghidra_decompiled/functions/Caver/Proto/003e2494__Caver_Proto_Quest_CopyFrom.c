/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e2494
 * Function: Caver::Proto::Quest::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Quest * this, Quest * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Quest::CopyFrom(Caver::Proto::Quest const&) */

void __thiscall Caver::Proto::Quest::CopyFrom(Quest *this,Quest *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


