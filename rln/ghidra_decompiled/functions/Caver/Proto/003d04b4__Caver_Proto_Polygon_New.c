/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d04b4
 * Function: Caver::Proto::Polygon::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Polygon::New() const */

void Caver::Proto::Polygon::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x50);
  puVar1 = PTR_vtable_007e7600 + 0x10;
  plVar2[2] = (long)(plVar2 + 5);
  plVar2[3] = 0;
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined4 *)(plVar2 + 4) = 4;
  *(undefined2 *)(plVar2 + 9) = 0x100;
  *plVar2 = (long)puVar1;
  *(undefined4 *)((long)plVar2 + 0x4c) = 0;
  return;
}


