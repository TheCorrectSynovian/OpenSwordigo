/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0039f8ec
 * Function: Caver::SnappingMonsterControllerComponent::Update
 * Signature: undefined __thiscall Update(SnappingMonsterControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::SnappingMonsterControllerComponent::Update(float) */

void __thiscall
Caver::SnappingMonsterControllerComponent::Update
          (SnappingMonsterControllerComponent *this,float param_1)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  long *plVar4;
  Vector2 *pVVar5;
  ulong uVar6;
  long lVar7;
  undefined4 in_register_00005004;
  float fVar8;
  
  if ((*(long *)(this + 0x80) == 0) &&
     (ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this),
     *(long *)(this + 0x80) == 0)) {
    return;
  }
  lVar7 = *(long *)(this + 0x98);
  if (lVar7 == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    lVar7 = *(long *)(this + 0x98);
    if (lVar7 == 0) {
      return;
    }
  }
  plVar3 = *(long **)(lVar7 + 0xa0);
  if (plVar3 == (long *)0x0) {
    plVar3 = *(long **)(this + 0x110);
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this);
      plVar3 = *(long **)(this + 0x110);
      if (plVar3 != (long *)0x0) goto LAB_0039f974;
      plVar3 = (long *)0x0;
LAB_0039f9b4:
      bVar2 = true;
    }
    else {
LAB_0039f974:
      plVar3 = (long *)(**(code **)(*plVar3 + 0x108))();
      if (plVar3 == (long *)0x0) goto LAB_0039f9b4;
      bVar2 = false;
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 2;
    }
    plVar4 = *(long **)(lVar7 + 0xa0);
    *(long **)(lVar7 + 0xa0) = plVar3;
    if ((plVar4 != (long *)0x0) &&
       (iVar1 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar4 + 8))();
    }
    if ((!bVar2) && (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      lVar7 = *plVar3;
      goto LAB_0039f9fc;
    }
  }
  else if ((int)plVar3[1] == 0) {
    lVar7 = *plVar3;
LAB_0039f9fc:
    (**(code **)(lVar7 + 8))(plVar3);
  }
  if (this[0x148] == (SnappingMonsterControllerComponent)0x0) {
    fVar8 = *(float *)(this + 0x14c);
    *(float *)(this + 0x14c) = fVar8 + param_1;
    if ((2.0 < fVar8 + param_1) &&
       (plVar3 = (long *)MonsterControllerComponent::FindNearestEnemy
                                   ((MonsterControllerComponent *)this), plVar3 != (long *)0x0)) {
      *(int *)(plVar3 + 1) = (int)plVar3[1] + 1;
      pVVar5 = *(Vector2 **)(this + 0x128);
      if (pVVar5 == (Vector2 *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x118),(Component *)this);
        pVVar5 = *(Vector2 **)(this + 0x128);
        if (pVVar5 != (Vector2 *)0x0) goto LAB_0039faa0;
      }
      else {
LAB_0039faa0:
        uVar6 = ShapeComponent::ContainsWorldPoint(pVVar5);
        if ((uVar6 & 1) != 0) {
          Attack(this);
        }
      }
      iVar1 = (int)plVar3[1] + -1;
      *(int *)(plVar3 + 1) = iVar1;
      if (iVar1 == 0) {
        (**(code **)(*plVar3 + 8))(plVar3);
        plVar3 = *(long **)(this + 0x80);
        goto joined_r0x0039fad8;
      }
    }
  }
  else {
    plVar3 = *(long **)(this + 0xf8);
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
      plVar3 = *(long **)(this + 0xf8);
      fVar8 = _DAT_0000000c;
      if (plVar3 != (long *)0x0) goto LAB_0039fa2c;
LAB_0039fae8:
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
      plVar3 = *(long **)(this + 0xf8);
    }
    else {
LAB_0039fa2c:
      lVar7 = (**(code **)(*plVar3 + 0x108))();
      plVar3 = *(long **)(this + 0xf8);
      fVar8 = *(float *)(lVar7 + 0xc);
      if (plVar3 == (long *)0x0) goto LAB_0039fae8;
    }
    lVar7 = (**(code **)(*plVar3 + 0x108))();
    if (*(float *)(lVar7 + 0x28) * DAT_00687828 < fVar8) {
      StopAttacking(this);
    }
  }
  plVar3 = *(long **)(this + 0x80);
joined_r0x0039fad8:
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    plVar3 = *(long **)(this + 0x80);
  }
  (**(code **)(*plVar3 + 200))(CONCAT44(in_register_00005004,param_1));
  plVar3 = *(long **)(this + 0x98);
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    plVar3 = *(long **)(this + 0x98);
  }
                    /* WARNING: Could not recover jumptable at 0x0039fb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 200))(CONCAT44(in_register_00005004,param_1));
  return;
}


