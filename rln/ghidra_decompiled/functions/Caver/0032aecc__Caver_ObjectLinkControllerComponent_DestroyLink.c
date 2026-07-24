/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0032aecc
 * Function: Caver::ObjectLinkControllerComponent::DestroyLink
 * Signature: undefined __thiscall DestroyLink(ObjectLinkControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ObjectLinkControllerComponent::DestroyLink() */

void __thiscall
Caver::ObjectLinkControllerComponent::DestroyLink(ObjectLinkControllerComponent *this)

{
  int iVar1;
  long *plVar2;
  SceneObject *this_00;
  
  plVar2 = *(long **)(this + 0x120);
  *(undefined8 *)(this + 0x120) = 0;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0x88);
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  if ((plVar2 != (long *)0x0) &&
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar2 + 8))();
  }
  plVar2 = *(long **)(this + 0xa0);
  *(undefined8 *)(this + 0xa0) = 0;
  if ((plVar2 == (long *)0x0) ||
     (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 != 0)) {
    this_00 = *(SceneObject **)(this + 0x78);
  }
  else {
    (**(code **)(*plVar2 + 8))();
    this_00 = *(SceneObject **)(this + 0x78);
  }
  if ((this_00 != (SceneObject *)0x0) &&
     (*(SceneObject **)(*(SceneObject **)(this + 0x28) + 0x30) == this_00)) {
    SceneObject::RemoveChildObject(this_00,*(SceneObject **)(this + 0x28),true);
    plVar2 = *(long **)(this + 0x78);
    *(undefined8 *)(this + 0x78) = 0;
    if ((plVar2 != (long *)0x0) &&
       (iVar1 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar1, iVar1 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x0032afbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 8))();
      return;
    }
  }
  return;
}


