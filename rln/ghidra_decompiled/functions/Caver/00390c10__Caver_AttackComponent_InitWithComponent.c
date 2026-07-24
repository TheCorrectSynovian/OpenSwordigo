/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00390c10
 * Function: Caver::AttackComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(AttackComponent * this, AttackComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::AttackComponent::InitWithComponent(Caver::AttackComponent const*) */

void __thiscall
Caver::AttackComponent::InitWithComponent(AttackComponent *this,AttackComponent *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  FUN_0066a6a8(this + 0xd0,param_1 + 0xd0);
  uVar3 = *(undefined8 *)(param_1 + 0xd8);
  lVar1 = *(long *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  plVar2 = *(long **)(this + 0xe0);
  *(undefined8 *)(this + 0xd8) = uVar3;
  *(long *)(this + 0xe0) = lVar1;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
      uVar3 = *(undefined8 *)(param_1 + 0xe8);
      lVar1 = *(long *)(param_1 + 0xf0);
      goto joined_r0x00390cbc;
    }
  }
  uVar3 = *(undefined8 *)(param_1 + 0xe8);
  lVar1 = *(long *)(param_1 + 0xf0);
joined_r0x00390cbc:
  if (lVar1 != 0) {
    *(long *)(lVar1 + 8) = *(long *)(lVar1 + 8) + 1;
  }
  plVar2 = *(long **)(this + 0xf0);
  *(undefined8 *)(this + 0xe8) = uVar3;
  *(long *)(this + 0xf0) = lVar1;
  if ((plVar2 != (long *)0x0) && (lVar1 = plVar2[1], plVar2[1] = lVar1 + -1, lVar1 + -1 == 0)) {
    (**(code **)(*plVar2 + 0x10))(plVar2);
    lVar1 = plVar2[2];
    plVar2[2] = lVar1 + -1;
    if (lVar1 + -1 == 0) {
      (**(code **)(*plVar2 + 0x18))(plVar2);
    }
  }
  *(undefined8 *)(this + 0x104) = *(undefined8 *)(param_1 + 0x104);
  uVar3 = *(undefined8 *)(param_1 + 0x114);
  *(undefined8 *)(this + 0x11c) = *(undefined8 *)(param_1 + 0x11c);
  *(undefined8 *)(this + 0x114) = uVar3;
  *(undefined8 *)(this + 0x128) = *(undefined8 *)(param_1 + 0x128);
  return;
}


