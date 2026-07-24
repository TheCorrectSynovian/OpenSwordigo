/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e6cd8
 * Function: Caver::Proto::GameData::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GameData::New() const */

void Caver::Proto::GameData::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x130);
  puVar1 = PTR_vtable_007e6eb0;
  plVar2[2] = (long)(plVar2 + 5);
  plVar2[9] = (long)(plVar2 + 0xc);
  plVar2[0x10] = (long)(plVar2 + 0x13);
  plVar2[0x17] = (long)(plVar2 + 0x1a);
  plVar2[0x1e] = (long)(plVar2 + 0x21);
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 4) = 4;
  plVar2[10] = 0;
  *(undefined4 *)(plVar2 + 0xb) = 4;
  plVar2[0x11] = 0;
  *(undefined4 *)(plVar2 + 0x12) = 4;
  plVar2[0x18] = 0;
  *(undefined4 *)(plVar2 + 0x19) = 4;
  plVar2[0x1f] = 0;
  *(undefined4 *)(plVar2 + 0x20) = 4;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 0x25) = 0;
  return;
}


