/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e8f6c
 * Function: Caver::Proto::PlayerProfile_Counter::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::PlayerProfile_Counter::New() const */

void Caver::Proto::PlayerProfile_Counter::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x20);
  puVar1 = PTR_vtable_007e4b40;
  *(undefined4 *)(plVar3 + 1) = 0;
  puVar2 = PTR__default_name__007e6560;
  *plVar3 = (long)(puVar1 + 0x10);
  plVar3[2] = (long)puVar2;
  plVar3[3] = 0;
  return;
}


