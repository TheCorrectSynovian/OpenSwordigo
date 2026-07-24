/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00357128
 * Function: Caver::CharAnimControllerComponent::Update
 * Signature: undefined __thiscall Update(CharAnimControllerComponent * this, float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharAnimControllerComponent::Update(float) */

void __thiscall
Caver::CharAnimControllerComponent::Update(CharAnimControllerComponent *this,float param_1)

{
  CharAnimControllerComponent *pCVar1;
  int iVar2;
  long lVar3;
  float fVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  code *pcVar9;
  float fVar10;
  long *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if (((this[0x160] == (CharAnimControllerComponent)0x0) ||
      (plVar5 = *(long **)(this + 0x168), plVar5 == (long *)0x0)) ||
     (*(float *)((long)plVar5 + 0xc) <= *(float *)(plVar5 + 5) * DAT_00687828)) goto LAB_003572f8;
  if (*(long *)(this + 0x158) != 0) {
    plVar5 = *(long **)(this + 0xe0);
    if (plVar5 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
      plVar5 = *(long **)(this + 0xe0);
      if (plVar5 != (long *)0x0) goto LAB_003571a4;
    }
    else {
LAB_003571a4:
      lVar6 = (**(code **)(*plVar5 + 0x108))();
      if (lVar6 != 0) {
        plVar5 = *(long **)(this + 0xe0);
        if (plVar5 == (long *)0x0) {
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
          plVar5 = *(long **)(this + 0xe0);
          if (plVar5 != (long *)0x0) goto LAB_003571d4;
          lVar6 = 0;
LAB_003571f8:
          ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
          plVar5 = *(long **)(this + 0xe0);
        }
        else {
LAB_003571d4:
          lVar6 = (**(code **)(*plVar5 + 0x108))();
          plVar5 = *(long **)(this + 0xe0);
          if (plVar5 == (long *)0x0) goto LAB_003571f8;
        }
        lVar7 = (**(code **)(*plVar5 + 0x108))(plVar5);
        *(float *)(lVar6 + 0xc) = *(float *)(lVar7 + 0x28) * 0.5;
      }
    }
    local_50 = *(long **)(this + 0x158);
    pcVar9 = *(code **)(*(long *)this + 0x108);
    if (local_50 != (long *)0x0) {
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    }
    (*pcVar9)(_DAT_00684434,this,&local_50);
    if ((local_50 != (long *)0x0) &&
       (iVar2 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*local_50 + 8))();
    }
    plVar5 = *(long **)(this + 0x168);
  }
  if (plVar5 == *(long **)(this + 0x170)) {
    *(undefined8 *)(this + 0x170) = 0;
    if (plVar5 == (long *)0x0) {
      *(undefined8 *)(this + 0x168) = 0;
      goto LAB_003572f8;
    }
    iVar2 = (int)plVar5[1] + -1;
    *(int *)(plVar5 + 1) = iVar2;
    if (iVar2 == 0) {
      (**(code **)(*plVar5 + 8))();
      plVar5 = *(long **)(this + 0x168);
      *(undefined8 *)(this + 0x168) = 0;
      goto joined_r0x003572d8;
    }
    *(undefined8 *)(this + 0x168) = 0;
  }
  else {
    *(undefined8 *)(this + 0x168) = 0;
joined_r0x003572d8:
    if (plVar5 == (long *)0x0) goto LAB_003572f8;
  }
  iVar2 = (int)plVar5[1] + -1;
  *(int *)(plVar5 + 1) = iVar2;
  if (iVar2 == 0) {
    (**(code **)(*plVar5 + 8))();
  }
LAB_003572f8:
  fVar4 = DAT_00683734;
  lVar6 = *(long *)(this + 0x178);
  if (((DAT_00683734 < *(float *)(this + 0x180)) && (lVar6 != 0)) &&
     ((*(char *)(lVar6 + 0x2d) == '\0' &&
      (fVar10 = *(float *)(this + 0x180) - param_1, *(float *)(this + 0x180) = fVar10,
      fVar10 <= fVar4)))) {
    *(undefined1 *)(lVar6 + 0x2d) = 1;
  }
  pCVar1 = this + 0x158;
  if (lVar6 != 0) {
    pCVar1 = this + 0x178;
  }
  plVar5 = *(long **)pCVar1;
  if (plVar5 != (long *)0x0) {
    *(int *)(plVar5 + 1) = (int)plVar5[1] + 2;
  }
  plVar8 = *(long **)(this + 0xa0);
  *(long **)(this + 0xa0) = plVar5;
  if ((plVar8 != (long *)0x0) &&
     (iVar2 = (int)plVar8[1] + -1, *(int *)(plVar8 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar8 + 8))();
  }
  if ((plVar5 != (long *)0x0) &&
     (iVar2 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar2, iVar2 == 0)) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  AnimationControllerComponent::Update((AnimationControllerComponent *)this,param_1);
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


