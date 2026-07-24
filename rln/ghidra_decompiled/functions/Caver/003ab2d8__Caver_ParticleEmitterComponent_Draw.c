/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003ab2d8
 * Function: Caver::ParticleEmitterComponent::Draw
 * Signature: undefined __thiscall Draw(ParticleEmitterComponent * this, RenderingContext * param_1, Matrix4 * param_2, Vector3 * param_3, Vector3 * param_4)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::Draw(Caver::RenderingContext*, Caver::Matrix4 const&,
   Caver::Vector3 const&, Caver::Vector3 const&) */

void __thiscall
Caver::ParticleEmitterComponent::Draw
          (ParticleEmitterComponent *this,RenderingContext *param_1,Matrix4 *param_2,
          Vector3 *param_3,Vector3 *param_4)

{
  ComponentOutletBase *this_00;
  ParticleSystem *pPVar1;
  int iVar2;
  ParticleEmitterComponent PVar3;
  long lVar4;
  Matrix4 *pMVar5;
  long *plVar6;
  ParticleEmitterComponent *pPVar7;
  long lVar8;
  float fVar9;
  undefined8 uVar10;
  float afStack_170 [16];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  float afStack_f0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  if (*(long *)(this + 0x118) != 0) goto LAB_003ab338;
  this_00 = (ComponentOutletBase *)(this + 0x108);
  ComponentOutletBase::Connect(this_00,(Component *)this);
  if (*(long *)(this + 0x118) != 0) goto LAB_003ab338;
  ComponentOutletBase::Connect(this_00,(Component *)this);
  pPVar7 = *(ParticleEmitterComponent **)(this + 0x118);
  if ((pPVar7 == (ParticleEmitterComponent *)0x0) || (pPVar7 == this)) {
    lVar8 = *(long *)(this + 0x148);
    plVar6 = *(long **)(this + 0x150);
    if (plVar6 == (long *)0x0) goto LAB_003ab38c;
LAB_003ab3cc:
    iVar2 = *(int *)(lVar8 + 0x24);
    if (plVar6[1] == 0) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar8 = plVar6[2];
      plVar6[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        (**(code **)(*plVar6 + 0x18))(plVar6);
      }
    }
  }
  else {
    lVar8 = *(long *)(pPVar7 + 0x148);
    plVar6 = *(long **)(pPVar7 + 0x150);
    if (plVar6 != (long *)0x0) goto LAB_003ab3cc;
LAB_003ab38c:
    iVar2 = *(int *)(lVar8 + 0x24);
  }
  if (iVar2 == 0) goto LAB_003ab338;
  pPVar7 = *(ParticleEmitterComponent **)(this + 0x118);
  if (pPVar7 == (ParticleEmitterComponent *)0x0) {
    ComponentOutletBase::Connect(this_00,(Component *)this);
    pPVar7 = *(ParticleEmitterComponent **)(this + 0x118);
  }
  if ((pPVar7 == (ParticleEmitterComponent *)0x0) || (pPVar7 == this)) {
    lVar8 = *(long *)(this + 0x148);
    plVar6 = *(long **)(this + 0x150);
  }
  else {
    lVar8 = *(long *)(pPVar7 + 0x148);
    plVar6 = *(long **)(pPVar7 + 0x150);
  }
  if (plVar6 != (long *)0x0) {
    plVar6[1] = plVar6[1] + 1;
  }
  uVar10 = *(undefined8 *)(this + 0x178);
  *(undefined8 *)(lVar8 + 0xb0) = *(undefined8 *)(this + 0x180);
  *(undefined8 *)(lVar8 + 0xa8) = uVar10;
  if (((DAT_00683734 <= ABS(*(float *)(lVar8 + 0xa8) + -1.0)) ||
      (DAT_00683734 <= ABS(*(float *)(lVar8 + 0xac) + -1.0))) ||
     (DAT_00683734 <= ABS(*(float *)(lVar8 + 0xb0) + -1.0))) {
    *(undefined1 *)(lVar8 + 0xb8) = 1;
  }
  else {
    *(bool *)(lVar8 + 0xb8) = DAT_00683734 <= ABS(*(float *)(lVar8 + 0xb4) + -1.0);
  }
  if ((plVar6 != (long *)0x0) && (lVar8 = plVar6[1], plVar6[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar8 = plVar6[2];
    plVar6[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
  if ((*(long *)(this + 0x130) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x120),(Component *)this),
     *(long *)(this + 0x130) == 0)) {
    if (this[0x140] != (ParticleEmitterComponent)0x0) {
      if (*(long *)(this + 0x138) == 0) {
        pMVar5 = (Matrix4 *)SceneObject::WorldMatrix();
        uStack_a8 = uStack_128;
        local_b0 = local_130;
        uStack_98 = uStack_118;
        uStack_a0 = uStack_120;
        uStack_88 = uStack_108;
        local_90 = local_110;
        uStack_78 = uStack_f8;
        uStack_80 = uStack_100;
        if (*(char *)(*(long *)(this + 0x28) + 0x90) != '\0') {
          Matrix4::RotationY(pMVar5,DAT_006896e0);
          C_Matrix4Mul((float *)&local_b0,(float *)&local_130,(float *)&local_b0);
        }
        PVar3 = this[0x1d4];
      }
      else {
        TransformComponent::WorldMatrix();
        PVar3 = this[0x1d4];
        local_b0 = local_130;
        uStack_a8 = uStack_128;
        uStack_a0 = uStack_120;
        uStack_98 = uStack_118;
        local_90 = local_110;
        uStack_88 = uStack_108;
        uStack_80 = uStack_100;
        uStack_78 = uStack_f8;
      }
      if (PVar3 != (ParticleEmitterComponent)0x0) {
        C_Matrix4Mul((float *)&local_b0,(float *)(this + 0x194),(float *)&local_b0);
      }
      pPVar7 = *(ParticleEmitterComponent **)(this + 0x118);
      if (pPVar7 == (ParticleEmitterComponent *)0x0) {
        ComponentOutletBase::Connect(this_00,(Component *)this);
        pPVar7 = *(ParticleEmitterComponent **)(this + 0x118);
      }
      if ((pPVar7 == (ParticleEmitterComponent *)0x0) || (pPVar7 == this)) {
        pPVar1 = *(ParticleSystem **)(this + 0x148);
        plVar6 = *(long **)(this + 0x150);
      }
      else {
        pPVar1 = *(ParticleSystem **)(pPVar7 + 0x148);
        plVar6 = *(long **)(pPVar7 + 0x150);
      }
      if (plVar6 != (long *)0x0) {
        plVar6[1] = plVar6[1] + 1;
      }
      ParticleSystem::BuildVertexDataWithTransform(pPVar1,(Matrix4 *)&local_b0);
      goto LAB_003ab5d8;
    }
    pPVar7 = *(ParticleEmitterComponent **)(this + 0x118);
    if (pPVar7 == (ParticleEmitterComponent *)0x0) {
      ComponentOutletBase::Connect(this_00,(Component *)this);
      pPVar7 = *(ParticleEmitterComponent **)(this + 0x118);
    }
    if ((pPVar7 == (ParticleEmitterComponent *)0x0) || (pPVar7 == this)) {
      pPVar1 = *(ParticleSystem **)(this + 0x148);
      plVar6 = *(long **)(this + 0x150);
    }
    else {
      pPVar1 = *(ParticleSystem **)(pPVar7 + 0x148);
      plVar6 = *(long **)(pPVar7 + 0x150);
    }
    if (plVar6 != (long *)0x0) {
      plVar6[1] = plVar6[1] + 1;
    }
    ParticleSystem::BuildVertexDataWithCamera(pPVar1,param_3,param_4);
    if ((plVar6 != (long *)0x0) && (lVar8 = plVar6[1], plVar6[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar8 = plVar6[2];
      plVar6[2] = lVar8 + -1;
      if (lVar8 + -1 != 0) goto LAB_003ab61c;
      lVar8 = *plVar6;
LAB_003ab614:
      (**(code **)(lVar8 + 0x18))(plVar6);
    }
  }
  else {
    pMVar5 = (Matrix4 *)SceneObject::WorldMatrix();
    fVar9 = 0.0;
    if (*(char *)(*(long *)(this + 0x28) + 0x90) != '\0') {
      fVar9 = DAT_006896e0;
    }
    Matrix4::RotationY(pMVar5,fVar9);
    C_Matrix4Mul(afStack_f0,(float *)&local_130,(float *)&local_b0);
    lVar8 = *(long *)(this + 0x130);
    if (lVar8 == 0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x120),(Component *)this);
      lVar8 = *(long *)(this + 0x130);
    }
    pMVar5 = (Matrix4 *)C_Matrix4Mul((float *)&local_b0,(float *)(lVar8 + 0xd8),(float *)&local_b0);
    pPVar7 = *(ParticleEmitterComponent **)(this + 0x118);
    if (pPVar7 == (ParticleEmitterComponent *)0x0) {
      pMVar5 = (Matrix4 *)ComponentOutletBase::Connect(this_00,(Component *)this);
      pPVar7 = *(ParticleEmitterComponent **)(this + 0x118);
    }
    if ((pPVar7 == (ParticleEmitterComponent *)0x0) || (pPVar7 == this)) {
      pPVar1 = *(ParticleSystem **)(this + 0x148);
      plVar6 = *(long **)(this + 0x150);
    }
    else {
      pPVar1 = *(ParticleSystem **)(pPVar7 + 0x148);
      plVar6 = *(long **)(pPVar7 + 0x150);
    }
    if (plVar6 != (long *)0x0) {
      plVar6[1] = plVar6[1] + 1;
    }
    Matrix4::RotationX(pMVar5,DAT_006896e4);
    C_Matrix4Mul((float *)&local_b0,afStack_170,(float *)&local_130);
    ParticleSystem::BuildVertexDataWithTransform(pPVar1,(Matrix4 *)&local_130);
LAB_003ab5d8:
    if ((plVar6 != (long *)0x0) && (lVar8 = plVar6[1], plVar6[1] = lVar8 + -1, lVar8 + -1 == 0)) {
      (**(code **)(*plVar6 + 0x10))(plVar6);
      lVar8 = plVar6[2];
      plVar6[2] = lVar8 + -1;
      if (lVar8 + -1 == 0) {
        lVar8 = *plVar6;
        goto LAB_003ab614;
      }
    }
  }
LAB_003ab61c:
  RenderingContext::SetMatrix(param_1,param_2);
  pPVar7 = *(ParticleEmitterComponent **)(this + 0x118);
  if (pPVar7 == (ParticleEmitterComponent *)0x0) {
    ComponentOutletBase::Connect(this_00,(Component *)this);
    pPVar7 = *(ParticleEmitterComponent **)(this + 0x118);
  }
  if ((pPVar7 == (ParticleEmitterComponent *)0x0) || (pPVar7 == this)) {
    pPVar1 = *(ParticleSystem **)(this + 0x148);
    plVar6 = *(long **)(this + 0x150);
  }
  else {
    pPVar1 = *(ParticleSystem **)(pPVar7 + 0x148);
    plVar6 = *(long **)(pPVar7 + 0x150);
  }
  if (plVar6 != (long *)0x0) {
    plVar6[1] = plVar6[1] + 1;
  }
  ParticleSystem::Draw(pPVar1,param_1);
  if ((plVar6 != (long *)0x0) && (lVar8 = plVar6[1], plVar6[1] = lVar8 + -1, lVar8 + -1 == 0)) {
    (**(code **)(*plVar6 + 0x10))(plVar6);
    lVar8 = plVar6[2];
    plVar6[2] = lVar8 + -1;
    if (lVar8 + -1 == 0) {
      (**(code **)(*plVar6 + 0x18))(plVar6);
    }
  }
LAB_003ab338:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


