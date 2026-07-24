/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056f1e4
 * Function: Caver::SceneObject::RemoveFromAllGroups
 * Signature: undefined __thiscall RemoveFromAllGroups(SceneObject * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::RemoveFromAllGroups(bool) */

void __thiscall Caver::SceneObject::RemoveFromAllGroups(SceneObject *this,bool param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  SceneObjectGroup *this_00;
  int *piVar9;
  long lVar10;
  SceneObject *pSVar11;
  ulong uVar12;
  float fVar13;
  SceneObject *local_70;
  long local_68;
  
                    /* try { // try from 0056f208 to 0066f20b has its CatchHandler @ 0056f320 */
  lVar4 = tpidr_el0;
                    /* try { // try from 0056f20c to 0066f2a3 has its CatchHandler @ 0056f1d0 */
  local_68 = *(long *)(lVar4 + 0x28);
  lVar10 = *(long *)(this + 0x30);
  if (lVar10 != 0) {
    lVar3 = *(long *)(lVar10 + 200) - (long)*(undefined8 **)(lVar10 + 0xc0);
    if (lVar3 != 0) {
      plVar6 = (long *)**(undefined8 **)(lVar10 + 0xc0);
      uVar12 = lVar3 >> 3;
      uVar7 = (**(code **)(*plVar6 + 0xd0))(plVar6,4,this);
      if ((1 < uVar12) && ((uVar7 & 1) == 0)) {
        uVar7 = 1;
        do {
          plVar6 = *(long **)(*(long *)(lVar10 + 0xc0) + uVar7 * 8);
          uVar8 = (**(code **)(*plVar6 + 0xd0))(plVar6,4,this);
          uVar7 = uVar7 + 1;
          if (uVar12 <= uVar7) break;
        } while ((uVar8 & 1) == 0);
      }
    }
    *(undefined8 *)(this + 0x30) = 0;
    SceneObjectGroup::RemoveObject(*(SceneObjectGroup **)(lVar10 + 0x38),this);
  }
  fVar5 = DAT_00683488;
  this_00 = *(SceneObjectGroup **)(this + 0x38);
  if (this_00 != (SceneObjectGroup *)0x0) {
    lVar10 = (long)*(int *)(this_00 + 0x38);
                    /* try { // try from 0056f2a4 to 0066f2af has its CatchHandler @ 0056f334 */
    if (*(int *)(this_00 + 0x38) < 1) {
      *(undefined8 *)(this + 0x38) = 0;
    }
    else {
      do {
        pSVar11 = *(SceneObject **)(*(long *)(this_00 + 0x40) + (lVar10 + -1) * 8);
        if (pSVar11 != this) {
          lVar3 = *(long *)(this + 200) - (long)*(undefined8 **)(this + 0xc0);
          if (lVar3 != 0) {
            plVar6 = (long *)**(undefined8 **)(this + 0xc0);
            uVar12 = lVar3 >> 3;
            uVar7 = (**(code **)(*plVar6 + 0xd0))(plVar6,4,pSVar11);
            if ((1 < uVar12) && ((uVar7 & 1) == 0)) {
              uVar7 = 1;
              do {
                plVar6 = *(long **)(*(long *)(this + 0xc0) + uVar7 * 8);
                uVar8 = (**(code **)(*plVar6 + 0xd0))(plVar6,4,pSVar11);
                    /* catch() { ... } // from try @ 0056f208 with catch @ 0056f320 */
                uVar7 = uVar7 + 1;
                if (uVar12 <= uVar7) break;
              } while ((uVar8 & 1) == 0);
            }
            this_00 = *(SceneObjectGroup **)(this + 0x38);
          }
                    /* catch() { ... } // from try @ 0056f2a4 with catch @ 0056f334 */
          *(undefined8 *)(pSVar11 + 0x30) = 0;
          SceneObjectGroup::RemoveObject(this_00,pSVar11);
          if (param_1) {
                    /* try { // try from 0056f358 to 0066f37f has its CatchHandler @ 0056f388 */
            if (ABS(*(float *)(this + 0x70) - *(float *)(pSVar11 + 0x70)) <= fVar5) {
              fVar13 = *(float *)(this + 0x74);
                    /* try { // try from 0056f380 to 0066f38b has its CatchHandler @ 0056f1d0 */
              if (fVar5 < ABS(fVar13 - *(float *)(pSVar11 + 0x74))) goto LAB_0056f388;
            }
            else {
              fVar13 = *(float *)(this + 0x74);
LAB_0056f388:
                    /* catch() { ... } // from try @ 0056f358 with catch @ 0056f388 */
              *(float *)(pSVar11 + 0x70) = *(float *)(this + 0x70);
              *(float *)(pSVar11 + 0x74) = fVar13;
                    /* try { // try from 0056f394 to 0066f3bf has its CatchHandler @ 0056f394
                       catch() { ... } // from try @ 0056f394 with catch @ 0056f394
                       catch() { ... } // from try @ 0056f3e0 with catch @ 0056f394
                       catch() { ... } // from try @ 0056f408 with catch @ 0056f394
                       catch() { ... } // from try @ 0056f488 with catch @ 0056f394
                       catch() { ... } // from try @ 0056f5e0 with catch @ 0056f394 */
              if (pSVar11[0xb4] == (SceneObject)0x0) {
                if (*(Scene **)(pSVar11 + 0x20) != (Scene *)0x0) {
                  *(int *)(pSVar11 + 8) = *(int *)(pSVar11 + 8) + 1;
                  local_70 = pSVar11;
                  Scene::RegisterObjectForWorldBoundsUpdate
                            (*(Scene **)(pSVar11 + 0x20),(intrusive_ptr *)&local_70);
                    /* try { // try from 0056f3c0 to 0066f3d3 has its CatchHandler @ 0056f670 */
                  if ((local_70 != (SceneObject *)0x0) &&
                     (iVar2 = *(int *)(local_70 + 8), *(int *)(local_70 + 8) = iVar2 + -1,
                     iVar2 + -1 == 0)) {
                    /* try { // try from 0056f3d8 to 0066f3df has its CatchHandler @ 0056f5fc */
                    (**(code **)(*(long *)local_70 + 8))();
                  }
                }
                pSVar11[0xb4] = (SceneObject)0x1;
              }
            }
                    /* try { // try from 0056f3e0 to 0066f403 has its CatchHandler @ 0056f394 */
            pSVar11[0xe8] = (SceneObject)0x1;
          }
        }
        this_00 = *(SceneObjectGroup **)(this + 0x38);
        bVar1 = 1 < lVar10;
        lVar10 = lVar10 + -1;
      } while (bVar1);
      *(undefined8 *)(this + 0x38) = 0;
      if (this_00 == (SceneObjectGroup *)0x0) goto LAB_0056f420;
    }
                    /* try { // try from 0056f404 to 0066f407 has its CatchHandler @ 0056f5e8 */
    iVar2 = *(int *)(this_00 + 8);
                    /* try { // try from 0056f408 to 0066f433 has its CatchHandler @ 0056f394 */
    *(int *)(this_00 + 8) = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      (**(code **)(*(long *)this_00 + 8))();
    }
  }
LAB_0056f420:
  piVar9 = *(int **)(this + 0x28);
  if (piVar9 != (int *)0x0) {
    iVar2 = *piVar9;
    lVar10 = (long)iVar2;
                    /* try { // try from 0056f434 to 0066f43f has its CatchHandler @ 0056f54c */
    if ((0 < iVar2) &&
       (SceneObjectGroup::RemoveObject
                  (*(SceneObjectGroup **)(*(long *)(piVar9 + 2) + lVar10 * 8 + -8),this), iVar2 != 1
       )) {
      do {
                    /* try { // try from 0056f460 to 0066f487 has its CatchHandler @ 0056f53c */
        SceneObjectGroup::RemoveObject
                  (*(SceneObjectGroup **)
                    (*(long *)(*(long *)(this + 0x28) + 8) + lVar10 * 8 + -0x10),this);
        lVar10 = lVar10 + -1;
      } while (1 < lVar10);
    }
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
                    /* try { // try from 0056f488 to 0066f56f has its CatchHandler @ 0056f394 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


