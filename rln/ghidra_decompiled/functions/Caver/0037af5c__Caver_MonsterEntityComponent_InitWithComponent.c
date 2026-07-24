/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0037af5c
 * Function: Caver::MonsterEntityComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(MonsterEntityComponent * this, MonsterEntityComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterEntityComponent::InitWithComponent(Caver::MonsterEntityComponent const*) */

void __thiscall
Caver::MonsterEntityComponent::InitWithComponent
          (MonsterEntityComponent *this,MonsterEntityComponent *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  EntityComponent::InitWithComponent((EntityComponent *)this,(EntityComponent *)param_1);
  FUN_0066a6a8(this + 0x130,param_1 + 0x130);
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  lVar2 = *(long *)(param_1 + 0x140);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x140);
  *(undefined8 *)(this + 0x138) = uVar1;
  *(long *)(this + 0x140) = lVar2;
  if ((plVar3 == (long *)0x0) || (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 != 0)) {
LAB_0037afd4:
    uVar1 = *(undefined8 *)(param_1 + 0x148);
    lVar2 = *(long *)(param_1 + 0x150);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 != 0) goto LAB_0037afd4;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    uVar1 = *(undefined8 *)(param_1 + 0x148);
    lVar2 = *(long *)(param_1 + 0x150);
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x150);
  *(undefined8 *)(this + 0x148) = uVar1;
  *(long *)(this + 0x150) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  FUN_0066a6a8(this + 0x158,param_1 + 0x158);
  uVar1 = *(undefined8 *)(param_1 + 0x160);
  lVar2 = *(long *)(param_1 + 0x168);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x168);
  *(undefined8 *)(this + 0x160) = uVar1;
  *(long *)(this + 0x168) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      uVar1 = *(undefined8 *)(param_1 + 0x170);
      lVar2 = *(long *)(param_1 + 0x178);
      goto joined_r0x0037b094;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x170);
  lVar2 = *(long *)(param_1 + 0x178);
joined_r0x0037b094:
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x178);
  *(undefined8 *)(this + 0x170) = uVar1;
  *(long *)(this + 0x178) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  this[0x198] = param_1[0x198];
  this[0x19a] = param_1[0x19a];
  return;
}


