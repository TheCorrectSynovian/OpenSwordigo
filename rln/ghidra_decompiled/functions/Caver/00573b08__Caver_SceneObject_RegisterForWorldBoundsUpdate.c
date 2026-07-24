/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573b08
 * Function: Caver::SceneObject::RegisterForWorldBoundsUpdate
 * Signature: undefined __thiscall RegisterForWorldBoundsUpdate(SceneObject * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::RegisterForWorldBoundsUpdate() */

void __thiscall Caver::SceneObject::RegisterForWorldBoundsUpdate(SceneObject *this)

{
  int iVar1;
  long lVar2;
  SceneObject *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 0057351c with catch @ 00573b24
                       catch() { ... } // from try @ 005735c4 with catch @ 00573b24 */
                    /* catch() { ... } // from try @ 0057344c with catch @ 00573b28
                       catch() { ... } // from try @ 005734e0 with catch @ 00573b28 */
  if (*(Scene **)(this + 0x20) != (Scene *)0x0) {
    *(int *)(this + 8) = *(int *)(this + 8) + 1;
    local_30 = this;
    Scene::RegisterObjectForWorldBoundsUpdate(*(Scene **)(this + 0x20),(intrusive_ptr *)&local_30);
    if ((local_30 != (SceneObject *)0x0) &&
       (iVar1 = *(int *)(local_30 + 8), *(int *)(local_30 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
                    /* catch() { ... } // from try @ 00573184 with catch @ 00573b60
                       catch() { ... } // from try @ 00573218 with catch @ 00573b60 */
      (**(code **)(*(long *)local_30 + 8))();
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


