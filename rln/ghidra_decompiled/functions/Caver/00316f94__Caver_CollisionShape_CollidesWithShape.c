/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00316f94
 * Function: Caver::CollisionShape::CollidesWithShape
 * Signature: undefined __thiscall CollidesWithShape(CollisionShape * this, CollisionShape * param_1, float param_2, CollisionInfo * param_3)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CollisionShape::CollidesWithShape(Caver::CollisionShape const&, float,
   Caver::CollisionInfo*) const */

void __thiscall
Caver::CollisionShape::CollidesWithShape
          (CollisionShape *this,CollisionShape *param_1,float param_2,CollisionInfo *param_3)

{
  CollisionShape *pCVar1;
  int iVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  Polygon *pPVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((*(float *)(this + 0x38) < *(float *)(param_1 + 0x34) + DAT_00683734) ||
     (*(float *)(param_1 + 0x38) + DAT_006837a4 < *(float *)(this + 0x34))) goto LAB_003172e0;
  pCVar1 = this + 0x18;
  local_60 = *(undefined8 *)pCVar1;
  if (*(int *)this == 2) {
    local_90 = **(undefined8 **)(this + 8);
    fVar8 = *(float *)(*(undefined8 **)(this + 8) + 1);
    uStack_88 = CONCAT44(uStack_88._4_4_,fVar8);
    if (this[0x28] != (CollisionShape)0x0) {
      fVar9 = (float)local_90;
      local_90._4_4_ = (undefined4)((ulong)local_90 >> 0x20);
      local_90 = CONCAT44(local_90._4_4_,-fVar9);
    }
    fVar9 = *(float *)(this + 0x2c) * param_2;
    fVar10 = *(float *)(this + 0x30) * param_2;
    if (((DAT_00683944 < ABS(fVar9)) || (DAT_00683944 < ABS(fVar10))) &&
       (fVar8 = *(float *)(this + 0x24) * fVar8, fVar8 * fVar8 < fVar9 * fVar9 + fVar10 * fVar10)) {
      local_80 = CONCAT44(*(float *)(this + 0x1c) - fVar10,*(float *)pCVar1 - fVar9);
      uStack_78 = *(undefined8 *)pCVar1;
      uVar5 = IntersectsWithLineSegment
                        (param_1,(LineSegment *)&local_80,(Vector2 *)&local_68,(Vector2 *)0x0,
                         (int *)0x0);
      if ((uVar5 & 1) != 0) {
        local_60 = local_68;
      }
    }
    iVar2 = *(int *)param_1;
    if (iVar2 == 1) {
      uStack_78 = (*(undefined8 **)(param_1 + 8))[1];
      local_80 = **(undefined8 **)(param_1 + 8);
      if (param_1[0x28] != (CollisionShape)0x0) {
        Rectangle::FlipHorizontally((Rectangle *)&local_80);
      }
      uVar4 = CircleIntersectsRectangle
                        ((Circle *)&local_90,(Vector2 *)&local_60,*(float *)(this + 0x20),
                         *(float *)(this + 0x24),(Rectangle *)&local_80,(Vector2 *)(param_1 + 0x18),
                         *(float *)(param_1 + 0x20),*(float *)(param_1 + 0x24),(Vector2 *)&local_68,
                         &local_98);
LAB_003172a0:
      iVar2 = *(int *)param_1;
      uVar4 = uVar4 & 1;
    }
    else {
      if (iVar2 == 2) {
        local_80 = **(undefined8 **)(param_1 + 8);
        uStack_78 = CONCAT44(uStack_78._4_4_,*(undefined4 *)(*(undefined8 **)(param_1 + 8) + 1));
        if (param_1[0x28] != (CollisionShape)0x0) {
          fVar8 = (float)local_80;
          uVar5 = (ulong)local_80 >> 0x20;
          local_80 = CONCAT44((int)uVar5,-fVar8);
        }
        uVar4 = CircleIntersectsCircle
                          ((Circle *)&local_90,(Vector2 *)&local_60,*(float *)(this + 0x20),
                           *(float *)(this + 0x24),(Circle *)&local_80,(Vector2 *)(param_1 + 0x18),
                           *(float *)(param_1 + 0x20),*(float *)(param_1 + 0x24),
                           (Vector2 *)&local_68,&local_98);
        goto LAB_003172a0;
      }
      uVar4 = 0;
    }
    if ((iVar2 == 3) &&
       (uVar5 = CircleIntersectsPolygon
                          ((Circle *)&local_90,(Vector2 *)&local_60,*(float *)(this + 0x20),
                           *(float *)(this + 0x24),*(Polygon **)(param_1 + 8),
                           (Vector2 *)(param_1 + 0x18),*(float *)(param_1 + 0x20),
                           *(float *)(param_1 + 0x24),(Vector2 *)&local_68,&local_98),
       (uVar5 & 1) != 0)) {
      uVar4 = 1;
    }
    if (uVar4 != 0) {
joined_r0x003173f4:
      uVar6 = 1;
      if (param_3 != (CollisionInfo *)0x0) {
        uVar6 = 1;
        *(undefined8 *)param_3 = local_60;
        *(undefined8 *)(param_3 + 8) = *(undefined8 *)(this + 0x2c);
        *(undefined8 *)(param_3 + 0x10) = *(undefined8 *)(param_1 + 0x2c);
        *(undefined8 *)(param_3 + 0x18) = local_68;
        param_3[0x24] = (CollisionInfo)0x1;
        *(float *)(param_3 + 0x20) = local_98;
      }
      goto LAB_003172e4;
    }
  }
  else if (*(int *)this == 1) {
    uStack_78 = (*(undefined8 **)(this + 8))[1];
    local_80 = **(undefined8 **)(this + 8);
    if (this[0x28] != (CollisionShape)0x0) {
      Rectangle::FlipHorizontally((Rectangle *)&local_80);
    }
    fVar9 = *(float *)(this + 0x2c) * param_2;
    fVar8 = *(float *)(this + 0x30) * param_2;
    if ((DAT_00683944 < ABS(fVar9)) || (DAT_00683944 < ABS(fVar8))) {
      fVar10 = *(float *)(this + 0x24);
      local_68 = _DAT_00683948;
      Vector2::Rotate((Vector2 *)&local_68,*(float *)(this + 0x20));
      if ((fVar10 * (float)uStack_78 < ABS(fVar8 * local_68._4_4_ + fVar9 * (float)local_68)) ||
         (fVar10 * uStack_78._4_4_ < ABS(fVar8 * (float)local_68 - fVar9 * local_68._4_4_))) {
        local_90 = CONCAT44(local_60._4_4_ - fVar8,(float)local_60 - fVar9);
        uStack_88 = local_60;
        uVar5 = IntersectsWithLineSegment
                          (param_1,(LineSegment *)&local_90,(Vector2 *)&local_98,(Vector2 *)0x0,
                           (int *)0x0);
        if ((uVar5 & 1) != 0) {
          local_60 = CONCAT44(uStack_94,local_98);
        }
      }
    }
    iVar2 = *(int *)param_1;
    if (iVar2 == 1) {
      uStack_88 = (*(undefined8 **)(param_1 + 8))[1];
      local_90 = **(undefined8 **)(param_1 + 8);
      if (param_1[0x28] != (CollisionShape)0x0) {
        Rectangle::FlipHorizontally((Rectangle *)&local_90);
      }
      uVar5 = RectangleIntersectsRectangle
                        ((Rectangle *)&local_80,(Vector2 *)&local_60,*(float *)(this + 0x20),
                         *(float *)(this + 0x24),(Rectangle *)&local_90,(Vector2 *)(param_1 + 0x18),
                         *(float *)(param_1 + 0x20),*(float *)(param_1 + 0x24),(Vector2 *)&local_68,
                         &local_98,(Vector2 *)(this + 0x3c));
joined_r0x00317368:
      if ((uVar5 & 1) == 0) goto LAB_003172e0;
      goto joined_r0x003173f4;
    }
    if (iVar2 == 2) {
      local_90 = **(undefined8 **)(param_1 + 8);
      uStack_88 = CONCAT44(uStack_88._4_4_,*(undefined4 *)(*(undefined8 **)(param_1 + 8) + 1));
      if (param_1[0x28] != (CollisionShape)0x0) {
        fVar8 = (float)local_90;
        local_90._4_4_ = (undefined4)((ulong)local_90 >> 0x20);
        local_90 = CONCAT44(local_90._4_4_,-fVar8);
      }
      uVar5 = CircleIntersectsRectangle
                        ((Circle *)&local_90,(Vector2 *)(param_1 + 0x18),*(float *)(param_1 + 0x20),
                         *(float *)(param_1 + 0x24),(Rectangle *)&local_80,(Vector2 *)&local_60,
                         *(float *)(this + 0x20),*(float *)(this + 0x24),(Vector2 *)&local_68,
                         &local_98);
      if ((uVar5 & 1) != 0) {
        local_68 = CONCAT44(-(float)((ulong)local_68 >> 0x20),-(float)local_68);
        goto joined_r0x003173f4;
      }
    }
    else if (iVar2 == 3) {
      pPVar7 = *(Polygon **)(param_1 + 8);
      if (pPVar7[0x20] == (Polygon)0x0) {
        uVar5 = RectangleIntersectsPolygon
                          ((Rectangle *)&local_80,(Vector2 *)&local_60,*(float *)(this + 0x20),
                           *(float *)(this + 0x24),pPVar7,(Vector2 *)(param_1 + 0x18),
                           *(float *)(param_1 + 0x20),*(float *)(param_1 + 0x24),
                           (Vector2 *)&local_68,&local_98,(Vector2 *)(this + 0x3c));
        goto joined_r0x00317368;
      }
      uVar5 = RectangleIntersectsConvexPolygon
                        ((Rectangle *)&local_80,(Vector2 *)&local_60,*(float *)(this + 0x20),
                         *(float *)(this + 0x24),pPVar7,(Vector2 *)(param_1 + 0x18),
                         *(float *)(param_1 + 0x20),*(float *)(param_1 + 0x24),(Vector2 *)&local_68,
                         &local_98);
      if ((uVar5 & 1) != 0) goto joined_r0x003173f4;
    }
  }
LAB_003172e0:
  uVar6 = 0;
LAB_003172e4:
  if (*(long *)(lVar3 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


