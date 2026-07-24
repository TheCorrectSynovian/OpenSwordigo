/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005ad158
 * Function: Caver::CircleIntersectsRectangle
 * Signature: undefined __cdecl CircleIntersectsRectangle(Circle * param_1, Vector2 * param_2, float param_3, float param_4, Rectangle * param_5, Vector2 * param_6, float param_7, float param_8, Vector2 * param_9, float * param_10)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CircleIntersectsRectangle(Caver::Circle const&, Caver::Vector2 const&, float, float,
   Caver::Rectangle const&, Caver::Vector2 const&, float, float, Caver::Vector2*, float*) */

void Caver::CircleIntersectsRectangle
               (Circle *param_1,Vector2 *param_2,float param_3,float param_4,Rectangle *param_5,
               Vector2 *param_6,float param_7,float param_8,Vector2 *param_9,float *param_10)

{
  long lVar1;
  float fVar2;
  bool bVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_98;
  float fStack_94;
  float local_90;
  float fStack_8c;
  Vector2 aVStack_88 [8];
  float local_80;
  float local_7c;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  Vector2::Transformed((Vector2 *)param_1,param_3,param_4);
  Vector2::InverseTransformed(aVStack_88,param_7,param_8);
                    /* catch() { ... } // from try @ 005ad134 with catch @ 005ad1e8 */
  fVar10 = (*(float *)(param_1 + 8) * param_4) / param_8;
  if (ABS(param_8 + -1.0) <= DAT_00683488) {
    fVar10 = *(float *)(param_1 + 8) * param_4;
  }
  uVar5 = RangesOverlap(local_80 - fVar10,local_80 + fVar10,*(float *)param_5,
                        *(float *)param_5 + *(float *)(param_5 + 8),&fStack_8c);
  if (((uVar5 & 1) == 0) ||
     (uVar5 = RangesOverlap(local_7c - fVar10,fVar10 + local_7c,*(float *)(param_5 + 4),
                            *(float *)(param_5 + 4) + *(float *)(param_5 + 0xc),&local_90),
     (uVar5 & 1) == 0)) {
LAB_005ad380:
    uVar6 = 0;
  }
  else {
    if ((fVar10 <= ABS(fStack_8c)) || (fVar10 <= ABS(local_90))) {
      fVar8 = local_98;
      fVar2 = fStack_94;
      if (ABS(local_90) <= ABS(fStack_8c)) {
        local_98 = 0.0;
        if (local_90 < 0.0) {
          fVar10 = -local_90;
          fStack_94 = -1.0;
        }
        else {
          fStack_94 = 1.0;
          fVar10 = local_90;
        }
      }
      else {
        fStack_94 = 0.0;
        if (fStack_8c < 0.0) {
          fVar10 = -fStack_8c;
          local_98 = -1.0;
        }
        else {
          local_98 = 1.0;
          fVar10 = fStack_8c;
        }
      }
    }
    else {
      if (0.0 <= fStack_8c) {
        fVar7 = *(float *)(param_5 + 4);
        fVar8 = *(float *)param_5 + *(float *)(param_5 + 8);
        if (0.0 <= local_90) {
          fVar7 = fVar7 + *(float *)(param_5 + 0xc);
        }
      }
      else {
        fVar8 = *(float *)param_5;
        fVar7 = *(float *)(param_5 + 4);
        if (0.0 <= local_90) {
          fVar7 = fVar7 + *(float *)(param_5 + 0xc);
        }
      }
      fVar7 = local_7c - fVar7;
      local_80 = local_80 - fVar8;
      fVar8 = ABS(local_80);
      bVar3 = false;
      bVar4 = true;
      if (ABS(fVar7) <= DAT_00683944) {
        bVar3 = false;
        bVar4 = true;
        if (!NAN(fVar8) && !NAN(DAT_00683944)) {
          bVar3 = fVar8 == DAT_00683944;
          bVar4 = DAT_00683944 <= fVar8;
        }
      }
      fVar11 = local_80 + DAT_00683944;
      if (bVar4 && !bVar3) {
        fVar11 = local_80;
      }
      fVar8 = fVar7 * fVar7 + fVar11 * fVar11;
      if (fVar10 * fVar10 <= fVar8) goto LAB_005ad380;
      fVar9 = SQRT(fVar8);
      if (NAN(fVar9)) {
        fVar9 = sqrtf(fVar8);
      }
      fVar10 = fVar10 - fVar9;
      fVar8 = local_98;
      fVar2 = fStack_94;
      fStack_94 = fVar7 * (1.0 / fVar9);
      local_98 = fVar11 * (1.0 / fVar9);
    }
    if (param_9 != (Vector2 *)0x0) {
      Vector2::Rotate((Vector2 *)&local_98,param_7);
      *(ulong *)param_9 = CONCAT44(fStack_94,local_98);
      fVar8 = local_98;
      fVar2 = fStack_94;
    }
    fStack_94 = fVar2;
    local_98 = fVar8;
    if (param_10 != (float *)0x0) {
      *param_10 = fVar10 * param_8;
    }
    uVar6 = 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


