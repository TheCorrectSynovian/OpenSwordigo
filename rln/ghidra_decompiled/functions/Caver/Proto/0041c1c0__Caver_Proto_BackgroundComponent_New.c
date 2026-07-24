/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c1c0
 * Function: Caver::Proto::BackgroundComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BackgroundComponent::New() const */

void Caver::Proto::BackgroundComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x20);
  puVar2 = PTR_vtable_007e6a70;
  *(undefined4 *)(plVar3 + 1) = 0;
  puVar1 = PTR__default_texture_name__007e56a8;
  *plVar3 = (long)(puVar2 + 0x10);
  *(undefined4 *)(plVar3 + 3) = 0;
  plVar3[2] = (long)puVar1;
  return;
}


