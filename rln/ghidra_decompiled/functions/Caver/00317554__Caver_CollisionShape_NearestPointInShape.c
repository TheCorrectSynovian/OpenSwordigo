/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00317554
 * Function: Caver::CollisionShape::NearestPointInShape
 * Signature: undefined __cdecl NearestPointInShape(Vector2 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CollisionShape::NearestPointInShape(Caver::Vector2 const&) const */

void Caver::CollisionShape::NearestPointInShape(Vector2 *param_1)

{
  long lVar1;
  Vector2 *pVVar2;
  Vector2 *in_x1;
  undefined8 *in_x8;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_80;
  float local_78;
  float fStack_74;
  Vector2 aVStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (*(int *)param_1 == 1) {
    uStack_58 = (*(undefined8 **)(param_1 + 8))[1];
    local_60 = **(undefined8 **)(param_1 + 8);
    if (param_1[0x28] != (Vector2)0x0) {
      Rectangle::FlipHorizontally((Rectangle *)&local_60);
    }
    Vector2::InverseTransformed(in_x1,*(float *)(param_1 + 0x20),*(float *)(param_1 + 0x24));
    Rectangle::NearestPointInRectangle((Vector2 *)&local_60);
    fVar6 = *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_1 + 0x24);
    pVVar2 = aVStack_70;
  }
  else {
    if (*(int *)param_1 != 2) {
      *in_x8 = 0;
      goto LAB_003176a0;
    }
    pfVar3 = *(float **)(param_1 + 8);
    fVar6 = *pfVar3;
    fVar7 = pfVar3[1];
    fVar4 = pfVar3[2];
    if (param_1[0x28] != (Vector2)0x0) {
      fVar6 = -fVar6;
    }
    Vector2::InverseTransformed(in_x1,*(float *)(param_1 + 0x20),*(float *)(param_1 + 0x24));
    fVar8 = (float)local_60 - fVar6;
    fVar5 = local_60._4_4_ - fVar7;
    if (fVar8 * fVar8 + fVar5 * fVar5 <= fVar4 * fVar4) {
      *in_x8 = *(undefined8 *)in_x1;
      goto LAB_003176a0;
    }
    local_78 = fVar8;
    fStack_74 = fVar5;
    Vector2::Normalize((Vector2 *)&local_78);
    pVVar2 = (Vector2 *)&local_80;
    local_80 = CONCAT44(fStack_74 * fVar4 + fVar7,local_78 * fVar4 + fVar6);
    fVar6 = *(float *)(param_1 + 0x20);
    fVar4 = *(float *)(param_1 + 0x24);
  }
  Vector2::Transformed(pVVar2,fVar6,fVar4);
LAB_003176a0:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


