/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041afc0
 * Function: Caver::Proto::EntityInfoComponent::SharedCtor
 * Signature: undefined __thiscall SharedCtor(EntityInfoComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::SharedCtor() */

void __thiscall Caver::Proto::EntityInfoComponent::SharedCtor(EntityInfoComponent *this)

{
  undefined *puVar1;
  
  *(undefined4 *)(this + 8) = 0;
  puVar1 = PTR__default_entity_class__007e6138;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


