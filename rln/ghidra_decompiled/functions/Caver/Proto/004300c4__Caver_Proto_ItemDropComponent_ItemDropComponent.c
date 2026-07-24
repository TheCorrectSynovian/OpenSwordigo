/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004300c4
 * Function: Caver::Proto::ItemDropComponent::ItemDropComponent
 * Signature: undefined __thiscall ItemDropComponent(ItemDropComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::ItemDropComponent() */

void __thiscall Caver::Proto::ItemDropComponent::ItemDropComponent(ItemDropComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(ItemDropComponent **)(this + 0x20) = this + 0x38;
  puVar2 = PTR__default_item_name__007e5cd8;
  *(undefined4 *)(this + 0x30) = 4;
  puVar1 = PTR_vtable_007e4ac0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined **)this = puVar1 + 0x10;
  puVar1 = PTR__default_item_identifier__007e6a38;
  *(undefined2 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x5c) = 0;
  *(undefined **)(this + 0x18) = puVar1;
  *(undefined **)(this + 0x10) = puVar2;
  return;
}


