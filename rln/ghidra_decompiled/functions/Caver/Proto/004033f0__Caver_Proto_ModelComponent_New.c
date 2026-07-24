/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004033f0
 * Function: Caver::Proto::ModelComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ModelComponent::New() const */

void Caver::Proto::ModelComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x50);
  puVar1 = PTR_vtable_007e4d30;
  *(undefined4 *)(plVar3 + 1) = 0;
  puVar2 = PTR__default_name__007e7d30;
  plVar3[6] = 0;
  *(undefined1 *)(plVar3 + 7) = 0;
  plVar3[8] = 0;
  *(undefined4 *)(plVar3 + 9) = 0;
  plVar3[3] = 0;
  plVar3[4] = 0;
  plVar3[2] = (long)puVar2;
  *plVar3 = (long)(puVar1 + 0x10);
  *(undefined4 *)(plVar3 + 5) = 0;
  return;
}


