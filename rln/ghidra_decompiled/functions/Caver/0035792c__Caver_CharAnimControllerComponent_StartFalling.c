/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035792c
 * Function: Caver::CharAnimControllerComponent::StartFalling
 * Signature: undefined __thiscall StartFalling(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::StartFalling() */

void __thiscall Caver::CharAnimControllerComponent::StartFalling(CharAnimControllerComponent *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x158) == 0) {
    return;
  }
  plVar1 = *(long **)(this + 0x128);
  if (plVar1 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x118),(Component *)this);
    plVar1 = *(long **)(this + 0x128);
    if (plVar1 == (long *)0x0) goto LAB_00357998;
  }
  lVar2 = (**(code **)(*plVar1 + 0x108))();
  if (lVar2 != 0) {
    plVar1 = *(long **)(this + 0x128);
    if (plVar1 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x118),(Component *)this);
      plVar1 = *(long **)(this + 0x128);
    }
    lVar2 = (**(code **)(*plVar1 + 0x108))();
    *(undefined4 *)(lVar2 + 0xc) = 0;
  }
LAB_00357998:
  *(undefined2 *)(*(long *)(this + 0x158) + 0x2c) = 0x100;
  if (*(long *)(this + 0x150) != 0) {
    *(undefined2 *)(*(long *)(this + 0x150) + 0x2c) = 0x100;
  }
  return;
}


