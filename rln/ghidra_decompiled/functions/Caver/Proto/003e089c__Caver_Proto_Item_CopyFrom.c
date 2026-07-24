/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e089c
 * Function: Caver::Proto::Item::CopyFrom
 * Signature: undefined __thiscall CopyFrom(Item * this, Item * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Item::CopyFrom(Caver::Proto::Item const&) */

void __thiscall Caver::Proto::Item::CopyFrom(Item *this,Item *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


