/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004179e8
 * Function: Caver::Proto::MonsterEntityComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::MonsterEntityComponent::New() const */

void Caver::Proto::MonsterEntityComponent::New(void)

{
  undefined *puVar1;
  long *plVar2;
  
  plVar2 = operator_new(0x28);
  puVar1 = PTR_vtable_007e47e8;
  *(undefined4 *)(plVar2 + 1) = 0;
  *(undefined4 *)((long)plVar2 + 0x24) = 0;
  plVar2[2] = 0;
  plVar2[3] = 0;
  *plVar2 = (long)(puVar1 + 0x10);
  *(undefined2 *)(plVar2 + 4) = 0;
  return;
}


