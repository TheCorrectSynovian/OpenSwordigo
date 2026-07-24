/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0040770c
 * Function: Caver::Proto::GroundMeshComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GroundMeshComponent::New() const */

void Caver::Proto::GroundMeshComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = operator_new(0xe0);
  puVar3 = PTR_vtable_007e7300;
  plVar4[4] = (long)(plVar4 + 7);
  plVar4[0xb] = 0;
  plVar4[0xc] = (long)(plVar4 + 0xf);
  plVar4[0x13] = (long)(plVar4 + 0x16);
  *(undefined4 *)(plVar4 + 1) = 0;
  *(undefined4 *)(plVar4 + 6) = 4;
  *(undefined4 *)(plVar4 + 0xe) = 4;
  *(undefined4 *)(plVar4 + 0x15) = 4;
  puVar1 = PTR__default_vertex_data__007e4e40;
  plVar4[5] = 0;
  plVar4[0xd] = 0;
  plVar4[0x14] = 0;
  puVar2 = PTR__default_indices__007e67d8;
  plVar4[0x1a] = 0;
  *(undefined1 *)(plVar4 + 0x1b) = 0;
  *plVar4 = (long)(puVar3 + 0x10);
  plVar4[3] = (long)puVar2;
  plVar4[2] = (long)puVar1;
  *(undefined4 *)((long)plVar4 + 0xdc) = 0;
  return;
}


