/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00429404
 * Function: Caver::Proto::GenericMonsterControllerComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::GenericMonsterControllerComponent::New() const */

void Caver::Proto::GenericMonsterControllerComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x18);
  puVar1 = PTR_vtable_007e47a8;
  *(undefined4 *)(plVar2 + 2) = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  plVar2[1] = 0;
  return;
}


