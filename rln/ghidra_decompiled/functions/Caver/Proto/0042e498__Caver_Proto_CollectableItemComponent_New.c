/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042e498
 * Function: Caver::Proto::CollectableItemComponent::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CollectableItemComponent::New() const */

void Caver::Proto::CollectableItemComponent::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  
  plVar3 = operator_new(0x40);
  puVar2 = PTR_vtable_007e67c0;
  puVar1 = PTR__default_item_name__007e5e68;
  *(undefined4 *)(plVar3 + 2) = 0;
  *plVar3 = (long)(puVar2 + 0x10);
  plVar3[1] = 0;
  puVar2 = PTR__default_identifier__007e6b70;
  *(undefined1 *)(plVar3 + 5) = 0;
  plVar3[6] = 0;
  *(undefined4 *)(plVar3 + 7) = 0;
  plVar3[4] = (long)puVar2;
  plVar3[3] = (long)puVar1;
  return;
}


