/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0031e83c
 * Function: Caver::BlendAnimationComponent::setAnimation1
 * Signature: undefined __thiscall setAnimation1(BlendAnimationComponent * this, AnimationComponent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::BlendAnimationComponent::setAnimation1(Caver::AnimationComponent*) */

void __thiscall
Caver::BlendAnimationComponent::setAnimation1
          (BlendAnimationComponent *this,AnimationComponent *param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  
  if (param_1 == (AnimationComponent *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined4 *)(param_1 + 0x20);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  }
  plVar2 = *(long **)(this + 0x88);
  *(undefined4 *)(this + 0x80) = uVar4;
  *(AnimationComponent **)(this + 0x88) = param_1;
  if ((plVar2 == (long *)0x0) ||
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 != 0)) {
    lVar5 = *(long *)(this + 0x78);
  }
  else {
    (**(code **)(*plVar2 + 8))();
    lVar5 = *(long *)(this + 0x78);
  }
  if (param_1 == (AnimationComponent *)0x0) {
    plVar2 = *(long **)(lVar5 + 0x10);
    *(undefined8 *)(lVar5 + 0x10) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
  }
  else {
    plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x108))(param_1);
    if (plVar2 != (long *)0x0) {
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 2;
    }
    plVar3 = *(long **)(lVar5 + 0x10);
    *(long **)(lVar5 + 0x10) = plVar2;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0031e908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))(plVar2);
      return;
    }
  }
  return;
}


