/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b51e8
 * Function: Caver::PressureTriggerComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(PressureTriggerComponent * this, PressureTriggerComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::PressureTriggerComponent::InitWithComponent(Caver::PressureTriggerComponent const*) */

void __thiscall
Caver::PressureTriggerComponent::InitWithComponent
          (PressureTriggerComponent *this,PressureTriggerComponent *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  *(undefined4 *)(this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  this[0xd8] = param_1[0xd8];
  FUN_0066a6a8(this + 0x88,param_1 + 0x88);
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  lVar2 = *(long *)(param_1 + 0x98);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x98);
  *(undefined8 *)(this + 0x90) = uVar1;
  *(long *)(this + 0x98) = lVar2;
  if ((plVar3 == (long *)0x0) || (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 != 0)) {
LAB_003b5280:
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    lVar2 = *(long *)(param_1 + 0xa8);
  }
  else {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 != 0) goto LAB_003b5280;
    (**(code **)(*plVar3 + 0x18))(plVar3);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    lVar2 = *(long *)(param_1 + 0xa8);
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0xa8);
  *(undefined8 *)(this + 0xa0) = uVar1;
  *(long *)(this + 0xa8) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
    }
  }
  FUN_0066a6a8(this + 0xb0,param_1 + 0xb0);
  uVar1 = *(undefined8 *)(param_1 + 0xb8);
  lVar2 = *(long *)(param_1 + 0xc0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0xc0);
  *(undefined8 *)(this + 0xb8) = uVar1;
  *(long *)(this + 0xc0) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      uVar1 = *(undefined8 *)(param_1 + 200);
      lVar2 = *(long *)(param_1 + 0xd0);
      goto joined_r0x003b5340;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 200);
  lVar2 = *(long *)(param_1 + 0xd0);
joined_r0x003b5340:
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0xd0);
  *(undefined8 *)(this + 200) = uVar1;
  *(long *)(this + 0xd0) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x003b53ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}


