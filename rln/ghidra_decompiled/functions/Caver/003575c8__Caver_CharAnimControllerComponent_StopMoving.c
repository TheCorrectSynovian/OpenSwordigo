/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003575c8
 * Function: Caver::CharAnimControllerComponent::StopMoving
 * Signature: undefined __thiscall StopMoving(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::StopMoving() */

void __thiscall Caver::CharAnimControllerComponent::StopMoving(CharAnimControllerComponent *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x148) == 0) {
    return;
  }
  plVar1 = *(long **)(this + 200);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xb8),(Component *)this);
    plVar1 = *(long **)(this + 200);
    if (plVar1 == (long *)0x0) goto LAB_00357634;
  }
  lVar2 = (**(code **)(*plVar1 + 0x108))();
  if (lVar2 != 0) {
    plVar1 = *(long **)(this + 200);
    if (plVar1 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xb8),(Component *)this);
      plVar1 = *(long **)(this + 200);
    }
    lVar2 = (**(code **)(*plVar1 + 0x108))();
    *(undefined4 *)(lVar2 + 0xc) = 0;
  }
LAB_00357634:
  *(undefined2 *)(*(long *)(this + 0x148) + 0x2c) = 0x101;
  return;
}


