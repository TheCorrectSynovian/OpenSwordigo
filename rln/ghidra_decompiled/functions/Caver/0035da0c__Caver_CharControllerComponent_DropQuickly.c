/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035da0c
 * Function: Caver::CharControllerComponent::DropQuickly
 * Signature: undefined __thiscall DropQuickly(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::DropQuickly() */

void __thiscall Caver::CharControllerComponent::DropQuickly(CharControllerComponent *this)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  
  if (this[0x2bd] != (CharControllerComponent)0x0) {
    SceneObject::HandleMessage(*(SceneObject **)(this + 0x298),0x11,(void *)0x0);
    SceneObject::RemoveChildObject
              (*(SceneObject **)(this + 0x28),*(SceneObject **)(this + 0x298),false);
    plVar2 = *(long **)(this + 0x298);
    *(undefined8 *)(this + 0x298) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar2 + 8))();
    }
    this[0x2bd] = (CharControllerComponent)0x0;
    *(undefined4 *)(this + 0x2d0) = 0;
  }
  lVar3 = *(long *)(this + 0x98);
  if (lVar3 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar3 = *(long *)(this + 0x98);
    if (lVar3 == 0) goto LAB_0035daa8;
  }
  *(int *)(lVar3 + 8) = *(int *)(lVar3 + 8) + 1;
LAB_0035daa8:
  plVar2 = *(long **)(this + 400);
  *(long *)(this + 400) = lVar3;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  SetInitialAnimationControllerState(this);
  return;
}


