/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041b3e4
 * Function: Caver::Proto::EntityInfoComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityInfoComponent::New() const */

void Caver::Proto::EntityInfoComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4dd8;
  *(undefined4 *)(plVar3 + 1) = 0;
  puVar2 = PTR__default_entity_class__007e6138;
  *plVar3 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar3 + 3) = 0;
  plVar3[2] = (long)puVar2;
  return;
}


