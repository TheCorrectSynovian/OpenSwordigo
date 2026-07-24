/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e2adc
 * Function: Caver::Proto::EntityClass::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::EntityClass::New() const */

void Caver::Proto::EntityClass::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = operator_new(0x30);
  puVar3 = PTR_vtable_007e69c8;
  puVar2 = PTR__default_name__007e5c18;
  *(undefined4 *)(plVar4 + 1) = 0;
  puVar1 = PTR__default_title__007e56f8;
  *plVar4 = (long)(puVar3 + 0x10);
  *(undefined4 *)(plVar4 + 4) = 0x1010100;
  *(undefined4 *)((long)plVar4 + 0x24) = 0;
  plVar4[3] = (long)puVar1;
  plVar4[2] = (long)puVar2;
  plVar4[5] = 0;
  return;
}


