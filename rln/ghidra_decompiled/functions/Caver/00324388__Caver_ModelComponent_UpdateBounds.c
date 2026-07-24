/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00324388
 * Function: Caver::ModelComponent::UpdateBounds
 * Signature: undefined __thiscall UpdateBounds(ModelComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ModelComponent::UpdateBounds() */

void __thiscall Caver::ModelComponent::UpdateBounds(ModelComponent *this)

{
  bool bVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  float fVar7;
  ModelComponent *pMVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  float *pfVar12;
  long *plVar13;
  long lVar14;
  ulong uVar15;
  float local_140;
  float fStack_13c;
  float local_138;
  undefined4 uStack_134;
  Vector4 aVStack_130 [16];
  undefined8 local_120;
  float local_118;
  undefined8 local_110;
  float local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  if (*(long *)(this + 0x88) != 0) {
    uStack_98 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x28);
    local_a0 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x20);
    uStack_88 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x38);
    uStack_90 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x30);
    uStack_b8 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 8);
    local_c0 = *(undefined8 *)PTR_identityMatrix_007e74c8;
    uStack_a8 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x18);
    uStack_b0 = *(undefined8 *)(PTR_identityMatrix_007e74c8 + 0x10);
    pMVar8 = this;
    if (this[0xc0] != (ModelComponent)0x0) {
      local_100 = CONCAT44(-(float)((ulong)*(undefined8 *)(this + 0xc4) >> 0x20),
                           -(float)*(undefined8 *)(this + 0xc4));
      uStack_f8 = CONCAT44(uStack_f8._4_4_,-*(float *)(this + 0xcc));
      pMVar8 = (ModelComponent *)Matrix4::PostTranslate((Matrix4 *)&local_c0,(Vector3 *)&local_100);
    }
    fVar7 = DAT_00683734;
    if (DAT_00683734 < ABS(*(float *)(this + 0xd0))) {
      Matrix4::RotationX((Matrix4 *)pMVar8,*(float *)(this + 0xd0));
      pMVar8 = (ModelComponent *)
               C_Matrix4Mul((float *)&local_c0,(float *)&local_100,(float *)&local_c0);
    }
    if (fVar7 < ABS(*(float *)(this + 0xd4))) {
      Matrix4::RotationY((Matrix4 *)pMVar8,*(float *)(this + 0xd4));
      C_Matrix4Mul((float *)&local_c0,(float *)&local_100,(float *)&local_c0);
    }
    bVar1 = *(long *)(*(ModelInstance **)(this + 0x88) + 0x18) == 0;
    if (!bVar1) {
      ModelInstance::SkinMeshes(*(ModelInstance **)(this + 0x88),(Matrix4 *)&local_c0);
    }
    lVar14 = 0;
    pMVar8 = this + 300;
    uStack_f8 = _UNK_00684018;
    local_100 = _DAT_00684010;
    *(undefined8 *)pMVar8 = _LAB_00684020;
    while( true ) {
      lVar10 = **(long **)(this + 0x88);
      plVar13 = (long *)(*(long **)(this + 0x88))[1];
      if (plVar13 != (long *)0x0) {
        plVar13[1] = plVar13[1] + 1;
      }
      lVar3 = *(long *)(lVar10 + 8);
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((plVar13 != (long *)0x0) && (lVar9 = plVar13[1], plVar13[1] = lVar9 + -1, lVar9 + -1 == 0)
         ) {
        (**(code **)(*plVar13 + 0x10))(plVar13);
        lVar9 = plVar13[2];
        plVar13[2] = lVar9 + -1;
        if (lVar9 + -1 == 0) {
          (**(code **)(*plVar13 + 0x18))(plVar13);
        }
      }
      if ((lVar10 - lVar3) * 0x10000000 >> 0x20 <= lVar14) break;
      plVar13 = *(long **)(*(long *)(*(long *)(this + 0x88) + 0x28) + lVar14 * 0x10);
      cVar4 = (char)plVar13[2];
      if (cVar4 == '\0') {
        lVar10 = plVar13[5];
      }
      else {
        lVar10 = *(long *)(*plVar13 + 0x30);
      }
      if ((lVar10 != 0) && (piVar11 = (int *)*plVar13, *piVar11 != 0)) {
        uVar15 = 0;
        while( true ) {
          plVar2 = plVar13 + 3;
          plVar6 = plVar13 + 5;
          if (cVar4 != '\0') {
            plVar2 = (long *)(piVar11 + 8);
            plVar6 = (long *)(piVar11 + 0xc);
          }
          pfVar12 = (float *)(*plVar6 + uVar15 * *(uint *)(plVar2 + 1));
          local_110 = *(undefined8 *)pfVar12;
          local_108 = pfVar12[2];
          if (bVar1) {
            uStack_134 = 0x3f800000;
            local_140 = *pfVar12;
            fStack_13c = pfVar12[1];
            local_138 = local_108;
            C_Matrix4Vector4Mul((float *)&local_c0,&local_140,(float *)aVStack_130);
            Vector3::Vector3((Vector3 *)&local_120,aVStack_130);
            local_110 = local_120;
            local_108 = local_118;
          }
          Vector2::Vector2((Vector2 *)aVStack_130,(Vector3 *)&local_110);
          Rectangle::ExpandToIncludePoint((Rectangle *)&local_100,(Vector2 *)aVStack_130);
          if (local_108 < *(float *)pMVar8) {
            *(float *)pMVar8 = local_108;
          }
          if (*(float *)(this + 0x130) < local_108) {
            *(float *)(this + 0x130) = local_108;
          }
          piVar11 = (int *)*plVar13;
          uVar15 = uVar15 + 1;
          if ((ulong)(long)*piVar11 <= uVar15) break;
          cVar4 = (char)plVar13[2];
        }
      }
      lVar14 = lVar14 + 1;
    }
    *(undefined8 *)(this + 0x124) = uStack_f8;
    *(undefined8 *)(this + 0x11c) = local_100;
  }
  Component::UpdateObjectBounds((Component *)this);
  if (*(long *)(lVar5 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


