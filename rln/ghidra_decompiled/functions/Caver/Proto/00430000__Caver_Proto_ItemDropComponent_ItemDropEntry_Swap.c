/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00430000
 * Function: Caver::Proto::ItemDropComponent_ItemDropEntry::Swap
 * Signature: undefined __thiscall Swap(ItemDropComponent_ItemDropEntry * this, ItemDropComponent_ItemDropEntry * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::ItemDropComponent_ItemDropEntry::Swap(Caver::Proto::ItemDropComponent_ItemDropEntry*)
    */

void __thiscall
Caver::Proto::ItemDropComponent_ItemDropEntry::Swap
          (ItemDropComponent_ItemDropEntry *this,ItemDropComponent_ItemDropEntry *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  
  if (param_1 != this) {
    uVar2 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* catch() { ... } // from try @ 0042fae8 with catch @ 00430038 */
    uVar1 = *(undefined4 *)(this + 0x28);
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(param_1 + 0x28) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x2c);
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(param_1 + 0x2c) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


