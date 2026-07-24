/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003bc4e8
 * Function: Caver::GroundMeshGeneratorComponent::GenerateMesh
 * Signature: undefined __thiscall GenerateMesh(GroundMeshGeneratorComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GroundMeshGeneratorComponent::GenerateMesh() */

void __thiscall
Caver::GroundMeshGeneratorComponent::GenerateMesh(GroundMeshGeneratorComponent *this)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  undefined *puVar5;
  Vector2 *pVVar6;
  int iVar7;
  GroundMeshComponent *this_00;
  Vector2 *pVVar8;
  float *pfVar9;
  float *pfVar10;
  TextureMapping *in_x5;
  long lVar11;
  ulong uVar12;
  int *piVar13;
  shared_ptr *psVar14;
  undefined8 uVar15;
  long lVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  Rectangle aRStack_240 [24];
  long *local_228;
  int *local_220;
  Vector2 *local_218;
  float *local_210;
  long lStack_208;
  MeshBuilder aMStack_200 [8];
  long *local_1f8;
  void *local_1e8;
  void *local_1c8;
  int *local_198;
  Vector2 *pVStack_190;
  float *local_188;
  long lStack_180;
  MeshBuilder aMStack_178 [8];
  long *local_170;
  void *local_160;
  void *local_140;
  int *local_110;
  Vector2 *pVStack_108;
  float *local_100;
  long lStack_f8;
  MeshBuilder aMStack_f0 [8];
  long *local_e8;
  void *local_d8;
  void *local_b8;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  lVar11 = *(long *)(this + 0x80);
  if (lVar11 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar11 = *(long *)(this + 0x80);
    if (lVar11 == 0) goto LAB_003bcb1c;
  }
  if (*(long *)(this + 0x98) == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    if (*(long *)(this + 0x98) == 0) goto LAB_003bcb1c;
    iVar7 = *(int *)(this + 0xd0);
    lVar11 = *(long *)(this + 0x80);
    if (lVar11 != 0) {
      fVar17 = *(float *)(this + 0xd4);
      fVar19 = fVar17 * -0.5;
      if (iVar7 != 1) goto LAB_003bc5bc;
      goto LAB_003bc564;
    }
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    fVar17 = *(float *)(this + 0xd4);
    lVar11 = *(long *)(this + 0x80);
    if (iVar7 != 1) {
      *(float *)(lVar11 + 0xa8) = fVar17 * -0.5;
      if (lVar11 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        lVar11 = *(long *)(this + 0x80);
        fVar17 = *(float *)(this + 0xd4);
      }
      goto LAB_003bc5c0;
    }
    fVar18 = *(float *)(this + 0xe4);
    *(float *)(lVar11 + 0xa8) = fVar17 * -0.5 - fVar18;
    if (lVar11 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      lVar11 = *(long *)(this + 0x80);
      fVar17 = *(float *)(this + 0xd4);
      fVar18 = *(float *)(this + 0xe4);
    }
LAB_003bc570:
    fVar18 = fVar17 * 0.5 + fVar18;
  }
  else {
    fVar17 = *(float *)(this + 0xd4);
    fVar19 = fVar17 * -0.5;
    if (*(int *)(this + 0xd0) == 1) {
LAB_003bc564:
      fVar18 = *(float *)(this + 0xe4);
      *(float *)(lVar11 + 0xa8) = fVar19 - fVar18;
      goto LAB_003bc570;
    }
LAB_003bc5bc:
    *(float *)(lVar11 + 0xa8) = fVar19;
LAB_003bc5c0:
    fVar18 = fVar17 * 0.5;
  }
  *(float *)(lVar11 + 0xac) = fVar18;
  this_00 = *(GroundMeshComponent **)(this + 0x98);
  if (this_00 == (GroundMeshComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    this_00 = *(GroundMeshComponent **)(this + 0x98);
  }
  GroundMeshComponent::RemoveAllMeshes(this_00);
  seed_fastrandom(*(int *)(this + 0xd8));
  lVar11 = *(long *)(this + 0x80);
  if (lVar11 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar11 = *(long *)(this + 0x80);
  }
  piVar13 = (int *)(lVar11 + 0x70);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)*piVar13;
  uVar12 = (long)*piVar13 << 2;
  if (SUB168(auVar2 * ZEXT816(4),8) != 0) {
    uVar12 = 0xffffffffffffffff;
  }
  pVVar8 = operator_new__(uVar12);
  auVar3._8_8_ = 0;
  auVar3._0_8_ = (long)*piVar13;
  uVar12 = (long)*piVar13 << 2;
  if (SUB168(auVar3 * ZEXT816(4),8) != 0) {
    uVar12 = 0xffffffffffffffff;
  }
  pfVar9 = operator_new__(uVar12);
  puVar5 = PTR_FASTRANDOM_MAX_007e4b68;
  if (0 < *piVar13) {
    lVar16 = 0;
    do {
      fVar17 = *(float *)(this + 0xd4);
      iVar7 = fastrandom();
      *(float *)(pVVar8 + lVar16 * 4) =
           fVar17 * 0.5 + *(float *)(this + 0xdc) * ((float)iVar7 / (float)*(int *)puVar5 + -0.5);
      fVar17 = *(float *)(this + 0xd4);
      iVar7 = fastrandom();
      pfVar9[lVar16] =
           fVar17 * -0.5 - *(float *)(this + 0xdc) * ((float)iVar7 / (float)*(int *)puVar5 + -0.5);
      lVar16 = lVar16 + 1;
    } while (lVar16 < *piVar13);
  }
  lVar16 = *(long *)(this + 0xb0);
  if (lVar16 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this);
    lVar16 = *(long *)(this + 0xb0);
    lStack_f8 = 0;
    if (lVar16 != 0) goto LAB_003bc6f4;
  }
  else {
LAB_003bc6f4:
    lStack_f8 = lVar16 + 0x78;
  }
  local_110 = piVar13;
  pVStack_108 = pVVar8;
  local_100 = pfVar9;
  MeshBuilder::MeshBuilder(aMStack_f0);
  psVar14 = *(shared_ptr **)(this + 0x98);
  if (psVar14 == (shared_ptr *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    psVar14 = *(shared_ptr **)(this + 0x98);
  }
  GroundMeshGenerator::GenerateFrontMesh();
  GroundMeshComponent::AddFrontMesh(psVar14);
  pVVar6 = pVStack_190;
  if ((pVStack_190 != (Vector2 *)0x0) &&
     (lVar16 = *(long *)(pVStack_190 + 8), *(long *)(pVStack_190 + 8) = lVar16 + -1,
     lVar16 + -1 == 0)) {
    (**(code **)(*(long *)pVStack_190 + 0x10))(pVStack_190);
    lVar16 = *(long *)(pVVar6 + 0x10);
    *(long *)(pVVar6 + 0x10) = lVar16 + -1;
    if (lVar16 + -1 == 0) {
      (**(code **)(*(long *)pVVar6 + 0x18))(pVVar6);
    }
  }
  if (*(int *)(this + 0xd0) == 1) {
    lVar11 = *(long *)(this + 200);
    if (lVar11 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xb8),(Component *)this);
      lVar11 = *(long *)(this + 200);
      lStack_180 = 0;
      if (lVar11 != 0) goto LAB_003bc7ac;
    }
    else {
LAB_003bc7ac:
      lStack_180 = lVar11 + 0x78;
    }
    local_198 = piVar13;
    pVStack_190 = pVVar8;
    local_188 = pfVar9;
    MeshBuilder::MeshBuilder(aMStack_178);
    psVar14 = *(shared_ptr **)(this + 0x98);
    if (psVar14 == (shared_ptr *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      psVar14 = *(shared_ptr **)(this + 0x98);
    }
    fVar17 = DAT_006883c8;
    GroundMeshGenerator::GenerateSurfaceMeshWithRoundHat
              (DAT_006883c8,*(float *)(this + 0xe0),*(float *)(this + 0xe4),*(float *)(this + 0xe8))
    ;
    GroundMeshComponent::AddSurfaceMesh(psVar14);
    if ((local_218 != (Vector2 *)0x0) &&
       (lVar11 = *(long *)(local_218 + 8), *(long *)(local_218 + 8) = lVar11 + -1, lVar11 + -1 == 0)
       ) {
      (**(code **)(*(long *)local_218 + 0x10))(local_218);
      lVar11 = *(long *)(local_218 + 0x10);
      *(long *)(local_218 + 0x10) = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*(long *)local_218 + 0x18))(local_218);
      }
    }
    lVar11 = *(long *)(this + 0xb0);
    if (lVar11 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xa0),(Component *)this);
      lVar11 = *(long *)(this + 0xb0);
      lStack_208 = 0;
      if (lVar11 != 0) goto LAB_003bc86c;
    }
    else {
LAB_003bc86c:
      lStack_208 = lVar11 + 0x78;
    }
    local_220 = piVar13;
    local_218 = pVVar8;
    local_210 = pfVar9;
    MeshBuilder::MeshBuilder(aMStack_200);
    psVar14 = *(shared_ptr **)(this + 0x98);
    if (psVar14 == (shared_ptr *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      psVar14 = *(shared_ptr **)(this + 0x98);
    }
    GroundMeshGenerator::GeneratePlainSurfaceWithHatGaps(fVar17);
    GroundMeshComponent::AddSurfaceMesh(psVar14);
    if ((local_228 != (long *)0x0) &&
       (lVar11 = local_228[1], local_228[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*local_228 + 0x10))(local_228);
      lVar11 = local_228[2];
      local_228[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*local_228 + 0x18))(local_228);
      }
    }
    if (local_1c8 != (void *)0x0) {
      operator_delete(local_1c8);
    }
    if (local_1e8 != (void *)0x0) {
      operator_delete(local_1e8);
    }
    if ((local_1f8 != (long *)0x0) &&
       (lVar11 = local_1f8[1], local_1f8[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*local_1f8 + 0x10))(local_1f8);
      lVar11 = local_1f8[2];
      local_1f8[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*local_1f8 + 0x18))(local_1f8);
      }
    }
    if (local_140 != (void *)0x0) {
      operator_delete(local_140);
    }
    if (local_160 != (void *)0x0) {
      operator_delete(local_160);
    }
    if ((local_170 != (long *)0x0) &&
       (lVar11 = local_170[1], local_170[1] = lVar11 + -1, lVar11 + -1 == 0)) {
      (**(code **)(*local_170 + 0x10))(local_170);
      lVar11 = local_170[2];
      local_170[2] = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*local_170 + 0x18))(local_170);
      }
    }
  }
  else {
    psVar14 = *(shared_ptr **)(this + 0x98);
    if (psVar14 == (shared_ptr *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      psVar14 = *(shared_ptr **)(this + 0x98);
    }
    uVar1 = *(uint *)(lVar11 + 0x70);
    lVar16 = *(long *)(this + 200);
    uVar15 = *(undefined8 *)(lVar11 + 0x78);
    if (lVar16 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xb8),(Component *)this);
      lVar16 = *(long *)(this + 200);
      if (lVar16 != 0) goto LAB_003bca00;
      pfVar10 = (float *)0x0;
    }
    else {
LAB_003bca00:
      pfVar10 = (float *)(lVar16 + 0x78);
    }
    GroundMeshGenerator::GenerateSurfaceMesh
              ((GroundMeshGenerator *)(ulong)uVar1,(int)uVar15,pVVar8,pfVar9,pfVar10,in_x5);
    GroundMeshComponent::AddSurfaceMesh(psVar14);
    pVVar6 = pVStack_190;
    if ((pVStack_190 != (Vector2 *)0x0) &&
       (lVar11 = *(long *)(pVStack_190 + 8), *(long *)(pVStack_190 + 8) = lVar11 + -1,
       lVar11 + -1 == 0)) {
      (**(code **)(*(long *)pVStack_190 + 0x10))(pVStack_190);
      lVar11 = *(long *)(pVVar6 + 0x10);
      *(long *)(pVVar6 + 0x10) = lVar11 + -1;
      if (lVar11 + -1 == 0) {
        (**(code **)(*(long *)pVVar6 + 0x18))(pVVar6);
      }
    }
  }
  lVar11 = *(long *)(this + 0x98);
  if (lVar11 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar11 = *(long *)(this + 0x98);
  }
  Polygon::Bounds();
  Rectangle::RectangleByOutsetting(aRStack_240,10.0);
  *(Vector2 **)(lVar11 + 0xa8) = pVStack_190;
  *(int **)(lVar11 + 0xa0) = local_198;
  if (local_b8 != (void *)0x0) {
    operator_delete(local_b8);
  }
  if (local_d8 != (void *)0x0) {
    operator_delete(local_d8);
  }
  if ((local_e8 != (long *)0x0) &&
     (lVar11 = local_e8[1], local_e8[1] = lVar11 + -1, lVar11 + -1 == 0)) {
    (**(code **)(*local_e8 + 0x10))(local_e8);
    lVar11 = local_e8[2];
    local_e8[2] = lVar11 + -1;
    if (lVar11 + -1 == 0) {
      (**(code **)(*local_e8 + 0x18))(local_e8);
    }
  }
  operator_delete__(pfVar9);
  operator_delete__(pVVar8);
LAB_003bcb1c:
  if (*(long *)(lVar4 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


