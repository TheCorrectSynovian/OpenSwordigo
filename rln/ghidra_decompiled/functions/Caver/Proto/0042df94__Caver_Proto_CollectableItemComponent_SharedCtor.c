/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042df94
 * Function: Caver::Proto::CollectableItemComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(CollectableItemComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::SharedCtor() */

void __thiscall Caver::Proto::CollectableItemComponent::SharedCtor(CollectableItemComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined4 *)(this + 0x10) = 0;
  puVar2 = PTR__default_identifier__007e6b70;
  puVar1 = PTR__default_item_name__007e5e68;
                    /* catch() { ... } // from try @ 0042de74 with catch @ 0042dfa8 */
  this[0x28] = (CollectableItemComponent)0x0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined **)(this + 0x20) = puVar2;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined4 *)(this + 0x38) = 0;
  return;
}


