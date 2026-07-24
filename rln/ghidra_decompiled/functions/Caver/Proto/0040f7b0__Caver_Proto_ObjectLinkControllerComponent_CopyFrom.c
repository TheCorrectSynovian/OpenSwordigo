/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040f7b0
 * Function: Caver::Proto::ObjectLinkControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(ObjectLinkControllerComponent * this, ObjectLinkControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ObjectLinkControllerComponent::CopyFrom(Caver::Proto::ObjectLinkControllerComponent
   const&) */

void __thiscall
Caver::Proto::ObjectLinkControllerComponent::CopyFrom
          (ObjectLinkControllerComponent *this,ObjectLinkControllerComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


