/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042ec7c
 * Function: Caver::Proto::CollectableItemComponent::CopyFrom
 * Signature: undefined __thiscall CopyFrom(CollectableItemComponent * this, CollectableItemComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::CopyFrom(Caver::Proto::CollectableItemComponent const&)
    */

void __thiscall
Caver::Proto::CollectableItemComponent::CopyFrom
          (CollectableItemComponent *this,CollectableItemComponent *param_1)

{
  if (param_1 != this) {
    (**(code **)(*(long *)this + 0x20))(this);
                    /* catch() { ... } // from try @ 0042ec54 with catch @ 0042ecac */
    MergeFrom(this,param_1);
    return;
  }
  return;
}


