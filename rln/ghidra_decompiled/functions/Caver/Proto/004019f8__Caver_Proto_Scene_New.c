/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004019f8
 * Function: Caver::Proto::Scene::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Scene::New() const */

void Caver::Proto::Scene::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0xa0);
  puVar1 = PTR_vtable_007e5680;
  plVar2[2] = (long)(plVar2 + 5);
  plVar2[9] = (long)(plVar2 + 0xc);
  *(undefined4 *)(plVar2 + 1) = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0x10] = 0;
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 4) = 4;
  plVar2[10] = 0;
  *(undefined4 *)(plVar2 + 0xb) = 4;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 0x13) = 0;
  return;
}


