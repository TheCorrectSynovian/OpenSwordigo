/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00360364
 * Function: Caver::CharControllerComponent::CancelCasting
 * Signature: undefined __thiscall CancelCasting(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharControllerComponent::CancelCasting() */

void __thiscall Caver::CharControllerComponent::CancelCasting(CharControllerComponent *this)

{
  int iVar1;
  long lVar2;
  CharAnimControllerComponent *this_00;
  long *plVar3;
  long *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  this_00 = *(CharAnimControllerComponent **)(this + 400);
  if (this_00 != (CharAnimControllerComponent *)0x0) goto LAB_0036038c;
  this_00 = *(CharAnimControllerComponent **)(this + 0x98);
  if (this_00 == (CharAnimControllerComponent *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x88),(Component *)this);
    this_00 = *(CharAnimControllerComponent **)(this + 0x98);
    if (this_00 != (CharAnimControllerComponent *)0x0) goto LAB_0036042c;
  }
  else {
LAB_0036042c:
    *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  }
  plVar3 = *(long **)(this + 400);
  *(CharAnimControllerComponent **)(this + 400) = this_00;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))(plVar3);
    this_00 = *(CharAnimControllerComponent **)(this + 400);
  }
LAB_0036038c:
  local_30 = (long *)0x0;
  CharAnimControllerComponent::FinishCasting(this_00,(intrusive_ptr *)&local_30);
  if ((local_30 != (long *)0x0) &&
     (iVar1 = (int)local_30[1] + -1, *(int *)(local_30 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_30 + 8))();
  }
  this[0x2ec] = (CharControllerComponent)0x0;
  SkillComponent::CancelCasting(*(SkillComponent **)(this + 0x2f0));
  plVar3 = *(long **)(this + 0x2f0);
  *(undefined8 *)(this + 0x2f0) = 0;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


