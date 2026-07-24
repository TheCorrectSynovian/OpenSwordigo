/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b9e5c
 * Function: Caver::GroundMeshGenerator::InitializeMeshBuilder
 * Signature: undefined __thiscall InitializeMeshBuilder(GroundMeshGenerator * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGenerator::InitializeMeshBuilder(bool) */

void __thiscall
Caver::GroundMeshGenerator::InitializeMeshBuilder(GroundMeshGenerator *this,bool param_1)

{
  MeshBuilder *this_00;
  char cVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  int *piVar15;
  int iVar16;
  undefined1 auVar17 [16];
  long local_a0 [2];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long *local_58;
  undefined *local_50 [3];
  long local_38;
  
  puVar4 = PTR_DAT_007e5de8;
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  auVar17 = NEON_fmov(0x3f800000,4);
  this_00 = (MeshBuilder *)(this + 0x20);
  local_50[0] = PTR_DAT_007e5de8 + 0x18;
  uStack_88 = auVar17._8_8_;
  local_90 = auVar17._0_8_;
  local_60 = 0;
  local_58 = (long *)0x0;
  uStack_80 = local_90;
  uStack_78 = uStack_88;
  local_70 = local_90;
  uStack_68 = uStack_88;
  if (param_1) {
    MeshBuilder::InitializeIndices(this_00,0x1403);
  }
  MeshBuilder::InitializePosition(this_00,0x1406,3);
  MeshBuilder::InitializeNormal(this_00,0x1406,3);
  if ((*(long **)(this + 0x18) != (long *)0x0) &&
     (plVar13 = (long *)**(long **)(this + 0x18), plVar13 != (long *)0x0)) {
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
    if ((local_58 != (long *)0x0) &&
       (iVar16 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar16, iVar16 == 0)) {
      lVar14 = *local_58;
      local_58 = plVar13;
      (**(code **)(lVar14 + 8))();
      plVar13 = local_58;
    }
    local_58 = plVar13;
    MeshBuilder::SetNumTexCoordSets(this_00,1);
    MeshBuilder::InitializeTexCoordSet(this_00,0,0x1406,2);
  }
  plVar13 = local_58;
  uVar11 = local_60;
  uVar10 = uStack_68;
  uVar9 = local_70;
  uVar8 = uStack_78;
  uVar7 = uStack_80;
  uVar6 = uStack_88;
  uVar5 = local_90;
  if (local_58 != (long *)0x0) {
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
  }
  FUN_0066a528(local_a0,local_50);
  lVar14 = *(long *)(this + 0x20);
  *(undefined4 *)(lVar14 + 0xd0) = uVar11;
  *(undefined8 *)(lVar14 + 200) = uVar10;
  *(undefined8 *)(lVar14 + 0xc0) = uVar9;
  *(undefined8 *)(lVar14 + 0xb8) = uVar8;
  *(undefined8 *)(lVar14 + 0xb0) = uVar7;
  *(undefined8 *)(lVar14 + 0xa8) = uVar6;
  *(undefined8 *)(lVar14 + 0xa0) = uVar5;
  if (plVar13 != (long *)0x0) {
    *(int *)(plVar13 + 1) = (int)plVar13[1] + 1;
  }
  plVar12 = *(long **)(lVar14 + 0xd8);
  *(long **)(lVar14 + 0xd8) = plVar13;
  if ((plVar12 != (long *)0x0) &&
     (iVar16 = (int)plVar12[1] + -1, *(int *)(plVar12 + 1) = iVar16, iVar16 == 0)) {
    (**(code **)(*plVar12 + 8))();
  }
  FUN_0066a6a8(lVar14 + 0xe0,local_a0);
  if ((undefined *)(local_a0[0] + -0x18) != puVar4) {
    piVar15 = (int *)(local_a0[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar15;
      *piVar15 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar15;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = iVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete((undefined *)(local_a0[0] + -0x18));
    }
  }
  if ((plVar13 != (long *)0x0) &&
     (iVar16 = (int)plVar13[1] + -1, *(int *)(plVar13 + 1) = iVar16, iVar16 == 0)) {
    (**(code **)(*plVar13 + 8))();
  }
  if (local_50[0] + -0x18 != puVar4) {
    piVar15 = (int *)(local_50[0] + -8);
    if (PTR_pthread_create_007e4e78 == (undefined *)0x0) {
      iVar16 = *piVar15;
      *piVar15 = iVar16 + -1;
    }
    else {
      do {
        iVar16 = *piVar15;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(piVar15,0x10);
        if (bVar2) {
          *piVar15 = iVar16 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
    }
    if (iVar16 < 1) {
      operator_delete(local_50[0] + -0x18);
    }
  }
  if ((local_58 != (long *)0x0) &&
     (iVar16 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar16, iVar16 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if (*(long *)(lVar3 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


