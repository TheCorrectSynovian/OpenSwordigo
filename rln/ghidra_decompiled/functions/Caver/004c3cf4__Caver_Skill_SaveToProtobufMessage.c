/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004c3cf4
 * Function: Caver::Skill::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(Skill * this, Skill * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Skill::SaveToProtobufMessage(Caver::Proto::Skill*) const */

void __thiscall Caver::Skill::SaveToProtobufMessage(Skill *this,Skill *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  
  puVar4 = PTR__default_name__007e6d10;
  plVar5 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 1;
  if (plVar5 == (long *)puVar4) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar5;
  }
  FUN_0066a6a8(plVar5,this);
  puVar4 = PTR__default_title__007e7328;
  plVar5 = *(long **)(param_1 + 0x18);
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 2;
  if (plVar5 == (long *)puVar4) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x18) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 8);
  puVar4 = PTR__default_description__007e7dc0;
  plVar5 = *(long **)(param_1 + 0x20);
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 4;
  if (plVar5 == (long *)puVar4) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x20) = plVar5;
  }
  FUN_0066a6a8(plVar5,this + 0x10);
  uVar1 = *(uint *)(param_1 + 0x34);
  uVar2 = *(undefined4 *)(this + 0x18);
  uVar6 = uVar1 | 8;
  *(uint *)(param_1 + 0x34) = uVar6;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  iVar3 = *(int *)(this + 0x1c);
  if (iVar3 != 0) {
    uVar6 = uVar1 | 0x18;
    *(uint *)(param_1 + 0x34) = uVar6;
    *(int *)(param_1 + 0x2c) = iVar3;
  }
  if (*(int *)(this + 0x20) != 0) {
    *(int *)(param_1 + 0x30) = *(int *)(this + 0x20);
    *(uint *)(param_1 + 0x34) = uVar6 | 0x20;
  }
  return;
}


