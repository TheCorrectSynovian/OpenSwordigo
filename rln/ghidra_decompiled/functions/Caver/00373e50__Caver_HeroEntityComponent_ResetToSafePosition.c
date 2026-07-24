/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00373e50
 * Function: Caver::HeroEntityComponent::ResetToSafePosition
 * Signature: undefined __thiscall ResetToSafePosition(HeroEntityComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::HeroEntityComponent::ResetToSafePosition() */

void __thiscall Caver::HeroEntityComponent::ResetToSafePosition(HeroEntityComponent *this)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  SceneObject *this_00;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  long *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 *puStack_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar6 = *(undefined8 **)(this + 400);
  local_d0 = (undefined4)*puVar6;
  uStack_cc = (undefined4)((ulong)*puVar6 >> 0x20);
  local_c8 = *(undefined4 *)(puVar6 + 1);
  local_c0 = (long *)puVar6[2];
  if (local_c0 != (long *)0x0) {
    *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
  }
  uStack_b0 = puVar6[4];
  local_b8 = puVar6[3];
  this_00 = *(SceneObject **)(this + 0x28);
  Vector2::Vector2((Vector2 *)&local_88,(Vector3 *)&local_d0);
  if ((DAT_00683488 < ABS((float)local_88 - *(float *)(this_00 + 0x70))) ||
     (DAT_00683488 < ABS(local_88._4_4_ - *(float *)(this_00 + 0x74)))) {
    *(float *)(this_00 + 0x70) = (float)local_88;
    *(float *)(this_00 + 0x74) = local_88._4_4_;
    if (this_00[0xb4] == (SceneObject)0x0) {
      SceneObject::RegisterForWorldBoundsUpdate(this_00);
      this_00[0xb4] = (SceneObject)0x1;
    }
  }
  *(undefined4 *)(this_00 + 0x78) = local_c8;
  *(undefined8 *)(*(long *)(this + 0x28) + 0x68) = 0;
  puVar1 = *(undefined4 **)(this + 400);
  uVar2 = *(undefined8 *)(this + 0x198);
  lVar7 = *(long *)(this + 0x1a0);
  puVar6 = *(undefined8 **)(this + 0x1a8);
  uStack_a0 = *(undefined8 *)(this + 0x1b8);
  local_a8 = *(undefined8 *)(this + 0x1b0);
  local_98 = *(undefined8 *)(this + 0x1c0);
  uStack_90 = *(undefined8 *)(this + 0x1c8);
  local_88 = puVar1;
  uStack_80 = uVar2;
  local_78 = lVar7;
  puStack_70 = puVar6;
  std::
  deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
  ::_M_destroy_data_aux
            ((deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
              *)(this + 0x180),&local_88,&local_a8);
  puVar8 = *(undefined8 **)(this + 0x1c8);
  puVar9 = puVar6;
  while (puVar9 < puVar8) {
    puVar9 = puVar9 + 1;
    operator_delete((void *)*puVar9);
  }
  *(undefined4 **)(this + 0x1b0) = puVar1;
  *(undefined8 *)(this + 0x1b8) = uVar2;
  *(long *)(this + 0x1c0) = lVar7;
  *(undefined8 **)(this + 0x1c8) = puVar6;
  if ((undefined4 *)(lVar7 + -0x28) == puVar1) {
    if ((ulong)(*(long *)(this + 0x188) - ((long)puVar6 - *(long *)(this + 0x180) >> 3)) < 2) {
      std::
      deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
      ::_M_reallocate_map((deque<Caver::HeroEntityComponent::SafePosition,std::allocator<Caver::HeroEntityComponent::SafePosition>>
                           *)(this + 0x180),1,false);
    }
    pvVar5 = operator_new(0x1e0);
    *(void **)(*(long *)(this + 0x1c8) + 8) = pvVar5;
    puVar6 = *(undefined8 **)(this + 0x1b0);
    *puVar6 = CONCAT44(uStack_cc,local_d0);
    *(undefined4 *)(puVar6 + 1) = local_c8;
    puVar6[2] = local_c0;
    if (local_c0 != (long *)0x0) {
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    }
    puVar6[4] = uStack_b0;
    puVar6[3] = local_b8;
    lVar7 = *(long *)(this + 0x1c8);
    *(long *)(this + 0x1c8) = lVar7 + 8;
    lVar7 = *(long *)(lVar7 + 8);
    *(long *)(this + 0x1b0) = lVar7;
    *(long *)(this + 0x1b8) = lVar7;
    *(long *)(this + 0x1c0) = lVar7 + 0x1e0;
  }
  else {
    *puVar1 = local_d0;
    *(ulong *)(puVar1 + 1) = CONCAT44(local_c8,uStack_cc);
    *(long **)(puVar1 + 4) = local_c0;
    if (local_c0 != (long *)0x0) {
      *(int *)(local_c0 + 1) = (int)local_c0[1] + 1;
    }
    *(undefined8 *)(puVar1 + 8) = uStack_b0;
    *(undefined8 *)(puVar1 + 6) = local_b8;
    *(undefined4 **)(this + 0x1b0) = puVar1 + 10;
  }
  if ((local_c0 != (long *)0x0) &&
     (iVar3 = (int)local_c0[1] + -1, *(int *)(local_c0 + 1) = iVar3, iVar3 == 0)) {
    (**(code **)(*local_c0 + 8))();
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


