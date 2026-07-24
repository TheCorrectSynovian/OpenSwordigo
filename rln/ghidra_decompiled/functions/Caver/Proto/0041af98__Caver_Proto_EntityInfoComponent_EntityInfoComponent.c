/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041af98
 * Function: Caver::Proto::EntityInfoComponent::EntityInfoComponent
 * Signature: undefined __thiscall EntityInfoComponent(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::EntityInfoComponent() */

void __thiscall Caver::Proto::EntityInfoComponent::EntityInfoComponent(EntityInfoComponent *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_vtable_007e4dd8;
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_entity_class__007e6138;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x10) = puVar2;
  return;
}


