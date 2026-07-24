/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00366f14
 * Function: Caver::EntityActionComponent::InitWithComponent
 * Signature: undefined __thiscall InitWithComponent(EntityActionComponent * this, EntityActionComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::EntityActionComponent::InitWithComponent(Caver::EntityActionComponent const*) */

void __thiscall
Caver::EntityActionComponent::InitWithComponent
          (EntityActionComponent *this,EntityActionComponent *param_1)

{
  undefined8 uVar1;
  long lVar2;
  long *plVar3;
  
  *(undefined4 *)(this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  FUN_0066a6a8(this + 0x38,param_1 + 0x38);
  FUN_0066a6a8(this + 0x70,param_1 + 0x70);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x80);
  *(undefined8 *)(this + 0x78) = uVar1;
  *(long *)(this + 0x80) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3);
      uVar1 = *(undefined8 *)(param_1 + 0x88);
      lVar2 = *(long *)(param_1 + 0x90);
      goto joined_r0x00366fa0;
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  lVar2 = *(long *)(param_1 + 0x90);
joined_r0x00366fa0:
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = *(long *)(lVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x90);
  *(undefined8 *)(this + 0x88) = uVar1;
  *(long *)(this + 0x90) = lVar2;
  if ((plVar3 != (long *)0x0) && (lVar2 = plVar3[1], plVar3[1] = lVar2 + -1, lVar2 + -1 == 0)) {
    (**(code **)(*plVar3 + 0x10))(plVar3);
    lVar2 = plVar3[2];
    plVar3[2] = lVar2 + -1;
    if (lVar2 + -1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00367030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar3 + 0x18))(plVar3);
      return;
    }
  }
  return;
}


