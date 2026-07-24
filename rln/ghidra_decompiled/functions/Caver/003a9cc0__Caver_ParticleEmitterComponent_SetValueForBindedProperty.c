/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a9cc0
 * Function: Caver::ParticleEmitterComponent::SetValueForBindedProperty
 * Signature: undefined __thiscall SetValueForBindedProperty(ParticleEmitterComponent * this, int param_1, BindingValue * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ParticleEmitterComponent::SetValueForBindedProperty(int, Caver::BindingValue const&) */

void __thiscall
Caver::ParticleEmitterComponent::SetValueForBindedProperty
          (ParticleEmitterComponent *this,int param_1,BindingValue *param_2)

{
  undefined4 uVar1;
  long lVar2;
  bool bVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  ParticleEmitter *this_00;
  void *pvVar7;
  void *pvVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  undefined4 uVar12;
  undefined8 local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  float local_80;
  float local_74;
  float local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  bVar3 = false;
  switch(param_1) {
  case 1:
    this[0x140] = **(ParticleEmitterComponent **)(param_2 + 8);
    break;
  default:
    goto switchD_003a9d18_caseD_2;
  case 3:
    *(undefined4 *)(this + 0x144) = **(undefined4 **)(param_2 + 8);
    if (((*(long *)(this + 0x118) == 0) &&
        (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x108),(Component *)this),
        *(long *)(this + 0x118) == 0)) &&
       (*(ParticleSystem **)(this + 0x148) != (ParticleSystem *)0x0)) {
      ParticleSystem::InitWithMaxParticles
                (*(ParticleSystem **)(this + 0x148),*(int *)(this + 0x144));
    }
    break;
  case 4:
    this[0x169] = **(ParticleEmitterComponent **)(param_2 + 8);
    goto LAB_003aa254;
  case 5:
    BindingValue::Vector3Value();
    *(undefined8 *)(this + 0x16c) = local_98;
    *(undefined4 *)(this + 0x174) = local_90;
    if (((*(long *)(this + 0x118) == 0) &&
        (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x108),(Component *)this),
        *(long *)(this + 0x118) == 0)) && (lVar9 = *(long *)(this + 0x148), lVar9 != 0)) {
      *(undefined8 *)(lVar9 + 0x94) = *(undefined8 *)(this + 0x16c);
      *(undefined4 *)(lVar9 + 0x9c) = *(undefined4 *)(this + 0x174);
      *(bool *)(lVar9 + 0x91) =
           DAT_00683488 <
           *(float *)(this + 0x16c) * *(float *)(this + 0x16c) +
           *(float *)(this + 0x170) * *(float *)(this + 0x170) +
           *(float *)(this + 0x174) * *(float *)(this + 0x174);
    }
    break;
  case 6:
    BindingValue::Vector3Value();
    fVar4 = DAT_00684004;
    *(float *)(this + 0x188) = local_68 * DAT_00684004;
    BindingValue::Vector3Value();
    *(float *)(this + 0x18c) = local_74 * fVar4;
    BindingValue::Vector3Value();
    *(float *)(this + 400) = local_80 * fVar4;
    UpdateLocalTransform(this);
    break;
  case 0xc:
    ParticleEmitter::CreateFromType((ParticleEmitter *)&local_98,**(undefined4 **)(param_2 + 8));
    lVar9 = CONCAT44(uStack_8c,local_90);
    if (lVar9 != 0) {
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
    }
    plVar11 = *(long **)(this + 0x160);
    *(undefined8 *)(this + 0x158) = local_98;
    *(long *)(this + 0x160) = lVar9;
    if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar9 = plVar11[2];
      plVar11[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    if ((this[0x104] != (ParticleEmitterComponent)0x0) && (*(long *)(this + 0x158) != 0)) {
      PrepareEmitter(this,(shared_ptr *)(this + 0x158));
    }
    goto LAB_003aa1f8;
  case 0xd:
    lVar9 = *(long *)(this + 0x158);
    if (lVar9 != 0) {
      BindingValue::Vector3Value();
      *(undefined8 *)(lVar9 + 0x38) = local_98;
      *(undefined4 *)(lVar9 + 0x40) = local_90;
    }
    break;
  case 0xe:
    BindingValue::FloatColorValue();
    lVar9 = *(long *)(this + 0x158);
    if (lVar9 != 0) {
      FloatColor::GetHSLComponents((FloatColor *)&local_98,(float *)(lVar9 + 0xa8));
      *(undefined4 *)(lVar9 + 0xb4) = uStack_8c;
    }
    break;
  case 0xf:
    if (*(long *)(this + 0x158) != 0) {
      *(undefined4 *)(*(long *)(this + 0x158) + 0xb8) = **(undefined4 **)(param_2 + 8);
    }
    break;
  case 0x10:
    if (*(long *)(this + 0x158) != 0) {
      *(undefined4 *)(*(long *)(this + 0x158) + 0xbc) = **(undefined4 **)(param_2 + 8);
    }
    break;
  case 0x11:
    if (*(long *)(this + 0x158) != 0) {
      *(undefined4 *)(*(long *)(this + 0x158) + 0xc0) = **(undefined4 **)(param_2 + 8);
    }
  }
  bVar3 = true;
switchD_003a9d18_caseD_2:
  Component::SetValueForBindedProperty((Component *)this,param_1,param_2);
  if (param_1 - 7U < 5) {
    *(undefined4 *)(this + 0x70) = 0;
    iVar5 = (**(code **)(*(long *)(this + 0x78) + 8))();
    if (iVar5 != 0) {
      iVar5 = *(int *)(this + 0x70);
      if (iVar5 != 0) {
        *(undefined4 *)(this + (long)iVar5 * 0x18 + 0x80) = *(undefined4 *)(this + 0x80);
        *(undefined4 *)(this + 0x80) = 0;
      }
      *(int *)(this + 0x70) = iVar5 + 1;
    }
    iVar5 = (**(code **)(*(long *)(this + 0x90) + 8))();
    if (iVar5 != 0) {
      iVar5 = *(int *)(this + 0x70);
      if (iVar5 != 1) {
        *(undefined4 *)(this + (long)iVar5 * 0x18 + 0x80) = *(undefined4 *)(this + 0x98);
        *(undefined4 *)(this + 0x98) = 0;
      }
      *(int *)(this + 0x70) = iVar5 + 1;
    }
    iVar5 = (**(code **)(*(long *)(this + 0xa8) + 8))();
    if (iVar5 != 0) {
      iVar5 = *(int *)(this + 0x70);
      if (iVar5 != 2) {
        *(undefined4 *)(this + (long)iVar5 * 0x18 + 0x80) = *(undefined4 *)(this + 0xb0);
        *(undefined4 *)(this + 0xb0) = 0;
      }
      *(int *)(this + 0x70) = iVar5 + 1;
    }
    iVar5 = (**(code **)(*(long *)(this + 0xc0) + 8))();
    if (iVar5 != 0) {
      iVar5 = *(int *)(this + 0x70);
      if (iVar5 != 3) {
        *(undefined4 *)(this + (long)iVar5 * 0x18 + 0x80) = *(undefined4 *)(this + 200);
        *(undefined4 *)(this + 200) = 0;
      }
      *(int *)(this + 0x70) = iVar5 + 1;
    }
    iVar5 = (**(code **)(*(long *)(this + 0xd8) + 8))();
    if (iVar5 == 0) {
LAB_003aa16c:
      this_00 = *(ParticleEmitter **)(this + 0x158);
    }
    else {
      iVar5 = *(int *)(this + 0x70);
      if (iVar5 != 4) {
        *(undefined4 *)(this + (long)iVar5 * 0x18 + 0x80) = *(undefined4 *)(this + 0xe0);
        *(undefined4 *)(this + 0xe0) = 0;
      }
      *(int *)(this + 0x70) = iVar5 + 1;
      this_00 = *(ParticleEmitter **)(this + 0x158);
    }
  }
  else {
    if ((0x14 < param_1 - 0x12U) || (plVar11 = *(long **)(this + 0x158), plVar11 == (long *)0x0)) {
      if (!bVar3) goto LAB_003aa254;
      goto LAB_003aa16c;
    }
    lVar9 = plVar11[0x19];
    uVar1 = **(undefined4 **)(param_2 + 8);
    if (lVar9 == 0) {
      uVar6 = (**(code **)(*plVar11 + 0x18))(plVar11);
      pvVar7 = operator_new__((ulong)uVar6 << 2);
      pvVar8 = (void *)plVar11[0x19];
      plVar11[0x19] = (long)pvVar7;
      if (pvVar8 != (void *)0x0) {
        operator_delete__(pvVar8);
      }
      if (uVar6 == 0) {
        lVar9 = plVar11[0x19];
      }
      else {
        uVar10 = 0;
        do {
          uVar12 = (**(code **)(*plVar11 + 0x20))(plVar11,uVar10 & 0xffffffff);
          lVar9 = plVar11[0x19];
          *(undefined4 *)(lVar9 + uVar10 * 4) = uVar12;
          uVar10 = uVar10 + 1;
        } while (uVar6 != uVar10);
      }
    }
    *(undefined4 *)(lVar9 + (ulong)(param_1 - 0x12U) * 4) = uVar1;
    this_00 = *(ParticleEmitter **)(this + 0x158);
  }
  if (this_00 != (ParticleEmitter *)0x0) {
    ParticleEmitter::Clone(this_00);
    lVar9 = CONCAT44(uStack_8c,local_90);
    if (lVar9 != 0) {
      *(long *)(lVar9 + 8) = *(long *)(lVar9 + 8) + 1;
    }
    plVar11 = *(long **)(this + 0x160);
    *(undefined8 *)(this + 0x158) = local_98;
    *(long *)(this + 0x160) = lVar9;
    if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar9 = plVar11[2];
      plVar11[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
    if ((this[0x104] != (ParticleEmitterComponent)0x0) && (*(long *)(this + 0x158) != 0)) {
      PrepareEmitter(this,(shared_ptr *)(this + 0x158));
    }
LAB_003aa1f8:
    plVar11 = (long *)CONCAT44(uStack_8c,local_90);
    if ((plVar11 != (long *)0x0) && (lVar9 = plVar11[1], plVar11[1] = lVar9 + -1, lVar9 + -1 == 0))
    {
      (**(code **)(*plVar11 + 0x10))(plVar11);
      lVar9 = plVar11[2];
      plVar11[2] = lVar9 + -1;
      if (lVar9 + -1 == 0) {
        (**(code **)(*plVar11 + 0x18))(plVar11);
      }
    }
  }
LAB_003aa254:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


