/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0035ef40
 * Function: Caver::CharControllerComponent::SetInitialAnimationControllerState
 * Signature: undefined __thiscall SetInitialAnimationControllerState(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::SetInitialAnimationControllerState() */

void __thiscall
Caver::CharControllerComponent::SetInitialAnimationControllerState(CharControllerComponent *this)

{
  int iVar1;
  CharAnimControllerComponent *pCVar2;
  long *plVar3;
  
  pCVar2 = *(CharAnimControllerComponent **)(this + 400);
  if (pCVar2 == (CharAnimControllerComponent *)0x0) {
    pCVar2 = *(CharAnimControllerComponent **)(this + 0x98);
    if (pCVar2 == (CharAnimControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      pCVar2 = *(CharAnimControllerComponent **)(this + 0x98);
      if (pCVar2 != (CharAnimControllerComponent *)0x0) goto LAB_0035ef74;
    }
    else {
LAB_0035ef74:
      *(int *)(pCVar2 + 8) = *(int *)(pCVar2 + 8) + 1;
    }
    plVar3 = *(long **)(this + 400);
    *(CharAnimControllerComponent **)(this + 400) = pCVar2;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))(plVar3);
      pCVar2 = *(CharAnimControllerComponent **)(this + 400);
    }
    if (pCVar2 == (CharAnimControllerComponent *)0x0) {
      return;
    }
  }
  CharAnimControllerComponent::Reset(pCVar2);
  if (*(int *)(this + 0x230) != 0) {
    pCVar2 = *(CharAnimControllerComponent **)(this + 400);
    if (pCVar2 == (CharAnimControllerComponent *)0x0) {
      pCVar2 = *(CharAnimControllerComponent **)(this + 0x98);
      if (pCVar2 == (CharAnimControllerComponent *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
        pCVar2 = *(CharAnimControllerComponent **)(this + 0x98);
        if (pCVar2 != (CharAnimControllerComponent *)0x0) goto LAB_0035f014;
      }
      else {
LAB_0035f014:
        *(int *)(pCVar2 + 8) = *(int *)(pCVar2 + 8) + 1;
      }
      plVar3 = *(long **)(this + 400);
      *(CharAnimControllerComponent **)(this + 400) = pCVar2;
      if ((plVar3 != (long *)0x0) &&
         (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
        (**(code **)(*plVar3 + 8))(plVar3);
        pCVar2 = *(CharAnimControllerComponent **)(this + 400);
      }
    }
    CharAnimControllerComponent::StartMoving(pCVar2);
  }
  if (*(int *)(this + 0x250) != 3) {
    if (this[0x25c] == (CharControllerComponent)0x0) {
      return;
    }
    pCVar2 = *(CharAnimControllerComponent **)(this + 400);
    if (pCVar2 != (CharAnimControllerComponent *)0x0) goto LAB_0035efec;
    pCVar2 = *(CharAnimControllerComponent **)(this + 0x98);
    if (pCVar2 == (CharAnimControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      pCVar2 = *(CharAnimControllerComponent **)(this + 0x98);
      if (pCVar2 != (CharAnimControllerComponent *)0x0) goto LAB_0035f0cc;
    }
    else {
LAB_0035f0cc:
      *(int *)(pCVar2 + 8) = *(int *)(pCVar2 + 8) + 1;
    }
    plVar3 = *(long **)(this + 400);
    *(CharAnimControllerComponent **)(this + 400) = pCVar2;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))(plVar3);
      pCVar2 = *(CharAnimControllerComponent **)(this + 400);
    }
LAB_0035efec:
    CharAnimControllerComponent::StartFalling(pCVar2);
    return;
  }
  pCVar2 = *(CharAnimControllerComponent **)(this + 400);
  if (pCVar2 != (CharAnimControllerComponent *)0x0) goto LAB_0035efcc;
  pCVar2 = *(CharAnimControllerComponent **)(this + 0x98);
  if (pCVar2 == (CharAnimControllerComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    pCVar2 = *(CharAnimControllerComponent **)(this + 0x98);
    if (pCVar2 != (CharAnimControllerComponent *)0x0) goto LAB_0035f070;
  }
  else {
LAB_0035f070:
    *(int *)(pCVar2 + 8) = *(int *)(pCVar2 + 8) + 1;
  }
  plVar3 = *(long **)(this + 400);
  *(CharAnimControllerComponent **)(this + 400) = pCVar2;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))(plVar3);
    pCVar2 = *(CharAnimControllerComponent **)(this + 400);
  }
LAB_0035efcc:
  CharAnimControllerComponent::StartJumping(pCVar2,false);
  return;
}


