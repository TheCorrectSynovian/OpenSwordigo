/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0042fa08
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::Clear
 * Signature: undefined __thiscall Clear(ItemDropComponent_ItemDropEntry * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent_ItemDropEntry::Clear() */

void __thiscall
Caver::Proto::ItemDropComponent_ItemDropEntry::Clear(ItemDropComponent_ItemDropEntry *this)

{
  ItemDropComponent_ItemDropEntry IVar1;
  long *plVar2;
  uint uVar3;
  
  IVar1 = this[0x2c];
  uVar3 = (uint)(byte)IVar1;
  if (IVar1 != (ItemDropComponent_ItemDropEntry)0x0) {
    if ((((byte)IVar1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x10), plVar2 != (long *)PTR__default_template_name__007e6418)) {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
      uVar3 = *(uint *)(this + 0x2c);
    }
    if (((uVar3 >> 1 & 1) != 0) &&
       (plVar2 = *(long **)(this + 0x18), plVar2 != (long *)PTR__default_item_identifier__007e7320))
    {
      FUN_00668cb8(plVar2,0,*(undefined8 *)(*plVar2 + -0x18),0);
    }
    *(undefined4 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  *(undefined4 *)(this + 0x2c) = 0;
  return;
}


