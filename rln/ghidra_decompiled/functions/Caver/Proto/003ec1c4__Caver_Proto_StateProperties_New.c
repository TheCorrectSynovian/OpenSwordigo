/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ec1c4
 * Function: Caver::Proto::StateProperties::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::StateProperties::New() const */

void Caver::Proto::StateProperties::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x50);
  puVar1 = PTR_vtable_007e6290;
  plVar2[2] = (long)(plVar2 + 5);
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined4 *)(plVar2 + 4) = 4;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar2 + 9) = 0;
  return;
}


