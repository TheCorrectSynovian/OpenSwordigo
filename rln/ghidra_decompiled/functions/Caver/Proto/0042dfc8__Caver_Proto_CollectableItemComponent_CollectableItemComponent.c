/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042dfc8
 * Function: Caver::Proto::CollectableItemComponent::CollectableItemComponent
 * Signature: undefined __thiscall CollectableItemComponent(CollectableItemComponent * this, CollectableItemComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::CollectableItemComponent(Caver::Proto::CollectableItemComponent
   const&) */

void __thiscall
Caver::Proto::CollectableItemComponent::CollectableItemComponent
          (CollectableItemComponent *this,CollectableItemComponent *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR_vtable_007e67c0;
  puVar1 = PTR__default_item_name__007e5e68;
                    /* catch() { ... } // from try @ 0042def0 with catch @ 0042dfe8 */
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined8 *)(this + 8) = 0;
  puVar2 = PTR__default_identifier__007e6b70;
  this[0x28] = (CollectableItemComponent)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined **)(this + 0x20) = puVar2;
  *(undefined **)(this + 0x18) = puVar1;
  MergeFrom(this,param_1);
  return;
}


