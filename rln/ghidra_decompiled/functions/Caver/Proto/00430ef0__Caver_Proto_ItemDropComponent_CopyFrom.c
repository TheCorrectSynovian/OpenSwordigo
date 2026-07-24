/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00430ef0
 * Function: Caver::Proto::ItemDropComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ItemDropComponent * this, ItemDropComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::CopyFrom(Caver::Proto::ItemDropComponent const&) */

void __thiscall
Caver::Proto::ItemDropComponent::CopyFrom(ItemDropComponent *this,ItemDropComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


