/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b78cc
 * Function: Caver::GroundMeshComponent::Process
 * Signature: undefined __cdecl Process(vector * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshComponent::Process(std::vector<boost::intrusive_ptr<Caver::Component>,
   std::allocator<boost::intrusive_ptr<Caver::Component> > >*) */

undefined8 Caver::GroundMeshComponent::Process(vector *param_1)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  MeshBuilder *pMVar8;
  int *piVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  int *piVar17;
  int iVar18;
  MeshBuilder *local_a8;
  MeshBuilder *local_a0;
  undefined8 *local_98;
  undefined8 *local_90;
  undefined8 *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar11 = *(undefined8 **)(param_1 + 0x70);
  puVar13 = *(undefined8 **)(param_1 + 0x78);
  local_80 = (undefined8 *)0x0;
  local_78 = (undefined8 *)0x0;
  local_70 = (undefined8 *)0x0;
  uVar12 = (long)puVar13 - (long)puVar11;
  puVar7 = (undefined8 *)0x0;
  if (uVar12 != 0) {
    if ((ulong)((long)uVar12 >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    puVar7 = operator_new(uVar12);
    puVar11 = *(undefined8 **)(param_1 + 0x70);
    puVar13 = *(undefined8 **)(param_1 + 0x78);
  }
  local_70 = puVar7 + ((long)uVar12 >> 4) * 2;
  local_78 = puVar7;
  if (puVar13 != puVar11) {
    puVar10 = puVar11;
    puVar14 = puVar7;
    do {
      *puVar14 = *puVar10;
      lVar15 = puVar10[1];
      puVar14[1] = lVar15;
      if (lVar15 != 0) {
        *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
      }
      puVar10 = puVar10 + 2;
      puVar14 = puVar14 + 2;
    } while (puVar10 != puVar13);
    local_78 = (undefined8 *)
               ((long)puVar7 +
               ((long)puVar13 + (-0x10 - (long)puVar11) & 0xfffffffffffffff0U) + 0x10);
  }
  puVar11 = *(undefined8 **)(param_1 + 0x88);
  puVar13 = *(undefined8 **)(param_1 + 0x90);
  local_98 = (undefined8 *)0x0;
  local_90 = (undefined8 *)0x0;
  local_88 = (undefined8 *)0x0;
  uVar12 = (long)puVar13 - (long)puVar11;
  local_80 = puVar7;
  if (uVar12 == 0) {
    local_98 = (undefined8 *)0x0;
  }
  else {
    if ((ulong)((long)uVar12 >> 4) >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00665294();
    }
    local_98 = operator_new(uVar12);
    puVar11 = *(undefined8 **)(param_1 + 0x88);
    puVar13 = *(undefined8 **)(param_1 + 0x90);
  }
  local_88 = local_98 + ((long)uVar12 >> 4) * 2;
  puVar7 = local_98;
  if (puVar13 != puVar11) {
    puVar7 = puVar11;
    puVar10 = local_98;
    do {
      *puVar10 = *puVar7;
      lVar15 = puVar7[1];
      puVar10[1] = lVar15;
      if (lVar15 != 0) {
        *(long *)(lVar15 + 8) = *(long *)(lVar15 + 8) + 1;
      }
      puVar7 = puVar7 + 2;
      puVar10 = puVar10 + 2;
    } while (puVar7 != puVar13);
    puVar7 = (undefined8 *)
             ((long)local_98 +
             ((long)puVar13 + (-0x10 - (long)puVar11) & 0xfffffffffffffff0U) + 0x10);
  }
  local_90 = puVar7;
  RemoveAllMeshes((GroundMeshComponent *)param_1);
  puVar14 = local_78;
  puVar10 = local_80;
  puVar13 = local_98;
  for (puVar11 = local_80; local_98 = puVar13, puVar11 != puVar14; puVar11 = puVar11 + 2) {
    pMVar8 = operator_new(0x58);
    MeshBuilder::MeshBuilder(pMVar8);
    local_a0 = pMVar8;
    MeshBuilder::InitWithMesh(pMVar8,*(Mesh **)*puVar11,true);
    pMVar8 = local_a0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = (long)*(int *)(local_a0 + 0x50);
    uVar12 = (long)*(int *)(local_a0 + 0x50) << 2;
    if (SUB168(auVar2 * ZEXT816(4),8) != 0) {
      uVar12 = 0xffffffffffffffff;
    }
    piVar9 = operator_new__(uVar12);
    if (0 < *(int *)(pMVar8 + 0x50)) {
      lVar15 = 0;
      do {
        piVar9[lVar15] = (int)lVar15;
        iVar18 = *(int *)(pMVar8 + 0x50);
        lVar15 = lVar15 + 1;
      } while (lVar15 < iVar18);
      if (0 < iVar18) {
        iVar18 = 0;
        lVar15 = 0;
        piVar17 = piVar9;
        do {
          pMVar8 = operator_new(0x58);
          MeshBuilder::MeshBuilder(pMVar8);
          iVar1 = iVar18 + *(int *)(local_a0 + 0x50);
          if (0x13 < iVar1) {
            iVar1 = 0x14;
          }
          local_a8 = pMVar8;
          MeshBuilder::InitWithMeshBuilderFaceSubset(pMVar8,local_a0,piVar17,iVar1);
          MeshBuilder::GenerateMesh(local_a8);
          AddSurfaceMesh((shared_ptr *)param_1);
          boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr
                    ((scoped_ptr<Caver::MeshBuilder> *)&local_a8);
          lVar15 = lVar15 + 0x14;
          piVar17 = piVar17 + 0x14;
          iVar18 = iVar18 + -0x14;
        } while (lVar15 < *(int *)(local_a0 + 0x50));
      }
    }
    operator_delete__(piVar9);
    boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr((scoped_ptr<Caver::MeshBuilder> *)&local_a0);
    puVar13 = local_98;
  }
  puVar11 = puVar13;
  puVar5 = puVar7;
  if (puVar13 != puVar7) {
    do {
      pMVar8 = operator_new(0x58);
      MeshBuilder::MeshBuilder(pMVar8);
      local_a0 = pMVar8;
      MeshBuilder::InitWithMesh(pMVar8,*(Mesh **)*puVar11,true);
      pMVar8 = local_a0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (long)*(int *)(local_a0 + 0x50);
      uVar12 = (long)*(int *)(local_a0 + 0x50) << 2;
      if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
        uVar12 = 0xffffffffffffffff;
      }
      piVar9 = operator_new__(uVar12);
      if (0 < *(int *)(pMVar8 + 0x50)) {
        lVar15 = 0;
        do {
          piVar9[lVar15] = (int)lVar15;
          iVar18 = *(int *)(pMVar8 + 0x50);
          lVar15 = lVar15 + 1;
        } while (lVar15 < iVar18);
        if (0 < iVar18) {
          iVar18 = 0;
          lVar15 = 0;
          piVar17 = piVar9;
          do {
            pMVar8 = operator_new(0x58);
            MeshBuilder::MeshBuilder(pMVar8);
            iVar1 = iVar18 + *(int *)(local_a0 + 0x50);
            if (0x13 < iVar1) {
              iVar1 = 0x14;
            }
            local_a8 = pMVar8;
            MeshBuilder::InitWithMeshBuilderFaceSubset(pMVar8,local_a0,piVar17,iVar1);
            MeshBuilder::GenerateMesh(local_a8);
            AddFrontMesh((shared_ptr *)param_1);
            boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr
                      ((scoped_ptr<Caver::MeshBuilder> *)&local_a8);
            lVar15 = lVar15 + 0x14;
            piVar17 = piVar17 + 0x14;
            iVar18 = iVar18 + -0x14;
          } while (lVar15 < *(int *)(local_a0 + 0x50));
        }
      }
      operator_delete__(piVar9);
      boost::scoped_ptr<Caver::MeshBuilder>::~scoped_ptr
                ((scoped_ptr<Caver::MeshBuilder> *)&local_a0);
      puVar11 = puVar11 + 2;
      puVar6 = puVar13;
    } while (puVar11 != puVar7);
    for (; puVar6 != puVar7; puVar6 = puVar6 + 2) {
      plVar16 = (long *)puVar6[1];
      if ((plVar16 != (long *)0x0) &&
         (lVar15 = plVar16[1], plVar16[1] = lVar15 + -1, lVar15 + -1 == 0)) {
        (**(code **)(*plVar16 + 0x10))(plVar16);
        lVar15 = plVar16[2];
        plVar16[2] = lVar15 + -1;
        if (lVar15 + -1 == 0) {
          (**(code **)(*plVar16 + 0x18))(plVar16);
        }
      }
      puVar5 = puVar13;
    }
  }
  puVar11 = puVar10;
  if (puVar5 != (undefined8 *)0x0) {
    operator_delete(puVar5);
  }
  for (; puVar11 != puVar14; puVar11 = puVar11 + 2) {
    plVar16 = (long *)puVar11[1];
    if ((plVar16 != (long *)0x0) &&
       (lVar15 = plVar16[1], plVar16[1] = lVar15 + -1, lVar15 + -1 == 0)) {
      (**(code **)(*plVar16 + 0x10))(plVar16);
      lVar15 = plVar16[2];
      plVar16[2] = lVar15 + -1;
      if (lVar15 + -1 == 0) {
        (**(code **)(*plVar16 + 0x18))(plVar16);
      }
    }
  }
  if (puVar10 != (undefined8 *)0x0) {
    operator_delete(puVar10);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return 1;
}


