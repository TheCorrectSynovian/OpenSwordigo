/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00338f7c
 * Function: Caver::ShapeComponent::DrawShape
 * Signature: undefined __thiscall DrawShape(ShapeComponent * this, RenderingContext * param_1, Shape * param_2, Matrix4 * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ShapeComponent::DrawShape(Caver::RenderingContext*, Caver::Shape const&, Caver::Matrix4
   const&) */

void __thiscall
Caver::ShapeComponent::DrawShape
          (ShapeComponent *this,RenderingContext *param_1,Shape *param_2,Matrix4 *param_3)

{
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  long lVar4;
  bool bVar5;
  double dVar6;
  Vector2 *pVVar7;
  Vector2 *this_00;
  Vector2 *pVVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  undefined8 *puVar15;
  int *piVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined8 uVar22;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  float local_80;
  float fStack_7c;
  float local_78;
  float fStack_74;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  RenderingContext::SetMatrix(param_1,param_3);
  iVar14 = *(int *)param_2;
  if (iVar14 == 1) {
    pfVar13 = *(float **)(param_2 + 8);
    pVVar7 = operator_new__(0x3c);
    fVar18 = *pfVar13;
    fVar19 = pfVar13[1];
    bVar5 = true;
    *(float *)(pVVar7 + 4) = fVar19;
    *(float *)(pVVar7 + 8) = 0.0;
    *(float *)pVVar7 = fVar18;
    fVar20 = pfVar13[2];
    *(float *)(pVVar7 + 0x10) = fVar19;
    *(float *)(pVVar7 + 0x14) = 0.0;
    *(float *)(pVVar7 + 0xc) = fVar20 + fVar18;
    fVar21 = pfVar13[3];
    iVar14 = 5;
    *(float *)(pVVar7 + 0x34) = fVar19;
    *(float *)(pVVar7 + 0x38) = 0.0;
    *(float *)(pVVar7 + 0x20) = 0.0;
    *(float *)(pVVar7 + 0x24) = fVar18;
    *(float *)(pVVar7 + 0x2c) = 0.0;
    *(float *)(pVVar7 + 0x30) = fVar18;
    *(float *)(pVVar7 + 0x18) = fVar20 + fVar18;
    *(float *)(pVVar7 + 0x1c) = fVar21 + fVar19;
    *(float *)(pVVar7 + 0x28) = fVar21 + fVar19;
LAB_00339144:
    RenderingContext::SetVertexAttribPointer(param_1,0x8074,3,0x1406,0xc,pVVar7);
    if (bVar5) {
      RenderingContext::DrawArrays(param_1,3,0,iVar14);
    }
    else {
      RenderingContext::DrawArrays(param_1,1,0,iVar14);
    }
LAB_00339190:
    if (*(int *)param_2 == 3) goto LAB_0033919c;
LAB_00339408:
    if (pVVar7 == (Vector2 *)0x0) goto LAB_00339414;
  }
  else {
    if (iVar14 == 2) {
      puVar15 = *(undefined8 **)(param_2 + 8);
      pVVar7 = operator_new__(0xf0);
      dVar6 = DAT_00684790;
      pVVar8 = pVVar7 + 8;
      uVar10 = 0xffffffffffffffff;
      this_00 = pVVar7;
      do {
        this_00 = (Vector2 *)
                  Vector2::FromAngle(this_00,(float)(((double)((int)uVar10 + 1) * dVar6) / 19.0));
        fVar18 = *(float *)(puVar15 + 1);
        uVar17 = *puVar15;
        uVar10 = uVar10 + 1;
        *(float *)pVVar8 = 0.0;
        *(ulong *)(pVVar8 + -8) =
             CONCAT44((float)((ulong)local_70 >> 0x20) * fVar18 + (float)((ulong)uVar17 >> 0x20),
                      (float)local_70 * fVar18 + (float)uVar17);
        pVVar8 = pVVar8 + 0xc;
      } while (uVar10 < 0x13);
      bVar5 = true;
      iVar14 = 0x14;
      goto LAB_00339144;
    }
    if (iVar14 == 3) {
      piVar16 = *(int **)(param_2 + 8);
      iVar1 = *piVar16 + (uint)*(byte *)((long)piVar16 + 0x21) + -1;
      iVar14 = iVar1 * 2;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (long)iVar14;
      uVar10 = ((long)iVar14 + (long)iVar14 * 2) * 4;
      if (SUB168(auVar2 * ZEXT816(0xc),8) != 0) {
        uVar10 = 0xffffffffffffffff;
      }
      pVVar7 = operator_new__(uVar10);
      lVar9 = (long)*piVar16 + (ulong)*(byte *)((long)piVar16 + 0x21) + -1;
      if (0 < (int)lVar9) {
        pfVar12 = *(float **)(piVar16 + 2);
        lVar11 = 0;
        pfVar13 = pfVar12 + 3;
        fVar18 = *pfVar12;
        fVar19 = pfVar12[1];
        pVVar8 = pVVar7 + 0xc;
        do {
          *(float *)(pVVar8 + -0xc) = fVar18;
          *(float *)(pVVar8 + -8) = fVar19;
          *(float *)(pVVar8 + -4) = 0.0;
          fVar18 = pfVar13[-1];
          fVar19 = *pfVar13;
          lVar11 = lVar11 + 1;
          pfVar13 = pfVar13 + 2;
          *(float *)(pVVar8 + 4) = fVar19;
          *(float *)(pVVar8 + 8) = 0.0;
          *(float *)pVVar8 = fVar18;
          pVVar8 = pVVar8 + 0x18;
        } while (lVar11 < lVar9);
      }
      if (0 < iVar1) {
        bVar5 = false;
        goto LAB_00339144;
      }
      goto LAB_00339190;
    }
    pVVar7 = (Vector2 *)0x0;
    if (iVar14 != 3) goto LAB_00339408;
LAB_0033919c:
    piVar16 = *(int **)(param_2 + 8);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)*piVar16 * 6;
    uVar10 = (long)*piVar16 * 0x48;
    if (SUB168(auVar3 * ZEXT816(0xc),8) != 0) {
      uVar10 = 0xffffffffffffffff;
    }
    pVVar8 = operator_new__(uVar10);
    if (pVVar7 != (Vector2 *)0x0) {
      operator_delete__(pVVar7);
    }
    iVar14 = *piVar16;
    if (0 < iVar14) {
      lVar9 = 0;
      pVVar7 = pVVar8 + 0x24;
      pfVar13 = (float *)(*(long *)(piVar16 + 2) + 4);
      do {
        fVar18 = pfVar13[-1];
        fVar19 = *pfVar13;
        lVar9 = lVar9 + 1;
        *(float *)(pVVar7 + -0x1c) = 0.0;
        *(float *)(pVVar7 + -0x10) = 0.0;
        fVar20 = fVar18 + -1.0;
        fVar21 = fVar19 + -1.0;
        fVar18 = fVar18 + 1.0;
        fVar19 = fVar19 + 1.0;
        *(float *)(pVVar7 + -4) = 0.0;
        *(float *)(pVVar7 + 8) = 0.0;
        *(float *)(pVVar7 + 0x14) = 0.0;
        *(float *)(pVVar7 + 0x20) = 0.0;
        pfVar13 = pfVar13 + 2;
        *(float *)(pVVar7 + -0x24) = fVar20;
        *(float *)(pVVar7 + -0x20) = fVar21;
        *(float *)(pVVar7 + -0x18) = fVar18;
        *(float *)(pVVar7 + -0x14) = fVar21;
        *(float *)(pVVar7 + -0xc) = fVar20;
        *(float *)(pVVar7 + -8) = fVar19;
        *(float *)pVVar7 = fVar18;
        *(float *)(pVVar7 + 4) = fVar21;
        *(float *)(pVVar7 + 0xc) = fVar18;
        *(float *)(pVVar7 + 0x10) = fVar19;
        *(float *)(pVVar7 + 0x18) = fVar20;
        *(float *)(pVVar7 + 0x1c) = fVar19;
        pVVar7 = pVVar7 + 0x48;
      } while (lVar9 < iVar14);
    }
    RenderingContext::SetVertexAttribPointer(param_1,0x8074,3,0x1406,0xc,pVVar8);
    RenderingContext::DrawArrays(param_1,4,0,*piVar16 * 6);
    pVVar7 = pVVar8;
    if (*(char *)((long)piVar16 + 0x21) == '\0') {
      pVVar7 = operator_new__(0x30);
      operator_delete__(pVVar8);
      pfVar13 = *(float **)(piVar16 + 2);
      fStack_74 = pfVar13[2] - *pfVar13;
      local_78 = -(pfVar13[3] - pfVar13[1]);
      Vector2::Normalize((Vector2 *)&local_78);
      uVar17 = *(undefined8 *)pfVar13;
      uVar22 = NEON_fmov(0x40c00000,4);
      *(float *)(pVVar7 + 8) = 0.0;
      fVar18 = (float)uVar22;
      fVar19 = (float)((ulong)uVar22 >> 0x20);
      *(ulong *)pVVar7 =
           CONCAT44(fStack_74 * fVar19 + (float)((ulong)uVar17 >> 0x20),
                    local_78 * fVar18 + (float)uVar17);
      pfVar13 = *(float **)(piVar16 + 2);
      fStack_7c = pfVar13[2] - *pfVar13;
      local_80 = -(pfVar13[3] - pfVar13[1]);
      Vector2::Normalize((Vector2 *)&local_80);
      uVar17 = *(undefined8 *)pfVar13;
      *(float *)(pVVar7 + 0x14) = 0.0;
      *(ulong *)(pVVar7 + 0xc) =
           CONCAT44((float)((ulong)uVar17 >> 0x20) - fStack_7c * fVar19,
                    (float)uVar17 - local_80 * fVar18);
      iVar14 = *piVar16;
      lVar11 = *(long *)(piVar16 + 2);
      lVar9 = lVar11 + ((long)iVar14 + (ulong)*(byte *)((long)piVar16 + 0x21)) * 8;
      fStack_84 = *(float *)(lVar9 + -8) - *(float *)(lVar9 + -0x10);
      local_88 = -(*(float *)(lVar9 + -4) - *(float *)(lVar9 + -0xc));
      Vector2::Normalize((Vector2 *)&local_88);
      uVar17 = *(undefined8 *)(lVar11 + (long)iVar14 * 8 + -8);
      *(float *)(pVVar7 + 0x20) = 0.0;
      *(ulong *)(pVVar7 + 0x18) =
           CONCAT44(fStack_84 * fVar19 + (float)((ulong)uVar17 >> 0x20),
                    local_88 * fVar18 + (float)uVar17);
      iVar14 = *piVar16;
      lVar11 = *(long *)(piVar16 + 2);
      lVar9 = lVar11 + ((long)iVar14 + (ulong)*(byte *)((long)piVar16 + 0x21)) * 8;
      fStack_8c = *(float *)(lVar9 + -8) - *(float *)(lVar9 + -0x10);
      local_90 = -(*(float *)(lVar9 + -4) - *(float *)(lVar9 + -0xc));
      Vector2::Normalize((Vector2 *)&local_90);
      uVar17 = *(undefined8 *)(lVar11 + (long)iVar14 * 8 + -8);
      *(float *)(pVVar7 + 0x2c) = 0.0;
      *(ulong *)(pVVar7 + 0x24) =
           CONCAT44((float)((ulong)uVar17 >> 0x20) - fStack_8c * fVar19,
                    (float)uVar17 - local_90 * fVar18);
      RenderingContext::SetVertexAttribPointer(param_1,0x8074,3,0x1406,0xc,pVVar7);
      RenderingContext::DrawArrays(param_1,1,0,4);
    }
  }
  operator_delete__(pVVar7);
LAB_00339414:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


