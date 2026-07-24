/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00369460
 * Function: Caver::EntityComponent::HandleMessage
 * Signature: undefined __thiscall HandleMessage(EntityComponent * this, int param_1, void * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::EntityComponent::HandleMessage(int, void*) */

undefined8 __thiscall
Caver::EntityComponent::HandleMessage(EntityComponent *this,int param_1,void *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  undefined1 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  CollisionShape *this_00;
  CollisionShape *pCVar9;
  ulong uVar10;
  CollisionShapeComponent *pCVar11;
  CollisionShapeComponent *pCVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  float fVar17;
  CollisionShapeComponent *local_d8;
  CollisionShapeComponent *pCStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  float local_a8;
  undefined1 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  float local_80;
  undefined1 local_7c;
  long local_78;
  
  puVar7 = PTR_Interface_007e4ee0;
  fVar3 = DAT_00687f44;
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  if (param_1 == 9) {
    if ((((this[0x114] == (EntityComponent)0x0) &&
         (pCVar11 = *(CollisionShapeComponent **)param_2,
         pCVar11[0x17b] != (CollisionShapeComponent)0x0)) &&
        (pCVar12 = *(CollisionShapeComponent **)((long)param_2 + 8),
        pCVar12[0x17a] != (CollisionShapeComponent)0x0)) &&
       (fVar3 = *(float *)((long)param_2 + 0x2c), fVar3 < DAT_00684430)) {
      lVar8 = *(long *)(this + 0x28);
      fVar4 = *(float *)((long)param_2 + 0x28);
      fVar17 = *(float *)((long)param_2 + 0x30);
      if (*(float *)(lVar8 + 0x68) * fVar4 + *(float *)(lVar8 + 0x6c) * fVar3 < fVar17) {
        uVar15 = *(undefined8 *)((long)param_2 + 0x10);
        uVar1 = *(undefined8 *)((long)param_2 + 0x18);
        uVar2 = *(undefined8 *)((long)param_2 + 0x20);
        uVar5 = *(undefined1 *)((long)param_2 + 0x34);
        if (((_DAT_00684434 <= *(float *)(this + 0x80)) || (*(float *)(this + 0x8c) <= 0.0)) ||
           (DAT_00687f40 < *(float *)(this + 0x88) * fVar4 + *(float *)(this + 0x8c) * fVar3)) {
          uVar14 = *(undefined8 *)(lVar8 + 0x70);
          uVar16 = *(undefined8 *)(*(long *)(pCVar11 + 0x28) + 0x70);
          HandleGroundCollision(this,param_2);
          uStack_b0 = CONCAT44(fVar3,fVar4);
          local_d8 = pCVar11;
          pCStack_d0 = pCVar12;
          local_c8 = CONCAT44((float)((ulong)uVar15 >> 0x20) +
                              ((float)((ulong)uVar14 >> 0x20) - (float)((ulong)uVar16 >> 0x20)),
                              (float)uVar15 + ((float)uVar14 - (float)uVar16));
          uStack_c0 = uVar1;
          local_b8 = uVar2;
          local_a8 = fVar17;
          local_a4 = uVar5;
          SceneObject::HandleMessage(*(SceneObject **)(this + 0x28),0x15,&local_d8);
        }
      }
    }
  }
  else if (param_1 == 7) {
    uStack_98 = *(undefined8 *)((long)param_2 + 0x18);
    local_a0 = *(undefined8 *)((long)param_2 + 0x10);
    uStack_88 = *(undefined8 *)((long)param_2 + 0x28);
    local_90 = *(undefined8 *)((long)param_2 + 0x20);
    local_7c = *(undefined1 *)((long)param_2 + 0x34);
    local_80 = *(float *)((long)param_2 + 0x30);
    pCVar11 = *(CollisionShapeComponent **)param_2;
    if (((pCVar11[0x17b] != (CollisionShapeComponent)0x0) &&
        (pCVar12 = *(CollisionShapeComponent **)((long)param_2 + 8),
        pCVar12[0x17a] != (CollisionShapeComponent)0x0)) &&
       (*(long *)(*(long *)(pCVar12 + 0x28) + 0x30) == 0)) {
      uVar13 = 0;
      fVar4 = (float)((ulong)uStack_88 >> 0x20);
      while (((fVar3 <= fVar4 || (pCVar12[0x17b] == (CollisionShapeComponent)0x0)) ||
             (lVar8 = SceneObject::ComponentWithInterface
                                (*(SceneObject **)(pCVar12 + 0x28),(long)puVar7), lVar8 == 0))) {
        HandleGroundCollision(this,param_2);
        uStack_c0 = uStack_98;
        local_c8 = local_a0;
        uStack_b0 = uStack_88;
        local_b8 = local_90;
        local_a4 = local_7c;
        local_a8 = local_80;
        local_d8 = pCVar11;
        pCStack_d0 = pCVar12;
        SceneObject::HandleMessage(*(SceneObject **)(this + 0x28),0x15,&local_d8);
        this_00 = (CollisionShape *)CollisionShapeComponent::collisionShape(pCVar11);
        pCVar9 = (CollisionShape *)CollisionShapeComponent::collisionShape(pCVar12);
        uVar10 = CollisionShape::CollidesWithShape(this_00,pCVar9,0.0,(CollisionInfo *)&local_a0);
        if (((uVar10 & 1) == 0) || (1 < uVar13)) break;
        uVar13 = uVar13 + 1;
        fVar4 = uStack_88._4_4_;
      }
    }
  }
  if (*(long *)(lVar6 + 0x28) == local_78) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


