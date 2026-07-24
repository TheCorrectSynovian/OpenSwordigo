/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f570
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry
 * Signature: undefined __thiscall ItemDropComponent_ItemDropEntry(ItemDropComponent_ItemDropEntry * this, ItemDropComponent_ItemDropEntry * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry(Caver::Proto::ItemDropComponent_ItemDropEntry
   const&) */

void __thiscall
Caver::Proto::ItemDropComponent_ItemDropEntry::ItemDropComponent_ItemDropEntry
          (ItemDropComponent_ItemDropEntry *this,ItemDropComponent_ItemDropEntry *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_vtable_007e5f28;
                    /* try { // try from 0042f578 to 0052f583 has its CatchHandler @ 0042f3c8 */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042f500 with catch @ 0042f580
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0042f654 with catch @ 0042f584
                       catch(type#1 @ 00000000) { ... } // from try @ 0042f7e4 with catch @ 0042f584
                        */
  *(undefined4 *)(this + 8) = 0;
  puVar3 = PTR__default_item_identifier__007e7320;
  puVar2 = PTR__default_template_name__007e6418;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x18) = puVar3;
  *(undefined **)(this + 0x10) = puVar2;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  MergeFrom(this,param_1);
  return;
}


