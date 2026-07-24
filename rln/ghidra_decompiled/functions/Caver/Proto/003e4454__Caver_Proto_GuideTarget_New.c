/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e4454
 * Function: Caver::Proto::GuideTarget::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GuideTarget::New() const */

void Caver::Proto::GuideTarget::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  
  plVar5 = operator_new(0x78);
  plVar5[7] = (long)(plVar5 + 10);
  *(undefined4 *)(plVar5 + 9) = 4;
  puVar4 = PTR__default_object_identifier__007e7520;
  puVar2 = PTR__default_name__007e4fe0;
  plVar5[8] = 0;
  plVar5[1] = 0;
  *plVar5 = (long)(PTR_vtable_007e5c88 + 0x10);
  puVar3 = PTR__default_level_name__007e6788;
  puVar1 = PTR__default_carry_object_identifier__007e49b0;
  *(undefined1 *)(plVar5 + 6) = 0;
  *(undefined4 *)(plVar5 + 0xe) = 0;
  plVar5[3] = (long)puVar3;
  plVar5[2] = (long)puVar2;
  plVar5[5] = (long)puVar1;
  plVar5[4] = (long)puVar4;
  return;
}


