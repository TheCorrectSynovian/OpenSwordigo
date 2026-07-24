/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003e08f0
 * Function: Caver::Proto::Item::Swap
 * Signature: undefined __thiscall Swap(Item * this, Item * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::Item::Swap(Caver::Proto::Item*) */

void __thiscall Caver::Proto::Item::Swap(Item *this,Item *param_1)

{
  undefined4 uVar1;
  Item IVar2;
  undefined8 uVar3;
  
  if (param_1 != this) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(undefined4 *)(this + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar3 = *(undefined8 *)(this + 0x10);
    *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x18);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x20);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x28) = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    IVar2 = this[0x30];
    this[0x30] = param_1[0x30];
    param_1[0x30] = IVar2;
    uVar1 = *(undefined4 *)(this + 0x34);
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x34) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x38);
    *(undefined4 *)(this + 0x38) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(param_1 + 0x38) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x3c);
    *(undefined4 *)(this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    uVar1 = *(undefined4 *)(this + 0x40);
    *(undefined4 *)(this + 0x40) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(param_1 + 0x40) = uVar1;
    uVar1 = *(undefined4 *)(this + 8);
    *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(param_1 + 8) = uVar1;
  }
  return;
}


