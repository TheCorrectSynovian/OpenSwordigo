/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035dae0
 * Function: Caver::CharControllerComponent::DropWithoutAnimation
 * Signature: undefined __thiscall DropWithoutAnimation(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::DropWithoutAnimation() */

void __thiscall Caver::CharControllerComponent::DropWithoutAnimation(CharControllerComponent *this)

{
  int iVar1;
  long *plVar2;
  
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
  return;
}


