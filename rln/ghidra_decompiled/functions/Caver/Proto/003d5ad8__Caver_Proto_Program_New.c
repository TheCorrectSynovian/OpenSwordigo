/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003d5ad8
 * Function: Caver::Proto::Program::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Program::New() const */

void Caver::Proto::Program::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = operator_new(0x30);
  puVar2 = PTR_vtable_007e61c0;
  *(undefined4 *)(plVar4 + 1) = 0;
  puVar3 = PTR__default_name__007e7d20;
  puVar1 = PTR__default_string__007e54d8;
  plVar4[4] = (long)PTR__default_bytes__007e7070;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[3] = (long)puVar1;
  plVar4[2] = (long)puVar3;
  *(undefined4 *)(plVar4 + 5) = 0;
  return;
}


