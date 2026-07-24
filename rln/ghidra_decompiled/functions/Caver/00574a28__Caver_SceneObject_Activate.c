/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00574a28
 * Function: Caver::SceneObject::Activate
 * Signature: undefined __thiscall Activate(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::Activate() */

void __thiscall Caver::SceneObject::Activate(SceneObject *this)

{
  int iVar1;
  long lVar2;
  SceneObject *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((*(Scene **)(this + 0x20) != (Scene *)0x0) && (this[0xf0] == (SceneObject)0x0)) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    local_30 = this;
    Scene::RegisterObjectWaitingForActivation(*(Scene **)(this + 0x20),(intrusive_ptr *)&local_30);
    if ((local_30 != (SceneObject *)0x0) &&
       (iVar1 = *(int *)(local_30 + 8), *(int *)(local_30 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*(long *)local_30 + 8))();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


