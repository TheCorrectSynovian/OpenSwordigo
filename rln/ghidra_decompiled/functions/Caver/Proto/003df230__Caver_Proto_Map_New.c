/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003df230
 * Function: Caver::Proto::Map::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Map::New() const */

void Caver::Proto::Map::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x50);
  puVar1 = PTR_vtable_007e65d0;
  plVar2[2] = (long)(plVar2 + 5);
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined4 *)(plVar2 + 4) = 4;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 9) = 0;
  return;
}


