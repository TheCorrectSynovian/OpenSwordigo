/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056f51c
 * Function: Caver::SceneObject::InitWithTemplate
 * Signature: undefined __thiscall InitWithTemplate(SceneObject * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneObject::InitWithTemplate(boost::intrusive_ptr<Caver::ObjectTemplate> const&) */

void __thiscall Caver::SceneObject::InitWithTemplate(SceneObject *this,intrusive_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  code *pcVar10;
  long *plVar11;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
                    /* catch() { ... } // from try @ 0056f460 with catch @ 0056f53c */
  lVar8 = *(long *)param_1;
  if (lVar8 != 0) {
                    /* catch() { ... } // from try @ 0056f434 with catch @ 0056f54c */
    *(int *)(lVar8 + 8) = *(int *)(lVar8 + 8) + 1;
  }
  plVar5 = *(long **)(this + 0x48);
  *(long *)(this + 0x48) = lVar8;
                    /* try { // try from 0056f570 to 0066f5df has its CatchHandler @ 0056f5e4 */
  if ((plVar5 != (long *)0x0) &&
     (iVar7 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar7, iVar7 == 0)) {
    (**(code **)(*plVar5 + 8))();
    lVar8 = *(long *)(this + 0x48);
  }
  plVar5 = *(long **)(lVar8 + 0xc0);
  plVar1 = *(long **)(lVar8 + 200);
  if (plVar5 != plVar1) {
    bVar3 = false;
    do {
      plVar6 = (long *)*plVar5;
      if (*(int *)((long)plVar6 + 0x24) == 0) {
        if (*(long **)(this + 0xc0) != *(long **)(this + 200)) {
          plVar11 = *(long **)(this + 0xc0);
          do {
            plVar9 = plVar11 + 1;
            if (*(int *)(*plVar11 + 0x20) == (int)plVar6[4]) {
              if (*plVar11 != 0) goto LAB_0056f63c;
              break;
            }
            plVar11 = plVar9;
          } while (*(long **)(this + 200) != plVar9);
        }
        local_50 = (long *)(**(code **)(*plVar6 + 0x10))();
        *(undefined1 *)(local_50 + 6) = 1;
                    /* try { // try from 0056f5e0 to 0066f673 has its CatchHandler @ 0056f394 */
        pcVar10 = *(code **)(*(long *)this + 0x48);
                    /* catch() { ... } // from try @ 0056f570 with catch @ 0056f5e4 */
                    /* catch() { ... } // from try @ 0056f404 with catch @ 0056f5e8 */
        if (local_50 != (long *)0x0) {
          *(int *)(local_50 + 1) = (int)local_50[1] + 1;
        }
                    /* catch() { ... } // from try @ 0056f3d8 with catch @ 0056f5fc */
        (*pcVar10)(this,&local_50);
        if ((local_50 != (long *)0x0) &&
           (iVar7 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar7, iVar7 == 0)) {
          (**(code **)(*local_50 + 8))();
        }
      }
      else {
        bVar3 = true;
      }
LAB_0056f63c:
      plVar5 = plVar5 + 1;
    } while (plVar5 != plVar1);
    if (bVar3) {
      plVar1 = *(long **)(*(long *)(this + 0x48) + 200);
      for (plVar5 = *(long **)(*(long *)(this + 0x48) + 0xc0); plVar5 != plVar1; plVar5 = plVar5 + 1
          ) {
        plVar6 = (long *)*plVar5;
        iVar7 = *(int *)((long)plVar6 + 0x24);
        if (iVar7 != 0) {
          puVar4 = *(undefined8 **)(this + 0xc0);
                    /* catch() { ... } // from try @ 0056f3c0 with catch @ 0056f670 */
          do {
            if (puVar4 == *(undefined8 **)(this + 200)) goto LAB_0056f728;
            plVar11 = (long *)*puVar4;
                    /* try { // try from 0056f67c to 0066f6b7 has its CatchHandler @ 0056f67c
                       catch() { ... } // from try @ 0056f67c with catch @ 0056f67c
                       catch() { ... } // from try @ 0056f6c0 with catch @ 0056f67c
                       catch() { ... } // from try @ 0056f764 with catch @ 0056f67c
                       catch() { ... } // from try @ 0056f878 with catch @ 0056f67c */
            puVar4 = puVar4 + 1;
          } while ((int)plVar11[4] != iVar7);
          if (plVar11 != (long *)0x0) {
            iVar7 = (int)plVar11[1] + 1;
            *(int *)(plVar11 + 1) = iVar7;
            if ((char)plVar11[6] != '\0') {
              local_50 = (long *)(**(code **)(*plVar6 + 0x10))();
                    /* try { // try from 0056f6b8 to 0066f6bf has its CatchHandler @ 0056f884 */
              *(undefined1 *)(local_50 + 6) = 1;
                    /* try { // try from 0056f6c0 to 0066f703 has its CatchHandler @ 0056f67c */
              pcVar10 = *(code **)(*(long *)this + 0x48);
              if (local_50 != (long *)0x0) {
                *(int *)(local_50 + 1) = (int)local_50[1] + 1;
              }
              (*pcVar10)(this,&local_50);
              if ((local_50 != (long *)0x0) &&
                 (iVar7 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar7, iVar7 == 0)) {
                    /* try { // try from 0056f704 to 0066f71b has its CatchHandler @ 0056f7e4 */
                (**(code **)(*local_50 + 8))();
              }
              iVar7 = (int)plVar11[1];
            }
            *(int *)(plVar11 + 1) = iVar7 + -1;
            if (iVar7 + -1 == 0) {
              (**(code **)(*plVar11 + 8))(plVar11);
            }
          }
        }
LAB_0056f728:
      }
    }
  }
                    /* try { // try from 0056f73c to 0066f763 has its CatchHandler @ 0056f7d4 */
  SetInstanceScaling(this,*(float *)(this + 0x88));
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 0056f764 to 0066f807 has its CatchHandler @ 0056f67c */
  return;
}


