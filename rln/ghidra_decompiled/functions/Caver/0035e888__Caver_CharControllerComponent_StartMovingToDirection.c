/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035e888
 * Function: Caver::CharControllerComponent::StartMovingToDirection
 * Signature: undefined __thiscall StartMovingToDirection(CharControllerComponent * this, int param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharControllerComponent::StartMovingToDirection(int) */

void __thiscall
Caver::CharControllerComponent::StartMovingToDirection(CharControllerComponent *this,int param_1)

{
  int iVar1;
  CharAnimControllerComponent *this_00;
  long lVar2;
  long *plVar3;
  
  if ((((*(int *)(this + 0x238) == param_1) && (*(float *)(this + 0x23c) < DAT_00683f68)) &&
      (*(float *)(this + 0x240) < DAT_00684318)) && (*(int *)(this + 0x2d0) == 0)) {
    lVar2 = *(long *)(this + 0x80);
    if (lVar2 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar2 = *(long *)(this + 0x80);
    }
    if (((*(float *)(lVar2 + 0x80) < _DAT_00684434) && (0.0 < *(float *)(lVar2 + 0x8c))) &&
       (*(char *)(lVar2 + 0x90) == '\0')) {
      this[0x244] = (CharControllerComponent)0x1;
    }
  }
  this_00 = *(CharAnimControllerComponent **)(this + 400);
  *(int *)(this + 0x230) = param_1;
  if (this_00 == (CharAnimControllerComponent *)0x0) {
    this_00 = *(CharAnimControllerComponent **)(this + 0x98);
    if (this_00 == (CharAnimControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      this_00 = *(CharAnimControllerComponent **)(this + 0x98);
      if (this_00 != (CharAnimControllerComponent *)0x0) goto LAB_0035e948;
    }
    else {
LAB_0035e948:
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    plVar3 = *(long **)(this + 400);
    *(CharAnimControllerComponent **)(this + 400) = this_00;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))(plVar3);
      this_00 = *(CharAnimControllerComponent **)(this + 400);
    }
    if (this_00 == (CharAnimControllerComponent *)0x0) goto LAB_0035e98c;
  }
  CharAnimControllerComponent::StartMoving(this_00);
LAB_0035e98c:
  this[0x234] = (CharControllerComponent)0x1;
  *(undefined4 *)(this + 0x23c) = 0;
  *(undefined4 *)(this + 0x238) = *(undefined4 *)(this + 0x230);
  return;
}


