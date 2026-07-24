/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041a180
 * Function: Caver::Proto::EntityControllerComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(EntityControllerComponent * this, EntityControllerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityControllerComponent::CopyFrom(Caver::Proto::EntityControllerComponent const&)
    */

void __thiscall
Caver::Proto::EntityControllerComponent::CopyFrom
          (EntityControllerComponent *this,EntityControllerComponent *param_1)

{
  if (param_1 != this) {
                    /* catch() { ... } // from try @ 0041a0fc with catch @ 0041a1a8 */
    (**(code **)(*(long *)this + 0x20))(this);
    MergeFrom(this,param_1);
    return;
  }
  return;
}


