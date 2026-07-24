/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ba8ec
 * Function: Caver::Item::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(Item * this, Item * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Item::SaveToProtobufMessage(Caver::Proto::Item*) const */

void __thiscall Caver::Item::SaveToProtobufMessage(Item *this,Item *param_1)

{
  uint uVar1;
  int iVar2;
  Item IVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  uint uVar7;
  
  puVar4 = PTR__default_name__007e6888;
  plVar5 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 2;
  if (plVar5 == (long *)puVar4) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 8);
  puVar4 = PTR__default_title__007e4fd8;
  plVar5 = *(long **)(param_1 + 0x18);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 4;
  if (plVar5 == (long *)puVar4) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x18) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 0x10);
  puVar4 = PTR__default_short_description__007e6118;
  plVar5 = *(long **)(param_1 + 0x20);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 8;
  if (plVar5 == (long *)puVar4) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x20) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 0x18);
  puVar4 = PTR__default_description__007e7e10;
  plVar5 = *(long **)(param_1 + 0x28);
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) | 0x10;
  if (plVar5 == (long *)puVar4) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x28) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 0x20);
  uVar7 = *(uint *)(param_1 + 0x40);
  IVar3 = this[0x28];
  uVar6 = uVar7 | 0x20;
  *(uint *)(param_1 + 0x40) = uVar6;
  *(Item *)(param_1 + 0x30) = IVar3;
  uVar1 = *(uint *)this;
  if (uVar1 < 5) {
    uVar6 = uVar7 | 0x21;
    *(uint *)(param_1 + 0x40) = uVar6;
    *(uint *)(param_1 + 0xc) = uVar1 + 1;
  }
  uVar7 = uVar6 | 0x100;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(this + 0x2c);
  *(uint *)(param_1 + 0x40) = uVar7;
  iVar2 = *(int *)(this + 0x30);
  if (iVar2 != 0) {
    uVar7 = uVar6 | 0x140;
    *(uint *)(param_1 + 0x40) = uVar7;
    *(int *)(param_1 + 0x34) = iVar2;
  }
  iVar2 = *(int *)(this + 0x34);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x40) = uVar7 | 0x80;
    *(int *)(param_1 + 0x38) = iVar2;
  }
  return;
}


