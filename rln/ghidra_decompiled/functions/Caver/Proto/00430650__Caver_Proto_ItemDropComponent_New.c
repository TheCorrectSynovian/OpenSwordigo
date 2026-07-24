/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00430650
 * Function: Caver::Proto::ItemDropComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent::New() const */

void Caver::Proto::ItemDropComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x60);
  plVar3[4] = (long)(plVar3 + 7);
  puVar2 = PTR__default_item_name__007e5cd8;
  *(undefined4 *)(plVar3 + 6) = 4;
  puVar1 = PTR_vtable_007e4ac0;
                    /* try { // try from 00430678 to 0053067b has its CatchHandler @ 00430a7c */
                    /* try { // try from 0043067c to 005306e3 has its CatchHandler @ 00430504 */
  plVar3[5] = 0;
  *(undefined4 *)(plVar3 + 1) = 0;
  *plVar3 = (long)(puVar1 + 0x10);
  puVar1 = PTR__default_item_identifier__007e6a38;
  *(undefined2 *)(plVar3 + 0xb) = 0;
  *(undefined4 *)((long)plVar3 + 0x5c) = 0;
  plVar3[3] = (long)puVar1;
  plVar3[2] = (long)puVar2;
  return;
}


