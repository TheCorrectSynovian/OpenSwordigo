/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043875c
 * Function: Caver::Proto::MeshMaterial::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MeshMaterial::New() const */

void Caver::Proto::MeshMaterial::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x40);
  puVar1 = PTR_vtable_007e5a10;
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[6] = 0;
  *(undefined4 *)(plVar2 + 7) = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[2] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 5) = 0;
  return;
}


