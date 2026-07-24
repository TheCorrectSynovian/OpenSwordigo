/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003c5630
 * Function: Caver::SwingableWeaponComponent::UpdateTransform
 * Signature: undefined __thiscall UpdateTransform(SwingableWeaponComponent * this, Matrix4 * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SwingableWeaponComponent::UpdateTransform(Caver::Matrix4 const&) */

void __thiscall
Caver::SwingableWeaponComponent::UpdateTransform(SwingableWeaponComponent *this,Matrix4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  SceneObject *this_00;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a0;
  undefined4 local_98;
  undefined8 local_90;
  float local_88;
  undefined8 local_80;
  undefined8 auStack_78 [6];
  undefined8 uStack_48;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_90 = *(undefined8 *)(param_1 + 0x30);
  local_88 = *(float *)(param_1 + 0x38);
  this_00 = *(SceneObject **)(this + 0x28);
  Vector2::Vector2((Vector2 *)&local_80,(Vector3 *)&local_90);
  if ((DAT_00683488 < ABS((float)local_80 - *(float *)(this_00 + 0x70))) ||
     (DAT_00683488 < ABS(local_80._4_4_ - *(float *)(this_00 + 0x74)))) {
    *(float *)(this_00 + 0x70) = (float)local_80;
    *(float *)(this_00 + 0x74) = local_80._4_4_;
    if (this_00[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
    }
  }
  *(float *)(*(long *)(this + 0x28) + 0x78) = local_88;
  uStack_48 = *(undefined8 *)(param_1 + 0x38);
  auStack_78[5] = *(undefined8 *)(param_1 + 0x30);
  local_b8 = -local_88;
  auStack_78[4] = *(undefined8 *)(param_1 + 0x28);
  auStack_78[3] = *(undefined8 *)(param_1 + 0x20);
  local_c0 = CONCAT44(-(float)((ulong)local_90 >> 0x20),-(float)local_90);
  auStack_78[2] = *(undefined8 *)(param_1 + 0x18);
  auStack_78[1] = *(undefined8 *)(param_1 + 0x10);
  auStack_78[0] = *(undefined8 *)(param_1 + 8);
  local_80 = *(undefined8 *)param_1;
  Matrix4::PreTranslate((Matrix4 *)&local_80,(Vector3 *)&local_c0);
  lVar9 = *(long *)(this + 0x158);
  if (lVar9 != 0) {
    puVar1 = (undefined4 *)(lVar9 + 0xb0);
    puVar7 = (undefined4 *)(lVar9 + 0x74);
    puVar6 = puVar1;
    if (puVar1 <= puVar7) {
      puVar6 = puVar7;
    }
    uVar5 = ((ulong)((long)puVar6 + (-0x71 - lVar9)) >> 2) + 1;
    puVar6 = (undefined4 *)(lVar9 + 0x70);
    puVar8 = &local_80;
    if (7 < uVar5) {
      puVar2 = puVar1;
      if (puVar1 <= puVar7) {
        puVar2 = puVar7;
      }
      uVar12 = (long)puVar2 + (-0x71 - lVar9);
      if (((undefined4 *)((long)&local_80 + (uVar12 & 0xfffffffffffffffc) + 4) <= puVar6) ||
         ((undefined8 *)(lVar9 + (uVar12 + 0x74 & 0xfffffffffffffffc)) <= &local_80)) {
        uVar11 = uVar5 & 0x7ffffffffffffff8;
        puVar8 = (undefined8 *)(lVar9 + 0x80);
        puVar10 = auStack_78 + 1;
        uVar12 = uVar11;
        do {
          puVar4 = puVar10 + -1;
          uVar13 = puVar10[-2];
          uVar15 = puVar10[1];
          uVar14 = *puVar10;
          uVar12 = uVar12 - 8;
          puVar10 = puVar10 + 4;
          puVar8[-1] = *puVar4;
          puVar8[-2] = uVar13;
          puVar8[1] = uVar15;
          *puVar8 = uVar14;
          puVar8 = puVar8 + 4;
        } while (uVar12 != 0);
        puVar6 = (undefined4 *)(lVar9 + uVar11 * 4 + 0x70);
        puVar8 = (undefined8 *)((long)&local_80 + uVar11 * 4);
        if (uVar5 == uVar11) goto LAB_003c58d8;
      }
    }
    do {
      puVar7 = puVar6 + 1;
      *puVar6 = *(undefined4 *)puVar8;
      puVar6 = puVar7;
      puVar8 = (undefined8 *)((long)puVar8 + 4);
    } while (puVar7 < puVar1);
    goto LAB_003c58d8;
  }
  lVar9 = *(long *)(this + 0x88);
  if (lVar9 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x78),(Component *)this);
    lVar9 = *(long *)(this + 0x88);
    if (lVar9 == 0) goto LAB_003c58d8;
  }
  puVar1 = (undefined4 *)(lVar9 + 0x118);
  puVar7 = (undefined4 *)(lVar9 + 0xdc);
  puVar6 = puVar1;
  if (puVar1 <= puVar7) {
    puVar6 = puVar7;
  }
  uVar5 = ((ulong)((long)puVar6 + (-0xd9 - lVar9)) >> 2) + 1;
  puVar6 = (undefined4 *)(lVar9 + 0xd8);
  puVar8 = &local_80;
  if (uVar5 < 8) {
LAB_003c58c0:
    do {
      puVar7 = puVar6 + 1;
      *puVar6 = *(undefined4 *)puVar8;
      puVar6 = puVar7;
      puVar8 = (undefined8 *)((long)puVar8 + 4);
    } while (puVar7 < puVar1);
  }
  else {
    puVar2 = puVar1;
    if (puVar1 <= puVar7) {
      puVar2 = puVar7;
    }
    uVar12 = (long)puVar2 + (-0xd9 - lVar9);
    if ((puVar6 < (undefined4 *)((long)&local_80 + (uVar12 & 0xfffffffffffffffc) + 4)) &&
       (&local_80 < (undefined8 *)(lVar9 + (uVar12 + 0xdc & 0xfffffffffffffffc))))
    goto LAB_003c58c0;
    uVar11 = uVar5 & 0x7ffffffffffffff8;
    puVar8 = (undefined8 *)(lVar9 + 0xe8);
    puVar10 = auStack_78 + 1;
    uVar12 = uVar11;
    do {
      puVar4 = puVar10 + -1;
      uVar13 = puVar10[-2];
      uVar15 = puVar10[1];
      uVar14 = *puVar10;
      uVar12 = uVar12 - 8;
      puVar10 = puVar10 + 4;
      puVar8[-1] = *puVar4;
      puVar8[-2] = uVar13;
      puVar8[1] = uVar15;
      *puVar8 = uVar14;
      puVar8 = puVar8 + 4;
    } while (uVar12 != 0);
    puVar6 = (undefined4 *)(lVar9 + uVar11 * 4 + 0xd8);
    puVar8 = (undefined8 *)((long)&local_80 + uVar11 * 4);
    if (uVar5 != uVar11) goto LAB_003c58c0;
  }
  *(undefined1 *)(lVar9 + 0x118) = 1;
LAB_003c58d8:
  local_d0 = _DAT_00683948;
  local_c8 = 0;
  C_Matrix4Vector4Mul((float *)param_1,(float *)&local_d0,(float *)&local_c0);
  Vector3::Vector3((Vector3 *)&local_b0,(Vector4 *)&local_c0);
  local_a0 = local_b0;
  local_98 = local_a8;
  uVar5 = Vector3::IsClose((Vector3 *)&local_a0,(Vector3 *)(this + 400),DAT_00683734);
  if ((uVar5 & 1) == 0) {
    *(undefined8 *)(this + 0x184) = *(undefined8 *)(this + 400);
    *(undefined4 *)(this + 0x18c) = *(undefined4 *)(this + 0x198);
    *(undefined8 *)(this + 400) = local_a0;
    *(undefined4 *)(this + 0x198) = local_98;
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


