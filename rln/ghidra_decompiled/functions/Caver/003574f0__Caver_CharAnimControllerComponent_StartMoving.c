/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003574f0
 * Function: Caver::CharAnimControllerComponent::StartMoving
 * Signature: undefined __thiscall StartMoving(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::StartMoving() */

void __thiscall Caver::CharAnimControllerComponent::StartMoving(CharAnimControllerComponent *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 0x148) == 0) {
    return;
  }
  plVar1 = *(long **)(this + 0xe0);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar1 = *(long **)(this + 0xe0);
    if (plVar1 == (long *)0x0) goto LAB_003575ac;
  }
  lVar2 = (**(code **)(*plVar1 + 0x108))();
  if (lVar2 == 0) goto LAB_003575ac;
  plVar1 = *(long **)(this + 0xe0);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar1 = *(long **)(this + 0xe0);
    if (plVar1 != (long *)0x0) goto LAB_00357558;
    lVar2 = 0;
LAB_0035757c:
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar1 = *(long **)(this + 0xe0);
  }
  else {
LAB_00357558:
    lVar2 = (**(code **)(*plVar1 + 0x108))();
    plVar1 = *(long **)(this + 0xe0);
    if (plVar1 == (long *)0x0) goto LAB_0035757c;
  }
  lVar3 = (**(code **)(*plVar1 + 0x108))(plVar1);
  *(float *)(lVar2 + 0xc) = *(float *)(lVar3 + 0x28) * 0.25;
LAB_003575ac:
  *(undefined2 *)(*(long *)(this + 0x148) + 0x2c) = 0x100;
  return;
}


