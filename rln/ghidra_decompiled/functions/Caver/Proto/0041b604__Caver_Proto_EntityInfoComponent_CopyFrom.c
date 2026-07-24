/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b604
 * Function: Caver::Proto::EntityInfoComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(EntityInfoComponent * this, EntityInfoComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::CopyFrom(Caver::Proto::EntityInfoComponent const&) */

void __thiscall
Caver::Proto::EntityInfoComponent::CopyFrom(EntityInfoComponent *this,EntityInfoComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


