/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f9bc
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::New
 * Signature: undefined __cdecl New(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent_ItemDropEntry::New() const */

void Caver::Proto::ItemDropComponent_ItemDropEntry::New(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  
  plVar4 = operator_new(0x30);
  puVar1 = PTR_vtable_007e5f28;
  *(undefined4 *)(plVar4 + 1) = 0;
  puVar3 = PTR__default_item_identifier__007e7320;
  puVar2 = PTR__default_template_name__007e6418;
  *plVar4 = (long)(puVar1 + 0x10);
  plVar4[3] = (long)puVar3;
  plVar4[2] = (long)puVar2;
  plVar4[4] = 0;
  plVar4[5] = 0;
  return;
}


