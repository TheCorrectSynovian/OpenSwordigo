/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00393550
 * Function: Caver::BatMonsterControllerComponent::Update
 * Signature: undefined __thiscall Update(BatMonsterControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::BatMonsterControllerComponent::Update(float) */

void __thiscall
Caver::BatMonsterControllerComponent::Update(BatMonsterControllerComponent *this,float param_1)

{
  int iVar1;
  long lVar2;
  double dVar3;
  long *plVar4;
  long *plVar5;
  SoundEffectComponent *this_00;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 in_register_00005004;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if ((*(long *)(this + 0x80) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) == 0)) goto LAB_00393830;
  lVar6 = *(long *)(this + 0x98);
  if (lVar6 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar6 = *(long *)(this + 0x98);
    if (lVar6 == 0) goto LAB_00393830;
  }
  plVar4 = *(long **)(lVar6 + 0xa0);
  if (plVar4 == (long *)0x0) {
    plVar4 = *(long **)(this + 0xe0);
    if (plVar4 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      plVar4 = *(long **)(this + 0xe0);
      if (plVar4 == (long *)0x0) goto LAB_00393830;
      lVar6 = *(long *)(this + 0x98);
      if (lVar6 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        plVar4 = *(long **)(this + 0xe0);
        lVar6 = *(long *)(this + 0x98);
        if (plVar4 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
          plVar4 = *(long **)(this + 0xe0);
        }
      }
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x108))();
    if (plVar4 != (long *)0x0) {
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 2;
    }
    plVar5 = *(long **)(lVar6 + 0xa0);
    *(long **)(lVar6 + 0xa0) = plVar4;
    if ((plVar5 != (long *)0x0) &&
       (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
    if ((plVar4 != (long *)0x0) &&
       (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
      lVar6 = *plVar4;
      goto LAB_0039363c;
    }
  }
  else if ((int)plVar4[1] == 0) {
    lVar6 = *plVar4;
LAB_0039363c:
    (**(code **)(lVar6 + 8))(plVar4);
  }
  if ((*(long *)(this + 0xf8) != 0) ||
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this),
     *(long *)(this + 0xf8) != 0)) {
    plVar4 = *(long **)(this + 0xe0);
    fVar10 = *(float *)(this + 0x104);
    if (plVar4 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      plVar4 = *(long **)(this + 0xe0);
    }
    lVar6 = (**(code **)(*plVar4 + 0x108))();
    if (*(float *)(lVar6 + 0x28) * 5.0 < fVar10) {
      this_00 = *(SoundEffectComponent **)(this + 0xf8);
      if (this_00 == (SoundEffectComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
        this_00 = *(SoundEffectComponent **)(this + 0xf8);
      }
      SoundEffectComponent::Play(this_00);
      *(undefined4 *)(this + 0x104) = 0;
    }
  }
  dVar3 = DAT_00684790;
  fVar10 = DAT_00684318;
  *(float *)(this + 0x104) = *(float *)(this + 0x104) + param_1;
  fVar10 = cosf((float)((double)(*(float *)(this + 0x100) * fVar10) * dVar3));
  fVar10 = fVar10 * _DAT_00684940;
  fVar7 = sinf((float)((double)(*(float *)(this + 0x100) * 0.5) * dVar3));
  fVar7 = fVar7 * DAT_00688638;
  fVar11 = param_1 * _DAT_00688fac;
  if (*(long *)(this + 0x80) == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
  }
  PhysicsObjectState::velocity();
  fVar9 = fVar10 - local_60;
  fVar8 = fVar7 - local_5c;
  if (fVar11 * fVar11 <= fVar9 * fVar9 + fVar8 * fVar8) {
    local_68 = fVar9;
    fStack_64 = fVar8;
    Vector2::Normalize((Vector2 *)&local_68);
    fVar7 = fVar11 * fStack_64 + local_5c;
    fVar10 = fVar11 * local_68 + local_60;
  }
  local_60 = fVar10;
  lVar6 = *(long *)(this + 0x80);
  local_5c = fVar7;
  if (lVar6 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    lVar6 = *(long *)(this + 0x80);
  }
  PhysicsObjectState::setVelocity((PhysicsObjectState *)(lVar6 + 0x78),(Vector2 *)&local_60);
  plVar4 = *(long **)(this + 0x80);
  *(float *)(this + 0x100) = *(float *)(this + 0x100) + param_1;
  if (plVar4 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar4 = *(long **)(this + 0x80);
  }
  (**(code **)(*plVar4 + 200))(CONCAT44(in_register_00005004,param_1));
  plVar4 = *(long **)(this + 0x98);
  if (plVar4 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar4 = *(long **)(this + 0x98);
  }
  (**(code **)(*plVar4 + 200))(CONCAT44(in_register_00005004,param_1));
LAB_00393830:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


