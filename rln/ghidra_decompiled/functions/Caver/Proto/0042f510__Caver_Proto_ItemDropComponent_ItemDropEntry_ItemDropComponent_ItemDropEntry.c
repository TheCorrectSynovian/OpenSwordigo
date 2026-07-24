/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f510
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry
 * Signature: undefined __thiscall ItemDropComponent_ItemDropEntry(ItemDropComponent_ItemDropEntry * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry() */

void __thiscall
Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry
          (ItemDropComponent_ItemDropEntry *this)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_vtable_007e5f28;
  *(undefined4 *)(this + 8) = 0;
  puVar3 = PTR__default_item_identifier__007e7320;
  puVar2 = PTR__default_template_name__007e6418;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042f450 with catch @ 0042f52c
                        */
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x18) = puVar3;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  return;
}


