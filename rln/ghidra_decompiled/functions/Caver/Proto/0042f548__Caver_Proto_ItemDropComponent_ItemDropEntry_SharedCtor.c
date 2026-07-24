/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042f548
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::SharedCtor
 * Signature: undefined __thiscall SharedCtor(ItemDropComponent_ItemDropEntry * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent_ItemDropEntry::SharedCtor() */

void __thiscall
Caver::Proto::ItemDropComponent_ItemDropEntry::SharedCtor(ItemDropComponent_ItemDropEntry *this)

{
  undefined *puVar1;
  undefined *puVar2;
  
  *(undefined4 *)(this + 8) = 0;
  puVar2 = PTR__default_item_identifier__007e7320;
  puVar1 = PTR__default_template_name__007e6418;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined **)(this + 0x18) = puVar2;
  *(undefined **)(this + 0x10) = puVar1;
  return;
}


