/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039a4a8
 * Function: Caver::MonsterDeathControllerComponent::FindOriginAndRadius
 * Signature: undefined __thiscall FindOriginAndRadius(MonsterDeathControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::MonsterDeathControllerComponent::FindOriginAndRadius() */

void __thiscall
Caver::MonsterDeathControllerComponent::FindOriginAndRadius(MonsterDeathControllerComponent *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  long lVar5;
  bool bVar6;
  float fVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  float *pfVar11;
  CollisionShapeComponent *this_00;
  Vector2 *pVVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  undefined1 auStack_110 [4];
  float local_10c;
  float local_104;
  float local_100 [2];
  float local_f8;
  float local_f0;
  float fStack_ec;
  undefined1 auStack_e8 [12];
  float fStack_dc;
  undefined1 auStack_d8 [8];
  float local_d0 [2];
  undefined1 auStack_c8 [12];
  float local_bc;
  undefined1 auStack_b8 [8];
  float local_b0;
  undefined8 local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  lVar10 = *(long *)(this + 0x28);
  *(undefined4 *)(this + 0x94) = 0;
  *(undefined4 *)(this + 0x98) = 0;
  uVar4 = *(undefined4 *)(lVar10 + 0x70);
  uVar1 = *(undefined4 *)(lVar10 + 0x74);
  uVar2 = *(undefined4 *)(lVar10 + 0x78);
  *(undefined4 *)(this + 0xa4) = uVar2;
  *(undefined4 *)(this + 0xa8) = 0x40a00000;
  *(undefined4 *)(this + 0x9c) = uVar4;
  *(undefined4 *)(this + 0xa0) = uVar1;
  *(undefined4 *)(this + 0x88) = uVar4;
  *(undefined4 *)(this + 0x8c) = uVar1;
  *(undefined4 *)(this + 0x90) = uVar2;
  puVar8 = PTR_Interface_007e5b08;
  fVar7 = DAT_006846c0;
  puVar13 = *(undefined8 **)(*(long *)(this + 0xb8) + 0xc0);
  puVar3 = *(undefined8 **)(*(long *)(this + 0xb8) + 200);
  if (puVar13 != puVar3) {
    bVar6 = false;
    do {
      uVar9 = (**(code **)(*(long *)*puVar13 + 0xa0))((long *)*puVar13,puVar8);
      if ((uVar9 & 1) != 0) {
        this_00 = (CollisionShapeComponent *)*puVar13;
        CollisionShapeComponent::SetEnabled(this_00,false);
        (**(code **)(*(long *)this_00 + 0xe0))(local_a0,this_00);
        fVar14 = (float)local_a0._0_8_ + (float)local_a0._8_8_ * 0.5;
        fVar15 = SUB84(local_a0._0_8_,4) + SUB84(local_a0._8_8_,4) * 0.5;
        local_90 = CONCAT44(fVar15,fVar14);
        if (this_00[0x17b] != (CollisionShapeComponent)0x0) {
          if ((!bVar6) ||
             (fVar14 * fVar14 + fVar15 * fVar15 <
              *(float *)(this + 0x94) * *(float *)(this + 0x94) +
              *(float *)(this + 0x98) * *(float *)(this + 0x98))) {
            *(undefined8 *)(this + 0x94) = local_90;
            SceneObject::WorldPointFromLocalPoint(*(Vector2 **)(this + 0xb8));
            uVar1 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
            *(undefined8 *)(this + 0x9c) = local_a8;
            *(undefined4 *)(this + 0xa4) = uVar1;
            (**(code **)(*(long *)this_00 + 0xe0))(auStack_b8,this_00);
            fVar14 = local_b0;
            (**(code **)(*(long *)this_00 + 0xe0))(auStack_c8,this_00);
            if (local_bc <= fVar14) {
              (**(code **)(*(long *)this_00 + 0xe0))(auStack_e8,this_00);
              pfVar11 = &fStack_dc;
            }
            else {
              (**(code **)(*(long *)this_00 + 0xe0))(auStack_d8,this_00);
              pfVar11 = local_d0;
            }
            pVVar12 = *(Vector2 **)(this + 0xb8);
            *(float *)(this + 0xa8) = *pfVar11 * fVar7 * *(float *)(pVVar12 + 0x8c);
            (**(code **)(*(long *)this_00 + 0xe0))(local_100,this_00);
            fVar14 = local_100[0] + local_f8 * 0.5;
            (**(code **)(*(long *)this_00 + 0xe0))(auStack_110,this_00);
            fStack_ec = local_10c + local_104;
            local_f0 = fVar14;
            SceneObject::WorldPointFromLocalPoint(pVVar12);
            uVar1 = *(undefined4 *)(*(long *)(this + 0x28) + 0x78);
            *(undefined8 *)(this + 0x88) = local_a8;
            *(undefined4 *)(this + 0x90) = uVar1;
          }
          bVar6 = true;
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar3 != puVar13);
  }
  if (*(long *)(lVar5 + 0x28) == local_88) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


