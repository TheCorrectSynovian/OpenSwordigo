/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004bac00
 * Function: Caver::LevelState::SaveToProtobufMessage
 * Signature: undefined __thiscall SaveToProtobufMessage(LevelState * this, LevelState * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LevelState::SaveToProtobufMessage(Caver::Proto::LevelState*) const */

void __thiscall Caver::LevelState::SaveToProtobufMessage(LevelState *this,LevelState *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  LevelState LVar3;
  undefined *puVar4;
  long *plVar5;
  uint uVar6;
  StateProperties *this_00;
  
  puVar4 = PTR__default_level_name__007e5098;
  plVar5 = *(long **)(param_1 + 0x10);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1;
  if (plVar5 == (long *)puVar4) {
    plVar5 = operator_new(8);
    *plVar5 = (long)(PTR_DAT_007e5de8 + 0x18);
    *(long **)(param_1 + 0x10) = plVar5;
  }
  FUN_0066a6a8(plVar5,this);
  uVar1 = *(uint *)(param_1 + 0x30);
  LVar3 = this[8];
  uVar6 = uVar1 | 2;
  *(uint *)(param_1 + 0x30) = uVar6;
  *(LevelState *)(param_1 + 0x18) = LVar3;
  if (*(long *)(this + 0x38) != 0) {
    this_00 = *(StateProperties **)(param_1 + 0x20);
    *(uint *)(param_1 + 0x30) = uVar1 | 6;
    if (this_00 == (StateProperties *)0x0) {
      this_00 = operator_new(0x50);
      Proto::StateProperties::StateProperties(this_00);
      *(StateProperties **)(param_1 + 0x20) = this_00;
    }
    StateProperties::SaveToProtobufMessage((StateProperties *)(this + 0x10),this_00);
    uVar6 = *(uint *)(param_1 + 0x30);
  }
  uVar2 = *(undefined4 *)(this + 0x40);
  *(uint *)(param_1 + 0x30) = uVar6 | 8;
  *(undefined4 *)(param_1 + 0x28) = uVar2;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(this + 0x44);
  *(uint *)(param_1 + 0x30) = uVar6 | 0x18;
  return;
}


