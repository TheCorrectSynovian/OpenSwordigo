/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004008c0
 * Function: Caver::Proto::SceneObjectGroup::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::SceneObjectGroup::New() const */

void Caver::Proto::SceneObjectGroup::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x68);
  plVar2[2] = (long)PTR__default_identifier__007e5218;
  plVar2[3] = (long)(plVar2 + 6);
  *(undefined4 *)(plVar2 + 5) = 4;
  puVar1 = PTR_vtable_007e63b0;
  plVar2[4] = 0;
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined2 *)(plVar2 + 10) = 0;
  *(undefined1 *)((long)plVar2 + 0x52) = 0;
  plVar2[0xb] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 0xc) = 0;
  return;
}


