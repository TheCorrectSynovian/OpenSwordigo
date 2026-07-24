/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040a358
 * Function: Caver::Proto::WaterMeshComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::WaterMeshComponent::New() const */

void Caver::Proto::WaterMeshComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x30);
  puVar1 = PTR_vtable_007e4ed0;
  *(undefined4 *)(plVar2 + 2) = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  *(undefined4 *)(plVar2 + 5) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  return;
}


