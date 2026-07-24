/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056f8fc
 * Function: Caver::SceneObject::SetInstanceScaling
 * Signature: undefined __thiscall SetInstanceScaling(SceneObject * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::SetInstanceScaling(float) */

void __thiscall Caver::SceneObject::SetInstanceScaling(SceneObject *this,float param_1)

{
  int iVar1;
  long lVar2;
  SceneObject *local_30;
  long local_28;
  
                    /* try { // try from 0056f900 to 0066f90b has its CatchHandler @ 0056f9d4 */
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  *(float *)(this + 0x88) = param_1;
  if (*(long *)(this + 0x48) != 0) {
                    /* try { // try from 0056f92c to 0066f953 has its CatchHandler @ 0056f9c4 */
    param_1 = *(float *)(*(long *)(this + 0x48) + 0x130) * param_1;
  }
                    /* try { // try from 0056f954 to 0066f9f7 has its CatchHandler @ 0056f8a0 */
  if ((DAT_00683488 < ABS(param_1 - *(float *)(this + 0x8c))) &&
     (*(float *)(this + 0x8c) = param_1, this[0xb4] == (SceneObject)0x0)) {
    if (*(Scene **)(this + 0x20) != (Scene *)0x0) {
      *(int *)(this + 8) = *(int *)(this + 8) + 1;
      local_30 = this;
      Scene::RegisterObjectForWorldBoundsUpdate(*(Scene **)(this + 0x20),(intrusive_ptr *)&local_30)
      ;
      if ((local_30 != (SceneObject *)0x0) &&
         (iVar1 = *(int *)(local_30 + 8), *(int *)(local_30 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
        (**(code **)(*(long *)local_30 + 8))();
      }
    }
    this[0xb4] = (SceneObject)0x1;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 0056f92c with catch @ 0056f9c4 */
  __stack_chk_fail();
}


