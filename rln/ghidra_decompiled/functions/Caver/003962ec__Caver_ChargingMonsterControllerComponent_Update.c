/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003962ec
 * Function: Caver::ChargingMonsterControllerComponent::Update
 * Signature: undefined __thiscall Update(ChargingMonsterControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ChargingMonsterControllerComponent::Update(float) */

void __thiscall
Caver::ChargingMonsterControllerComponent::Update
          (ChargingMonsterControllerComponent *this,float param_1)

{
  ChargingMonsterControllerComponent *pCVar1;
  int iVar2;
  ChargingMonsterControllerComponent CVar3;
  long *plVar4;
  long *plVar5;
  EntityComponent *pEVar6;
  MonsterEntityComponent *this_00;
  bool bVar7;
  MonsterEntityComponent MVar8;
  int iVar9;
  long lVar10;
  float fVar11;
  undefined4 in_register_00005004;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined4 uVar15;
  
  if ((*(long *)(this + 0x80) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) == 0)) {
    return;
  }
  lVar10 = *(long *)(this + 0x98);
  if (lVar10 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar10 = *(long *)(this + 0x98);
    if (lVar10 == 0) {
      return;
    }
  }
  plVar4 = *(long **)(lVar10 + 0xa0);
  if (plVar4 == (long *)0x0) {
    plVar4 = *(long **)(this + 0x118);
    if (plVar4 != (long *)0x0) {
      *(int *)(plVar4 + 1) = (int)plVar4[1] + 2;
    }
    plVar5 = *(long **)(lVar10 + 0xa0);
    *(long **)(lVar10 + 0xa0) = plVar4;
    if ((plVar5 != (long *)0x0) &&
       (iVar9 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar9, iVar9 == 0)) {
      (**(code **)(*plVar5 + 8))();
    }
    if ((plVar4 != (long *)0x0) &&
       (iVar9 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar9, iVar9 == 0)) {
      lVar10 = *plVar4;
      goto LAB_003963e4;
    }
  }
  else if ((int)plVar4[1] == 0) {
    lVar10 = *plVar4;
LAB_003963e4:
    (**(code **)(lVar10 + 8))(plVar4);
  }
  pCVar1 = this + 0x14c;
  *(ulong *)pCVar1 =
       CONCAT44(param_1 + (float)((ulong)*(undefined8 *)pCVar1 >> 0x20),
                param_1 + (float)*(undefined8 *)pCVar1);
  if (*(int *)(this + 0x148) == 0) {
    pEVar6 = *(EntityComponent **)(this + 0x80);
    if (pEVar6 == (EntityComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pEVar6 = *(EntityComponent **)(this + 0x80);
      iVar9 = *(int *)(this + 0x148);
    }
    else {
      iVar9 = 0;
    }
    iVar2 = *(int *)(pEVar6 + 0x70);
    if (iVar9 != iVar2) {
      *(int *)(this + 0x148) = iVar2;
      if (pEVar6 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        pEVar6 = *(EntityComponent **)(this + 0x80);
      }
      EntityComponent::SetFacingDirection(pEVar6,iVar2);
      *(undefined4 *)pCVar1 = 0;
    }
  }
  pEVar6 = *(EntityComponent **)(this + 0x80);
  if (pEVar6 == (EntityComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    pEVar6 = *(EntityComponent **)(this + 0x80);
  }
  fVar11 = _DAT_00684434;
  if ((_DAT_00684434 <= *(float *)(pEVar6 + 0x80)) || (*(float *)(pEVar6 + 0x8c) <= 0.0)) {
    CVar3 = (ChargingMonsterControllerComponent)0x0;
  }
  else {
    CVar3 = (ChargingMonsterControllerComponent)(pEVar6[0x90] == (EntityComponent)0x0);
  }
  lVar10 = *(long *)(this + 0x140);
  this[0x154] = CVar3;
  if (this[0x130] == (ChargingMonsterControllerComponent)0x0) {
    if (lVar10 == 0) {
      lVar10 = MonsterControllerComponent::FindNearestEnemy((MonsterControllerComponent *)this);
      if (lVar10 != 0) {
        *(int *)(lVar10 + 8) = *(int *)(lVar10 + 8) + 1;
      }
      plVar4 = *(long **)(this + 0x140);
      *(long *)(this + 0x140) = lVar10;
      if ((plVar4 != (long *)0x0) &&
         (iVar9 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar9, iVar9 == 0)) {
        (**(code **)(*plVar4 + 8))();
        lVar10 = *(long *)(this + 0x140);
      }
      if (lVar10 != 0) goto LAB_003965c4;
    }
    else {
LAB_003965c4:
      if (DAT_006882c0 < *(float *)pCVar1) {
        uVar12 = *(undefined8 *)(lVar10 + 0x70);
        uVar14 = *(undefined8 *)(*(long *)(this + 0x28) + 0x70);
        if (*(long *)(this + 0x80) == 0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        }
        if ((ABS((float)((ulong)uVar12 >> 0x20) - (float)((ulong)uVar14 >> 0x20)) <
             (float)((ulong)DAT_006890c8 >> 0x20)) &&
           (ABS((float)uVar12 - (float)uVar14) < (float)DAT_006890c8)) {
          if (this[0x130] != (ChargingMonsterControllerComponent)0x0) goto LAB_003966a4;
          plVar4 = *(long **)(this + 0xf8);
          if (plVar4 == (long *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
            plVar4 = *(long **)(this + 0xf8);
            if (plVar4 == (long *)0x0) goto LAB_0039669c;
          }
          lVar10 = (**(code **)(*plVar4 + 0x108))();
          if (lVar10 != 0) {
            plVar4 = *(long **)(this + 0xf8);
            if (plVar4 == (long *)0x0) {
              ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
              plVar4 = *(long **)(this + 0xf8);
            }
            lVar10 = (**(code **)(*plVar4 + 0x108))();
            *(undefined4 *)(lVar10 + 0xc) = 0;
            lVar10 = *(long *)(this + 0x120);
            *(undefined4 *)(lVar10 + 0x20) = 0;
            *(undefined1 *)(lVar10 + 0x2d) = 0;
            *(undefined2 *)(*(long *)(this + 0x118) + 0x2c) = 0x100;
            *(undefined2 *)(this + 0x130) = 1;
            *(undefined8 *)(this + 0x138) = 0;
          }
        }
      }
    }
LAB_0039669c:
    if (((this[0x130] == (ChargingMonsterControllerComponent)0x0) && (*(int *)(this + 0xa8) != 0))
       && (DAT_006882c0 < *(float *)pCVar1)) {
      pEVar6 = *(EntityComponent **)(this + 0x80);
      if (pEVar6 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        pEVar6 = *(EntityComponent **)(this + 0x80);
      }
      if (((*(float *)(pEVar6 + 0x80) < fVar11) && (0.0 < *(float *)(pEVar6 + 0x8c))) &&
         (pEVar6[0x90] == (EntityComponent)0x0)) {
        if (*(float *)(this + 0xb8) <= *(float *)(*(long *)(this + 0x28) + 0x70)) {
          if ((*(float *)(this + 0xb8) + *(float *)(this + 0xc0) <
               *(float *)(*(long *)(this + 0x28) + 0x70)) && (*(int *)(this + 0x148) != -1)) {
            *(undefined4 *)(this + 0x148) = 0xffffffff;
            iVar9 = -1;
            goto LAB_003969b0;
          }
        }
        else if (*(int *)(this + 0x148) != 1) {
          iVar9 = 1;
          *(undefined4 *)(this + 0x148) = 1;
LAB_003969b0:
          EntityComponent::SetFacingDirection(pEVar6,iVar9);
          *(undefined4 *)(this + 0x14c) = 0;
        }
      }
    }
  }
  else if ((lVar10 != 0) && (DAT_006882c0 < *(float *)(this + 0x14c))) {
    fVar11 = *(float *)(lVar10 + 0x70);
    fVar13 = *(float *)(*(long *)(this + 0x28) + 0x70);
    if (pEVar6 == (EntityComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pEVar6 = *(EntityComponent **)(this + 0x80);
    }
    iVar9 = *(int *)(pEVar6 + 0x70);
    if ((fVar11 - fVar13) * (float)iVar9 < 0.0) {
      if (*(float *)(this + 0x13c) <= DAT_00683484) {
        *(float *)(this + 0x13c) = *(float *)(this + 0x13c) + param_1;
      }
      else {
        if (pEVar6 == (EntityComponent *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
          pEVar6 = *(EntityComponent **)(this + 0x80);
          iVar9 = *(int *)(pEVar6 + 0x70);
        }
        if (*(int *)(this + 0x148) + iVar9 != 0) {
          *(int *)(this + 0x148) = -iVar9;
          if (pEVar6 == (EntityComponent *)0x0) {
            ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
            pEVar6 = *(EntityComponent **)(this + 0x80);
          }
          EntityComponent::SetFacingDirection(pEVar6,-iVar9);
          *(undefined4 *)pCVar1 = 0;
        }
        *(undefined4 *)(this + 0x13c) = 0;
      }
    }
  }
LAB_003966a4:
  this_00 = *(MonsterEntityComponent **)(this + 0x80);
  CVar3 = this[0x131];
  if (this_00 == (MonsterEntityComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    this_00 = *(MonsterEntityComponent **)(this + 0x80);
    MVar8 = this_00[0x199];
    if (CVar3 == (ChargingMonsterControllerComponent)0x0) goto LAB_003966f0;
LAB_003966b8:
    if (MVar8 == (MonsterEntityComponent)0x0) {
      if (this_00 == (MonsterEntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        this_00 = *(MonsterEntityComponent **)(this + 0x80);
      }
      bVar7 = true;
LAB_0039670c:
      MonsterEntityComponent::SetDamageEnabled(this_00,bVar7);
    }
  }
  else {
    MVar8 = this_00[0x199];
    if (CVar3 != (ChargingMonsterControllerComponent)0x0) goto LAB_003966b8;
LAB_003966f0:
    if (MVar8 != (MonsterEntityComponent)0x0) {
      if (this_00 == (MonsterEntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        this_00 = *(MonsterEntityComponent **)(this + 0x80);
      }
      bVar7 = false;
      goto LAB_0039670c;
    }
  }
  uVar15 = DAT_0068796c;
  if (this[0x130] == (ChargingMonsterControllerComponent)0x0) {
    if (*(int *)(this + 0x148) == 0) {
      fVar11 = 0.0;
    }
    else {
      fVar11 = *(float *)(this + 200) * (float)*(int *)(this + 0x148);
    }
    *(float *)(this + 0x134) = *(float *)(this + 0x134) + param_1;
    plVar4 = *(long **)(this + 0x80);
    goto joined_r0x003967b8;
  }
  if (this[0x131] == (ChargingMonsterControllerComponent)0x0) {
    plVar4 = *(long **)(this + 0xf8);
    if (plVar4 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
      plVar4 = *(long **)(this + 0xf8);
      fVar11 = _DAT_0000000c;
      if (plVar4 != (long *)0x0) goto LAB_00396774;
LAB_003968a8:
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
      plVar4 = *(long **)(this + 0xf8);
    }
    else {
LAB_00396774:
      lVar10 = (**(code **)(*plVar4 + 0x108))();
      plVar4 = *(long **)(this + 0xf8);
      fVar11 = *(float *)(lVar10 + 0xc);
      if (plVar4 == (long *)0x0) goto LAB_003968a8;
    }
    lVar10 = (**(code **)(*plVar4 + 0x108))();
    if (fVar11 <= *(float *)(lVar10 + 0x28) * DAT_00687828) {
      if (this[0x131] == (ChargingMonsterControllerComponent)0x0) {
        fVar11 = 0.0;
        plVar4 = *(long **)(this + 0x80);
        uVar15 = DAT_0068796c;
        goto joined_r0x003967b8;
      }
      goto LAB_00396720;
    }
    *(undefined1 *)(*(long *)(this + 0x120) + 0x2d) = 1;
    this[0x131] = (ChargingMonsterControllerComponent)0x1;
    iVar9 = *(int *)(this + 0x148);
  }
  else {
LAB_00396720:
    iVar9 = *(int *)(this + 0x148);
  }
  if (iVar9 == 0) {
    fVar11 = 0.0;
    uVar15 = DAT_0068796c;
  }
  else {
    fVar11 = *(float *)(this + 0x128) * (float)iVar9;
    uVar15 = *(undefined4 *)(this + 300);
  }
  *(float *)(this + 0x138) = *(float *)(this + 0x138) + param_1;
  plVar4 = *(long **)(this + 0x80);
joined_r0x003967b8:
  if (plVar4 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar4 = *(long **)(this + 0x80);
    *(float *)(plVar4 + 0x16) = fVar11;
    if (plVar4 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      plVar4 = *(long **)(this + 0x80);
      *(undefined4 *)((long)plVar4 + 0xb4) = uVar15;
      if (plVar4 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        plVar4 = *(long **)(this + 0x80);
      }
    }
    else {
      *(undefined4 *)((long)plVar4 + 0xb4) = uVar15;
    }
  }
  else {
    *(float *)(plVar4 + 0x16) = fVar11;
    *(undefined4 *)((long)plVar4 + 0xb4) = uVar15;
  }
  (**(code **)(*plVar4 + 200))(CONCAT44(in_register_00005004,param_1));
  plVar4 = *(long **)(this + 0x98);
  if (plVar4 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar4 = *(long **)(this + 0x98);
  }
                    /* WARNING: Could not recover jumptable at 0x00396964. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 200))(CONCAT44(in_register_00005004,param_1));
  return;
}


