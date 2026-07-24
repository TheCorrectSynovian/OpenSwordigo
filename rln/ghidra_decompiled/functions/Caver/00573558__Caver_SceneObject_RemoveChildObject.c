/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00573558
 * Function: Caver::SceneObject::RemoveChildObject
 * Signature: undefined __thiscall RemoveChildObject(SceneObject * this, SceneObject * param_1, bool param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::RemoveChildObject(Caver::SceneObject*, bool) */

void __thiscall
Caver::SceneObject::RemoveChildObject(SceneObject *this,SceneObject *param_1,bool param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  float fVar8;
  SceneObject *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
                    /* try { // try from 00573574 to 006735a3 has its CatchHandler @ 00573ad4 */
  local_48 = *(long *)(lVar3 + 0x28);
  lVar2 = *(long *)(this + 200) - (long)*(undefined8 **)(this + 0xc0);
  if (lVar2 != 0) {
    plVar4 = (long *)**(undefined8 **)(this + 0xc0);
    uVar7 = lVar2 >> 3;
    uVar5 = (**(code **)(*plVar4 + 0xd0))(plVar4,4,param_1);
    if ((1 < uVar7) && ((uVar5 & 1) == 0)) {
      uVar5 = 1;
      do {
                    /* try { // try from 005735c4 to 006735eb has its CatchHandler @ 00573b24 */
        plVar4 = *(long **)(*(long *)(this + 0xc0) + uVar5 * 8);
        uVar6 = (**(code **)(*plVar4 + 0xd0))(plVar4,4,param_1);
        uVar5 = uVar5 + 1;
        if (uVar7 <= uVar5) break;
      } while ((uVar6 & 1) == 0);
    }
  }
  *(undefined8 *)(param_1 + 0x30) = 0;
  SceneObjectGroup::RemoveObject(*(SceneObjectGroup **)(this + 0x38),param_1);
  if (!param_2) goto LAB_005736b0;
                    /* try { // try from 00573614 to 0067361f has its CatchHandler @ 005738f4 */
  if (ABS(*(float *)(this + 0x70) - *(float *)(param_1 + 0x70)) <= DAT_00683488) {
    fVar8 = *(float *)(this + 0x74);
                    /* try { // try from 00573640 to 00673667 has its CatchHandler @ 005737a4 */
    if (DAT_00683488 < ABS(fVar8 - *(float *)(param_1 + 0x74))) goto LAB_0057364c;
  }
  else {
    fVar8 = *(float *)(this + 0x74);
LAB_0057364c:
    *(float *)(param_1 + 0x70) = *(float *)(this + 0x70);
    *(float *)(param_1 + 0x74) = fVar8;
    if (param_1[0xb4] == (SceneObject)0x0) {
      if (*(Scene **)(param_1 + 0x20) != (Scene *)0x0) {
                    /* try { // try from 00573668 to 006737cb has its CatchHandler @ 00572e28 */
        *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        local_50 = param_1;
        Scene::RegisterObjectForWorldBoundsUpdate
                  (*(Scene **)(param_1 + 0x20),(intrusive_ptr *)&local_50);
        if ((local_50 != (SceneObject *)0x0) &&
           (iVar1 = *(int *)(local_50 + 8), *(int *)(local_50 + 8) = iVar1 + -1, iVar1 + -1 == 0)) {
          (**(code **)(*(long *)local_50 + 8))();
        }
      }
      param_1[0xb4] = (SceneObject)0x1;
    }
  }
  param_1[0xe8] = (SceneObject)0x1;
LAB_005736b0:
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


