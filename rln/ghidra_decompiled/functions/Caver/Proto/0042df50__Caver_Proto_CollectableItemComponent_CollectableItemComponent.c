/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042df50
 * Function: Caver::Proto::CollectableItemComponent::CollectableItemComponent
 * Signature: undefined __thiscall CollectableItemComponent(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::CollectableItemComponent() */

void __thiscall
Caver::Proto::CollectableItemComponent::CollectableItemComponent(CollectableItemComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar2 = PTR_vtable_007e67c0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  puVar3 = PTR__default_identifier__007e6b70;
  puVar1 = PTR__default_item_name__007e5e68;
  this[0x28] = (CollectableItemComponent)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined **)this = puVar2 + 0x10;
  *(undefined **)(this + 0x20) = puVar3;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


