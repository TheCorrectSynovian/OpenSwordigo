/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00549df8
 * Function: Caver::MeshOptimizer::BuildEdgeAdjacencyInfo
 * Signature: undefined __thiscall BuildEdgeAdjacencyInfo(MeshOptimizer * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MeshOptimizer::BuildEdgeAdjacencyInfo() */

void __thiscall Caver::MeshOptimizer::BuildEdgeAdjacencyInfo(MeshOptimizer *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  void *pvVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  int iVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long lVar21;
  int iVar22;
  int local_70;
  int iStack_6c;
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 00549e20 to 00649fa7 has its CatchHandler @ 00549d84 */
  lVar20 = *(long *)this;
  uVar6 = (long)*(int *)(this + 0x20) * 3;
  uVar16 = (long)*(int *)(this + 0x20) * 6;
  if (CARRY8(uVar6,uVar6)) {
    uVar16 = 0xffffffffffffffff;
  }
  pvVar8 = operator_new__(uVar16);
  plVar9 = operator_new(0x28);
  puVar7 = PTR_vtable_007e5ac0;
  plVar9[2] = 1;
  plVar9[1] = 1;
  *plVar9 = (long)(puVar7 + 0x10);
  plVar9[3] = (long)pvVar8;
  plVar19 = *(long **)(lVar20 + 0xf0);
  *(void **)(lVar20 + 0xe8) = pvVar8;
  *(long **)(lVar20 + 0xf0) = plVar9;
  if ((plVar19 != (long *)0x0) && (lVar20 = plVar19[1], plVar19[1] = lVar20 + -1, lVar20 + -1 == 0))
  {
    (**(code **)(*plVar19 + 0x10))(plVar19);
    lVar20 = plVar19[2];
    plVar19[2] = lVar20 + -1;
    if (lVar20 + -1 == 0) {
      (**(code **)(*plVar19 + 0x18))(plVar19);
    }
  }
  if (0 < *(int *)(this + 0x20)) {
    lVar18 = 0;
    lVar20 = 0;
    lVar21 = 8;
    do {
      lVar14 = *(long *)(this + 0x28);
      lVar12 = *(long *)(this + 0x18);
      iVar17 = (int)lVar18;
      iVar22 = iVar17 + 2;
      lVar15 = lVar18 + 1;
      lVar10 = lVar18;
      iVar13 = iVar22;
      if (lVar14 != 0) {
        lVar15 = (long)*(int *)(lVar14 + lVar18 * 4 + 4);
        lVar10 = (long)((int *)(lVar14 + lVar21))[-2];
        iVar13 = *(int *)(lVar14 + lVar21);
      }
      iVar2 = *(int *)(lVar12 + lVar10 * 0x28 + 0xc);
      iVar3 = *(int *)(lVar12 + lVar15 * 0x28 + 0xc);
      lVar15 = *(long *)(*(long *)this + 0xe8);
      iVar13 = *(int *)(lVar12 + (long)iVar13 * 0x28 + 0xc);
      *(undefined2 *)(lVar15 + lVar18 * 2) = 0xffff;
      if (iVar2 < iVar3) {
        lVar15 = lVar12 + (long)iVar2 * 0x28;
        plVar9 = (long *)(lVar15 + 0x18);
        puVar11 = (undefined8 *)*plVar9;
        local_70 = iVar17;
        iStack_6c = iVar3;
        if (puVar11 == *(undefined8 **)(lVar15 + 0x20)) {
          std::vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>
          ::_M_insert_aux((vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>
                           *)(lVar12 + (long)iVar2 * 0x28 + 0x10),puVar11,&local_70);
        }
        else {
          *puVar11 = CONCAT44(iVar3,iVar17);
          *plVar9 = *plVar9 + 8;
        }
        lVar15 = *(long *)(*(long *)this + 0xe8);
      }
      *(undefined2 *)(lVar15 + lVar18 * 2 + 2) = 0xffff;
                    /* try { // try from 00549fa8 to 00649fbb has its CatchHandler @ 0054a598 */
      if (iVar3 < iVar13) {
        local_70 = (int)(lVar18 + 1);
                    /* try { // try from 00549fbc to 00649fcb has its CatchHandler @ 0054a5d0 */
        lVar15 = *(long *)(this + 0x18) + (long)iVar3 * 0x28;
        plVar9 = (long *)(lVar15 + 0x18);
        puVar11 = (undefined8 *)*plVar9;
        iStack_6c = iVar13;
                    /* try { // try from 00549fcc to 0064a003 has its CatchHandler @ 0054a59c */
        if (puVar11 == *(undefined8 **)(lVar15 + 0x20)) {
          std::vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>
          ::_M_insert_aux((vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>
                           *)(*(long *)(this + 0x18) + (long)iVar3 * 0x28 + 0x10),puVar11,&local_70)
          ;
        }
        else {
          *puVar11 = CONCAT44(iVar13,local_70);
          *plVar9 = *plVar9 + 8;
        }
        lVar15 = *(long *)(*(long *)this + 0xe8);
      }
      *(undefined2 *)(lVar15 + lVar18 * 2 + 4) = 0xffff;
      if (iVar13 < iVar2) {
                    /* try { // try from 0054a024 to 0064a027 has its CatchHandler @ 0054a5d0 */
        lVar15 = *(long *)(this + 0x18) + (long)iVar13 * 0x28;
                    /* try { // try from 0054a028 to 0064a5bf has its CatchHandler @ 00549d84 */
        plVar9 = (long *)(lVar15 + 0x18);
        puVar11 = (undefined8 *)*plVar9;
        local_70 = iVar22;
        iStack_6c = iVar2;
        if (puVar11 == *(undefined8 **)(lVar15 + 0x20)) {
          std::vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>
          ::_M_insert_aux((vector<Caver::MeshOptimizer::EdgeInfo,std::allocator<Caver::MeshOptimizer::EdgeInfo>>
                           *)(*(long *)(this + 0x18) + (long)iVar13 * 0x28 + 0x10),puVar11,&local_70
                         );
        }
        else {
          *puVar11 = CONCAT44(iVar2,iVar22);
          *plVar9 = *plVar9 + 8;
        }
      }
      uVar4 = *(uint *)(this + 0x20);
      lVar20 = lVar20 + 1;
      lVar18 = lVar18 + 3;
      lVar21 = lVar21 + 0xc;
    } while (lVar20 < (int)uVar4);
    if (0 < (int)uVar4) {
      lVar20 = *(long *)(this + 0x28);
      lVar18 = *(long *)(this + 0x18);
      uVar16 = 0;
      do {
        lVar10 = uVar16 * 3;
        lVar21 = lVar10 + 1;
        lVar15 = lVar10 + 2;
        iVar17 = (int)lVar15;
        lVar12 = lVar21;
        lVar14 = lVar10;
        if (lVar20 != 0) {
          iVar17 = *(int *)(lVar20 + lVar15 * 4);
          lVar12 = (long)*(int *)(lVar20 + lVar21 * 4);
          lVar14 = (long)*(int *)(lVar20 + uVar16 * 0xc);
        }
        iVar13 = *(int *)(lVar18 + lVar14 * 0x28 + 0xc);
        iVar22 = *(int *)(lVar18 + lVar12 * 0x28 + 0xc);
        iVar17 = *(int *)(lVar18 + (long)iVar17 * 0x28 + 0xc);
        if (iVar22 < iVar13) {
          lVar12 = lVar18 + (long)iVar22 * 0x28;
          for (piVar1 = *(int **)(lVar12 + 0x10); piVar1 != *(int **)(lVar12 + 0x18);
              piVar1 = piVar1 + 2) {
            if (piVar1[1] == iVar13) {
              *(short *)(*(long *)(*(long *)this + 0xe8) + (long)*piVar1 * 2) = (short)lVar10;
              break;
            }
          }
        }
        if (iVar17 < iVar22) {
          lVar10 = lVar18 + (long)iVar17 * 0x28;
          for (piVar1 = *(int **)(lVar10 + 0x10); piVar1 != *(int **)(lVar10 + 0x18);
              piVar1 = piVar1 + 2) {
            if (piVar1[1] == iVar22) {
              *(short *)(*(long *)(*(long *)this + 0xe8) + (long)*piVar1 * 2) = (short)lVar21;
              break;
            }
          }
        }
        if (iVar13 < iVar17) {
          lVar21 = lVar18 + (long)iVar13 * 0x28;
          for (piVar1 = *(int **)(lVar21 + 0x10); piVar1 != *(int **)(lVar21 + 0x18);
              piVar1 = piVar1 + 2) {
            if (piVar1[1] == iVar17) {
              *(short *)(*(long *)(*(long *)this + 0xe8) + (long)*piVar1 * 2) = (short)lVar15;
              break;
            }
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != uVar4);
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


