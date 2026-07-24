/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a858
 * Function: Caver::Proto::EntityActionComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(EntityActionComponent * this, EntityActionComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityActionComponent::CopyFrom(Caver::Proto::EntityActionComponent const&) */

void __thiscall
Caver::Proto::EntityActionComponent::CopyFrom
          (EntityActionComponent *this,EntityActionComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


