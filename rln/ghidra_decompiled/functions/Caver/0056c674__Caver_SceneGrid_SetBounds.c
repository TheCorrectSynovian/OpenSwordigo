/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0056c674
 * Function: Caver::SceneGrid::SetBounds
 * Signature: undefined __thiscall SetBounds(SceneGrid * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SceneGrid::SetBounds(Caver::Rectangle const&) */

void __thiscall Caver::SceneGrid::SetBounds(SceneGrid *this,Rectangle *param_1)

{
  long lVar1;
  long *plVar2;
  FastVector *pFVar3;
  undefined8 *puVar4;
  SceneGridLayer *this_00;
  long *plVar5;
  int iVar6;
  long lVar7;
  SceneGridEntry *pSVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar7 = tpidr_el0;
  local_58 = *(long *)(lVar7 + 0x28);
  uVar15 = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar15;
  if (0 < *(int *)this) {
    lVar14 = 0;
    pFVar3 = (FastVector *)(this + 0x20);
    do {
      puVar4 = (undefined8 *)(*(long *)(this + 8) + lVar14 * 0x10);
      this_00 = (SceneGridLayer *)*puVar4;
      plVar5 = (long *)puVar4[1];
      if (plVar5 != (long *)0x0) {
        plVar5[1] = plVar5[1] + 1;
      }
      *(undefined4 *)pFVar3 = 0;
      SceneGridLayer::GetAllEntries(this_00,pFVar3);
      iVar6 = *(int *)pFVar3;
      uVar9 = (ulong)iVar6;
      if (0 < iVar6) {
        lVar10 = *(long *)(this + 0x28);
        if (iVar6 == 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = uVar9 & 0xfffffffffffffffe;
          plVar12 = (long *)(lVar10 + 8);
          uVar13 = uVar11;
          do {
            plVar2 = plVar12 + -1;
            lVar1 = *plVar12;
            uVar13 = uVar13 - 2;
            plVar12 = plVar12 + 2;
            *(undefined1 *)(*plVar2 + 0x10) = 0;
            *(undefined1 *)(lVar1 + 0x10) = 0;
          } while (uVar13 != 0);
          if (uVar11 == uVar9) goto LAB_0056c74c;
        }
        do {
          lVar1 = uVar11 * 8;
          uVar11 = uVar11 + 1;
          *(undefined1 *)(*(long *)(lVar10 + lVar1) + 0x10) = 0;
        } while ((long)uVar11 < (long)uVar9);
      }
LAB_0056c74c:
      SceneGridLayer::Init
                (this_00,(Rectangle *)(this + 0x10),*(float *)(this_00 + 0x18),
                 *(float *)(this_00 + 0x1c),*(float *)this_00,*(float *)(this_00 + 4));
      if (0 < *(int *)pFVar3) {
        lVar10 = 0;
        do {
          pSVar8 = *(SceneGridEntry **)(*(long *)(this + 0x28) + lVar10 * 8);
          uStack_68 = *(undefined8 *)(pSVar8 + 0x1c);
          local_70 = *(undefined8 *)(pSVar8 + 0x14);
          SceneGridLayer::AddObject(this_00,pSVar8,(Rectangle *)&local_70);
          lVar10 = lVar10 + 1;
        } while (lVar10 < *(int *)pFVar3);
      }
      if ((plVar5 != (long *)0x0) && (lVar10 = plVar5[1], plVar5[1] = lVar10 + -1, lVar10 + -1 == 0)
         ) {
                    /* try { // try from 0056c7bc to 0066c7cf has its CatchHandler @ 0056c9d8 */
        (**(code **)(*plVar5 + 0x10))(plVar5);
        lVar10 = plVar5[2];
        plVar5[2] = lVar10 + -1;
        if (lVar10 + -1 == 0) {
                    /* try { // try from 0056c7d0 to 0066c7db has its CatchHandler @ 0056c994 */
          (**(code **)(*plVar5 + 0x18))(plVar5);
        }
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 < *(int *)this);
  }
  if (*(long *)(lVar7 + 0x28) == local_58) {
                    /* try { // try from 0056c818 to 0066c82b has its CatchHandler @ 0056c9d4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


