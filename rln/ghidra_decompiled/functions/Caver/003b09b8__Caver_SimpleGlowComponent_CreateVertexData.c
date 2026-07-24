/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003b09b8
 * Function: Caver::SimpleGlowComponent::CreateVertexData
 * Signature: undefined __cdecl CreateVertexData(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SimpleGlowComponent::CreateVertexData() */

void Caver::SimpleGlowComponent::CreateVertexData(void)

{
  float *pfVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined2 uVar7;
  short sVar8;
  undefined1 auVar9 [16];
  long lVar10;
  short sVar11;
  short sVar12;
  float fVar13;
  double dVar14;
  long in_x0;
  void *pvVar15;
  Vector2 *this;
  Vector2 *extraout_x0;
  FloatColor *in_x1;
  void *pvVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  long lVar22;
  float fVar23;
  float local_80;
  float fStack_7c;
  float local_74;
  undefined8 local_70;
  undefined8 uStack_68;
  short local_60;
  long local_58;
  
  lVar10 = tpidr_el0;
  local_58 = *(long *)(lVar10 + 0x28);
  if (0 < *(int *)(in_x0 + 0xb8)) {
    local_70 = CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x74) >> 0x20) *
                        (float)((ulong)*(undefined8 *)(in_x0 + 0xa4) >> 0x20),
                        (float)*(undefined8 *)(in_x0 + 0x74) * (float)*(undefined8 *)(in_x0 + 0xa4))
    ;
    uStack_68 = CONCAT44((float)((ulong)*(undefined8 *)(in_x0 + 0x7c) >> 0x20) *
                         (float)((ulong)*(undefined8 *)(in_x0 + 0xac) >> 0x20),
                         (float)*(undefined8 *)(in_x0 + 0x7c) * (float)*(undefined8 *)(in_x0 + 0xac)
                        );
    Color::FromFloatColor((Color *)&local_70,in_x1);
    uVar5 = *(uint *)(in_x0 + 0xb8);
    uVar4 = uVar5 << 1 | 1;
    iVar20 = uVar5 * 3;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (long)(int)uVar4;
    *(uint *)(in_x0 + 0x90) = uVar4;
    uVar19 = -(ulong)((uVar5 & 0x7fffffff) >> 0x1e) & 0xfffffff000000000 | (ulong)uVar4 << 4;
    if (SUB168(auVar9 * ZEXT816(0x10),8) != 0) {
      uVar19 = 0xffffffffffffffff;
    }
    *(int *)(in_x0 + 0xa0) = iVar20;
    pvVar15 = operator_new__(uVar19);
    pvVar16 = *(void **)(in_x0 + 0x88);
    *(void **)(in_x0 + 0x88) = pvVar15;
    if (pvVar16 != (void *)0x0) {
      operator_delete__(pvVar16);
      iVar20 = *(int *)(in_x0 + 0xa0);
    }
    uVar17 = (ulong)(iVar20 * 3);
    uVar19 = uVar17 * 2;
    if (CARRY8(uVar17,uVar17)) {
      uVar19 = 0xffffffffffffffff;
    }
    this = operator_new__(uVar19);
    pvVar15 = *(void **)(in_x0 + 0x98);
    *(Vector2 **)(in_x0 + 0x98) = this;
    if (pvVar15 != (void *)0x0) {
      operator_delete__(pvVar15);
      this = extraout_x0;
    }
    puVar18 = *(undefined8 **)(in_x0 + 0x88);
    *puVar18 = 0;
    *(undefined4 *)(puVar18 + 1) = 0;
    *(float *)((long)puVar18 + 0xc) = local_74;
    dVar14 = DAT_00684790;
    fVar13 = DAT_00683f68;
    uVar19 = (ulong)*(uint *)(in_x0 + 0xb8);
    if (0 < (int)*(uint *)(in_x0 + 0xb8)) {
      lVar21 = 0;
      iVar20 = 0;
      lVar22 = 0;
      do {
        this = (Vector2 *)
               Vector2::FromAngle(this,(float)((double)((float)(int)lVar22 / (float)(int)uVar19) *
                                              dVar14));
        uVar4 = iVar20 + 1;
        uVar3 = uVar4 & 0xffff;
        fVar23 = *(float *)(in_x0 + 0xb4) * fVar13;
        pfVar1 = (float *)(*(long *)(in_x0 + 0x88) + (ulong)uVar3 * 0x10);
        *pfVar1 = local_80 * fVar23;
        pfVar1[1] = fVar23 * fStack_7c;
        uVar5 = uVar3 + 1;
        pfVar1[2] = 0.0;
        pfVar1[3] = local_74;
        fVar23 = *(float *)(in_x0 + 0xb4);
        pfVar1 = (float *)(*(long *)(in_x0 + 0x88) + (ulong)uVar5 * 0x10);
        *pfVar1 = local_80 * fVar23;
        pfVar1[1] = fStack_7c * fVar23;
        pfVar1[2] = 0.0;
        pfVar1[3] = 0.0;
        uVar7 = (undefined2)(iVar20 + 3U);
        local_70 = CONCAT26((short)uVar5,CONCAT24(uVar7,uVar4)) & 0xffffffff0000ffff;
        uStack_68._0_4_ = CONCAT22(uVar7,(short)uVar4);
        uStack_68._0_6_ = CONCAT24((short)uVar5,(undefined4)uStack_68);
        uStack_68 = CONCAT26(uVar7,(undefined6)uStack_68);
        local_60 = (short)(iVar20 + 4U);
        iVar6 = *(int *)(in_x0 + 0x90);
        sVar11 = (short)iVar20;
        sVar12 = (short)iVar6;
        if (iVar6 <= (int)uVar3) {
          local_70 = CONCAT62(local_70._2_6_,(sVar11 - sVar12) + 2);
        }
        sVar8 = 1 - sVar12;
        if (iVar6 < 1) {
          local_70._0_4_ = CONCAT22(sVar8,(undefined2)local_70);
        }
        uVar4 = iVar20 + 3U & 0xffff;
        if (iVar6 <= (int)uVar4) {
          local_70._0_6_ = CONCAT24((sVar11 - sVar12) + 4,(undefined4)local_70);
        }
        uVar5 = uVar5 & 0xfffe;
        if (iVar6 <= (int)uVar5) {
          local_70 = CONCAT26(sVar8 + (short)uVar5,(undefined6)local_70);
        }
        uVar19 = uStack_68;
        if (iVar6 <= (int)uVar3) {
          uStack_68 = CONCAT62(uStack_68._2_6_,(sVar11 - sVar12) + 2);
          uVar19 = uStack_68;
        }
        if (iVar6 <= (int)uVar4) {
          uStack_68._4_4_ = (undefined4)(uVar19 >> 0x20);
          uStack_68._0_4_ = CONCAT22((sVar11 - sVar12) + 4,(short)uVar19);
          uVar19 = uStack_68;
        }
        uStack_68 = uVar19;
        if (iVar6 <= (int)uVar5) {
          uStack_68._6_2_ = (undefined2)(uVar19 >> 0x30);
          uStack_68._0_4_ = (undefined4)uVar19;
          uStack_68._0_6_ = CONCAT24(sVar8 + (short)uVar5,(undefined4)uStack_68);
        }
        if (iVar6 <= (int)uVar4) {
          uStack_68 = CONCAT26((sVar11 - sVar12) + 4,(undefined6)uStack_68);
        }
        if (iVar6 <= (int)(iVar20 + 4U & 0xfffe)) {
          local_60 = (sVar11 - sVar12) + 5;
        }
        lVar22 = lVar22 + 1;
        iVar20 = iVar20 + 2;
        puVar2 = (ulong *)(*(long *)(in_x0 + 0x98) + lVar21);
        *(short *)(puVar2 + 2) = local_60;
        lVar21 = lVar21 + 0x12;
        puVar2[1] = uStack_68;
        *puVar2 = local_70;
        uVar19 = (ulong)*(int *)(in_x0 + 0xb8);
      } while (lVar22 < (long)uVar19);
    }
  }
  if (*(long *)(lVar10 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


