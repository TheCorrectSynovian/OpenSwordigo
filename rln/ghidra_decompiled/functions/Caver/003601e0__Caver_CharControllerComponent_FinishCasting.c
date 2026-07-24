/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 003601e0
 * Function: Caver::CharControllerComponent::FinishCasting
 * Signature: undefined __thiscall FinishCasting(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::FinishCasting() */

void __thiscall Caver::CharControllerComponent::FinishCasting(CharControllerComponent *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  CharAnimControllerComponent *this_00;
  Component *pCVar4;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  this_00 = *(CharAnimControllerComponent **)(this + 400);
  if (this_00 == (CharAnimControllerComponent *)0x0) {
    this_00 = *(CharAnimControllerComponent **)(this + 0x98);
    if (this_00 == (CharAnimControllerComponent *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
      this_00 = *(CharAnimControllerComponent **)(this + 0x98);
      if (this_00 != (CharAnimControllerComponent *)0x0) goto LAB_00360258;
    }
    else {
LAB_00360258:
      *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
    }
    plVar3 = *(long **)(this + 400);
    *(CharAnimControllerComponent **)(this + 400) = this_00;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
      this_00 = *(CharAnimControllerComponent **)(this + 400);
    }
  }
  pCVar4 = *(Component **)(this + 0x2f0);
  plVar3 = *(long **)(pCVar4 + 0x80);
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar4 + 0x70),pCVar4);
    if (*(long *)(pCVar4 + 0x80) == 0) {
      local_40 = (long *)0x0;
      goto LAB_003602cc;
    }
    pCVar4 = *(Component **)(this + 0x2f0);
    plVar3 = *(long **)(pCVar4 + 0x80);
    if (plVar3 == (long *)0x0) {
      ComponentOutletBase::Connect((ComponentOutletBase *)(pCVar4 + 0x70),pCVar4);
      plVar3 = *(long **)(pCVar4 + 0x80);
    }
  }
  local_40 = (long *)(**(code **)(*plVar3 + 0x108))();
  if (local_40 != (long *)0x0) {
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
  }
LAB_003602cc:
  CharAnimControllerComponent::FinishCasting(this_00,(intrusive_ptr *)&local_40);
  if ((local_40 != (long *)0x0) &&
     (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_40 + 8))();
  }
  SkillComponent::FinishCasting(*(SkillComponent **)(this + 0x2f0));
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


