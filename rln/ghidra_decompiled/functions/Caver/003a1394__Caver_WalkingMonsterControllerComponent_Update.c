/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003a1394
 * Function: Caver::WalkingMonsterControllerComponent::Update
 * Signature: undefined __thiscall Update(WalkingMonsterControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::WalkingMonsterControllerComponent::Update(float) */

void __thiscall
Caver::WalkingMonsterControllerComponent::Update
          (WalkingMonsterControllerComponent *this,float param_1)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  EntityComponent *pEVar4;
  int iVar5;
  long lVar6;
  undefined4 in_register_00005004;
  float fVar7;
  float fVar8;
  
  if ((*(long *)(this + 0x80) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) == 0)) {
    return;
  }
  lVar6 = *(long *)(this + 0x98);
  if (lVar6 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar6 = *(long *)(this + 0x98);
    if (lVar6 == 0) {
      return;
    }
  }
  plVar2 = *(long **)(lVar6 + 0xa0);
  if (plVar2 == (long *)0x0) {
    plVar2 = *(long **)(this + 0xe0);
    if (plVar2 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      plVar2 = *(long **)(this + 0xe0);
      if (plVar2 == (long *)0x0) goto LAB_003a1474;
      lVar6 = *(long *)(this + 0x98);
      if (lVar6 == 0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        plVar2 = *(long **)(this + 0xe0);
        lVar6 = *(long *)(this + 0x98);
        if (plVar2 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
          plVar2 = *(long **)(this + 0xe0);
        }
      }
    }
    plVar2 = (long *)(**(code **)(*plVar2 + 0x108))();
    if (plVar2 != (long *)0x0) {
      *(int *)(plVar2 + 1) = (int)plVar2[1] + 2;
    }
    plVar3 = *(long **)(lVar6 + 0xa0);
    *(long **)(lVar6 + 0xa0) = plVar2;
    if ((plVar3 != (long *)0x0) &&
       (iVar5 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar5, iVar5 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
    if ((plVar2 != (long *)0x0) &&
       (iVar5 = (int)plVar2[1] + -1, *(int *)(plVar2 + 1) = iVar5, iVar5 == 0)) {
      lVar6 = *plVar2;
      goto LAB_003a146c;
    }
  }
  else if ((int)plVar2[1] == 0) {
    lVar6 = *plVar2;
LAB_003a146c:
    (**(code **)(lVar6 + 8))(plVar2);
  }
LAB_003a1474:
  if (*(int *)(this + 0xe8) == 0) {
    pEVar4 = *(EntityComponent **)(this + 0x80);
    if (pEVar4 == (EntityComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pEVar4 = *(EntityComponent **)(this + 0x80);
      iVar5 = *(int *)(this + 0xe8);
    }
    else {
      iVar5 = 0;
    }
    iVar1 = *(int *)(pEVar4 + 0x70);
    if (iVar5 != iVar1) {
      *(int *)(this + 0xe8) = iVar1;
      if (pEVar4 == (EntityComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        pEVar4 = *(EntityComponent **)(this + 0x80);
      }
      EntityComponent::SetFacingDirection(pEVar4,iVar1);
    }
  }
  if (*(int *)(this + 0xa8) == 0) {
LAB_003a1570:
    iVar5 = *(int *)(this + 0xe8);
joined_r0x003a15f4:
    if (iVar5 != 0) goto LAB_003a1578;
    fVar7 = 0.0;
    fVar8 = 0.0;
    plVar2 = *(long **)(this + 0x80);
    if (plVar2 == (long *)0x0) goto LAB_003a1604;
LAB_003a158c:
    *(float *)(plVar2 + 0x16) = fVar7;
  }
  else {
    pEVar4 = *(EntityComponent **)(this + 0x80);
    if (pEVar4 == (EntityComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      pEVar4 = *(EntityComponent **)(this + 0x80);
    }
    if (((_DAT_00684434 <= *(float *)(pEVar4 + 0x80)) || (*(float *)(pEVar4 + 0x8c) <= 0.0)) ||
       (pEVar4[0x90] != (EntityComponent)0x0)) goto LAB_003a1570;
    if (*(float *)(*(long *)(this + 0x28) + 0x70) < *(float *)(this + 0xb8)) {
      iVar5 = 1;
      if (*(int *)(this + 0xe8) == 1) goto LAB_003a1578;
      *(undefined4 *)(this + 0xe8) = 1;
      iVar5 = 1;
LAB_003a15ec:
      EntityComponent::SetFacingDirection(pEVar4,iVar5);
      iVar5 = *(int *)(this + 0xe8);
      goto joined_r0x003a15f4;
    }
    if (*(float *)(*(long *)(this + 0x28) + 0x70) <=
        *(float *)(this + 0xb8) + *(float *)(this + 0xc0)) goto LAB_003a1570;
    iVar5 = -1;
    if (*(int *)(this + 0xe8) != -1) {
      iVar5 = -1;
      *(undefined4 *)(this + 0xe8) = 0xffffffff;
      goto LAB_003a15ec;
    }
LAB_003a1578:
    fVar7 = *(float *)(this + 200) * (float)iVar5;
    plVar2 = *(long **)(this + 0x80);
    fVar8 = fVar7;
    if (plVar2 != (long *)0x0) goto LAB_003a158c;
LAB_003a1604:
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar2 = *(long **)(this + 0x80);
    *(float *)(plVar2 + 0x16) = fVar8;
    if (plVar2 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
      plVar2 = *(long **)(this + 0x80);
      *(undefined4 *)((long)plVar2 + 0xb4) = 0x44bb8000;
      if (plVar2 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
        plVar2 = *(long **)(this + 0x80);
      }
      goto LAB_003a162c;
    }
  }
  *(undefined4 *)((long)plVar2 + 0xb4) = 0x44bb8000;
LAB_003a162c:
  (**(code **)(*plVar2 + 200))(CONCAT44(in_register_00005004,param_1));
  plVar2 = *(long **)(this + 0x98);
  if (plVar2 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar2 = *(long **)(this + 0x98);
  }
                    /* WARNING: Could not recover jumptable at 0x003a1670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 200))(CONCAT44(in_register_00005004,param_1));
  return;
}


