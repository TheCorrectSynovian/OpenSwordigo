/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e0fac
 * Function: Caver::Proto::Skill::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Skill::New() const */

void Caver::Proto::Skill::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  
  plVar5 = operator_new(0x38);
  puVar1 = PTR_vtable_007e5620;
  *(undefined4 *)(plVar5 + 1) = 0;
  puVar4 = PTR__default_description__007e7dc0;
  puVar3 = PTR__default_title__007e7328;
  puVar2 = PTR__default_name__007e6d10;
  plVar5[5] = 0;
  plVar5[6] = 0;
  *plVar5 = (long)(puVar1 + 0x10);
  plVar5[3] = (long)puVar3;
  plVar5[2] = (long)puVar2;
  plVar5[4] = (long)puVar4;
  return;
}


