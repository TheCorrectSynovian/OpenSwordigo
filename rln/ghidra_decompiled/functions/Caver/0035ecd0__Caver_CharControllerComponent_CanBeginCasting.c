/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035ecd0
 * Function: Caver::CharControllerComponent::CanBeginCasting
 * Signature: undefined __thiscall CanBeginCasting(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::CanBeginCasting() */

bool __thiscall Caver::CharControllerComponent::CanBeginCasting(CharControllerComponent *this)

{
  char cVar1;
  int iVar2;
  float fVar3;
  long *plVar4;
  long lVar5;
  Component *pCVar6;
  
  fVar3 = DAT_00683944;
  if (DAT_00683944 < *(float *)(this + 0x2f8)) {
    return false;
  }
  if (*(long *)(this + 0x80) == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x70),(Component *)this);
    cVar1 = *(char *)(*(long *)(this + 0x80) + 0x115);
  }
  else {
    cVar1 = *(char *)(*(long *)(this + 0x80) + 0x115);
  }
  if (cVar1 != '\0') {
    return false;
  }
  pCVar6 = *(Component **)(this + 400);
  if (pCVar6 == (Component *)0x0) {
    pCVar6 = *(Component **)(this + 0x98);
    if (pCVar6 == (Component *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      pCVar6 = *(Component **)(this + 0x98);
      if (pCVar6 != (Component *)0x0) goto LAB_0035edb4;
    }
    else {
LAB_0035edb4:
      *(int *)(pCVar6 + 8) = *(int *)(pCVar6 + 8) + 1;
    }
    plVar4 = *(long **)(this + 400);
    *(Component **)(this + 400) = pCVar6;
    if ((plVar4 == (long *)0x0) ||
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 != 0)) goto LAB_0035ed10;
    (**(code **)(*plVar4 + 8))();
    pCVar6 = *(Component **)(this + 400);
    if (*(long *)(pCVar6 + 0x140) == 0) goto LAB_0035edf4;
LAB_0035ed18:
    if (pCVar6 != (Component *)0x0) goto LAB_0035ee10;
LAB_0035ed1c:
    pCVar6 = *(Component **)(this + 0x98);
    if (pCVar6 == (Component *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      pCVar6 = *(Component **)(this + 0x98);
      if (pCVar6 != (Component *)0x0) goto LAB_0035ed38;
    }
    else {
LAB_0035ed38:
      *(int *)(pCVar6 + 8) = *(int *)(pCVar6 + 8) + 1;
    }
    plVar4 = *(long **)(this + 400);
    *(Component **)(this + 400) = pCVar6;
    if ((plVar4 == (long *)0x0) ||
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 != 0)) goto LAB_0035ee10;
    (**(code **)(*plVar4 + 8))();
    pCVar6 = *(Component **)(this + 400);
    lVar5 = *(long *)(pCVar6 + 0x170);
  }
  else {
LAB_0035ed10:
    if (*(long *)(pCVar6 + 0x140) != 0) goto LAB_0035ed18;
LAB_0035edf4:
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar6 + 0x130),pCVar6);
    if (*(long *)(pCVar6 + 0x140) == 0) {
      return false;
    }
    pCVar6 = *(Component **)(this + 400);
    if (pCVar6 == (Component *)0x0) goto LAB_0035ed1c;
LAB_0035ee10:
    lVar5 = *(long *)(pCVar6 + 0x170);
  }
  if ((lVar5 != 0) &&
     (fVar3 < (*(float *)(lVar5 + 0x28) * DAT_0068493c - *(float *)(lVar5 + 0xc)) *
              *(float *)(lVar5 + 0x30) * *(float *)(lVar5 + 0x34))) {
    return false;
  }
  if (pCVar6 == (Component *)0x0) {
    pCVar6 = *(Component **)(this + 0x98);
    if (pCVar6 == (Component *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      pCVar6 = *(Component **)(this + 0x98);
      if (pCVar6 != (Component *)0x0) goto LAB_0035ee88;
    }
    else {
LAB_0035ee88:
      *(int *)(pCVar6 + 8) = *(int *)(pCVar6 + 8) + 1;
    }
    plVar4 = *(long **)(this + 400);
    *(Component **)(this + 400) = pCVar6;
    if ((plVar4 != (long *)0x0) &&
       (iVar2 = (int)plVar4[1] + -1, *(int *)(plVar4 + 1) = iVar2, iVar2 == 0)) {
      (**(code **)(*plVar4 + 8))();
      lVar5 = *(long *)(*(long *)(this + 400) + 0x168);
      goto joined_r0x0035eec4;
    }
  }
  lVar5 = *(long *)(pCVar6 + 0x168);
joined_r0x0035eec4:
  if ((lVar5 == 0) && (*(long *)(this + 0x2f0) == 0)) {
    return *(float *)(this + 0x2f8) <= fVar3;
  }
  return false;
}


