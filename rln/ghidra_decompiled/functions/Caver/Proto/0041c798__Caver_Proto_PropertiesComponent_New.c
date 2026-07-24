/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c798
 * Function: Caver::Proto::PropertiesComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PropertiesComponent::New() const */

void Caver::Proto::PropertiesComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4ea0;
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[2] = 0;
  *(undefined4 *)(plVar2 + 3) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  return;
}


