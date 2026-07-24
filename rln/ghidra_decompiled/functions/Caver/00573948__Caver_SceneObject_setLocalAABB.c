/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573948
 * Function: Caver::SceneObject::setLocalAABB
 * Signature: undefined __thiscall setLocalAABB(SceneObject * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::setLocalAABB(Caver::Rectangle const&) */

void __thiscall Caver::SceneObject::setLocalAABB(SceneObject *this,Rectangle *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  SceneObject *local_30;
  long local_28;
  
                    /* catch() { ... } // from try @ 005733d8 with catch @ 00573948 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 00573164 with catch @ 00573998 */
                    /* catch() { ... } // from try @ 00573110 with catch @ 0057399c */
  if ((((DAT_00683488 < ABS(*(float *)param_1 - *(float *)(this + 0x94))) ||
       (DAT_00683488 < ABS(*(float *)(param_1 + 4) - *(float *)(this + 0x98)))) ||
      (DAT_00683488 < ABS(*(float *)(param_1 + 8) - *(float *)(this + 0x9c)))) ||
     (DAT_00683488 < ABS(*(float *)(param_1 + 0xc) - *(float *)(this + 0xa0)))) {
    uVar3 = *(undefined8 *)param_1;
    *(undefined8 *)(this + 0x9c) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x94) = uVar3;
    if (this[0xb4] == (SceneObject)0x0) {
      if (*(Scene **)(this + 0x20) != (Scene *)0x0) {
                    /* catch() { ... } // from try @ 00572ffc with catch @ 005739ec */
                    /* catch() { ... } // from try @ 00572fa8 with catch @ 005739f0 */
        *(int *)(this + 8) = *(int *)(this + 8) + 1;
        local_30 = this;
        Scene::RegisterObjectForWorldBoundsUpdate
                  (*(Scene **)(this + 0x20),(intrusive_ptr *)&local_30);
        if ((local_30 != (SceneObject *)0x0) &&
           (iVar1 = *(int *)(local_30 + 8), *(int *)(local_30 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
          (**(code **)(*(long *)local_30 + 8))();
        }
      }
      this[0xb4] = (SceneObject)0x1;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
                    /* catch() { ... } // from try @ 00572f10 with catch @ 00573a40 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


