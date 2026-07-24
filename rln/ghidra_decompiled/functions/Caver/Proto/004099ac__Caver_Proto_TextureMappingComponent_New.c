/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004099ac
 * Function: Caver::Proto::TextureMappingComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::TextureMappingComponent::New() const */

void Caver::Proto::TextureMappingComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x30);
  puVar1 = PTR_vtable_007e60e0;
  *(undefined4 *)(plVar3 + 1) = 0;
  puVar2 = PTR__default_texture_name__007e7c58;
  *(undefined4 *)(plVar3 + 3) = 0;
  plVar3[4] = 0;
  plVar3[2] = (long)puVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar3 + 5) = 0;
  return;
}


