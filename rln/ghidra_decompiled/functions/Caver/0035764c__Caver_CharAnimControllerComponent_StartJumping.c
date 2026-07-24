/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035764c
 * Function: Caver::CharAnimControllerComponent::StartJumping
 * Signature: undefined __thiscall StartJumping(CharAnimControllerComponent * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::StartJumping(bool) */

void __thiscall
Caver::CharAnimControllerComponent::StartJumping(CharAnimControllerComponent *this,bool param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  
  if (*(long *)(this + 0x158) == 0) {
    return;
  }
  if (param_1) {
    plVar3 = *(long **)(this + 0x110);
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this);
      plVar3 = *(long **)(this + 0x110);
      if (plVar3 == (long *)0x0) goto LAB_0035782c;
    }
    lVar4 = (**(code **)(*plVar3 + 0x108))();
    if (lVar4 == 0) goto LAB_0035782c;
    plVar3 = *(long **)(this + 0x110);
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this);
      plVar3 = *(long **)(this + 0x110);
    }
    lVar4 = (**(code **)(*plVar3 + 0x108))();
    *(undefined4 *)(lVar4 + 0xc) = 0;
    plVar3 = *(long **)(this + 0x110);
    lVar4 = *(long *)(this + 0x150);
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this);
      plVar3 = *(long **)(this + 0x110);
      if (plVar3 != (long *)0x0) goto LAB_003576e0;
      plVar3 = (long *)0x0;
LAB_003577a8:
      bVar2 = true;
    }
    else {
LAB_003576e0:
      plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
      if (plVar3 == (long *)0x0) goto LAB_003577a8;
      bVar2 = false;
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 2;
    }
    plVar5 = *(long **)(lVar4 + 0x10);
    *(long **)(lVar4 + 0x10) = plVar3;
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  else {
    plVar3 = *(long **)(this + 0xf8);
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
      plVar3 = *(long **)(this + 0xf8);
      if (plVar3 == (long *)0x0) goto LAB_0035782c;
    }
    lVar4 = (**(code **)(*plVar3 + 0x108))();
    if (lVar4 == 0) goto LAB_0035782c;
    plVar3 = *(long **)(this + 0xf8);
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
      plVar3 = *(long **)(this + 0xf8);
    }
    lVar4 = (**(code **)(*plVar3 + 0x108))();
    *(undefined4 *)(lVar4 + 0xc) = 0;
    plVar3 = *(long **)(this + 0xf8);
    lVar4 = *(long *)(this + 0x150);
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
      plVar3 = *(long **)(this + 0xf8);
      if (plVar3 != (long *)0x0) goto LAB_0035777c;
      plVar3 = (long *)0x0;
LAB_003577dc:
      bVar2 = true;
    }
    else {
LAB_0035777c:
      plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
      if (plVar3 == (long *)0x0) goto LAB_003577dc;
      bVar2 = false;
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 2;
    }
    plVar5 = *(long **)(lVar4 + 0x10);
    *(long **)(lVar4 + 0x10) = plVar3;
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
  }
  if ((!bVar2) && (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))(plVar3);
  }
LAB_0035782c:
  *(undefined2 *)(*(long *)(this + 0x158) + 0x2c) = 0x100;
  lVar4 = *(long *)(this + 0x150);
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x20) = 0;
    *(undefined2 *)(lVar4 + 0x2c) = 0x101;
  }
  return;
}


