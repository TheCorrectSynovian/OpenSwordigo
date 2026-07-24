/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00356bcc
 * Function: Caver::CharAnimControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharAnimControllerComponent::Prepare() */

void __thiscall Caver::CharAnimControllerComponent::Prepare(CharAnimControllerComponent *this)

{
  int iVar1;
  long lVar2;
  float fVar3;
  AnimBlendNode *pAVar4;
  long *plVar5;
  long *local_58;
  long *local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pAVar4 = operator_new(0x30);
  plVar5 = *(long **)(this + 200);
  if (plVar5 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xb8),(Component *)this);
    plVar5 = *(long **)(this + 200);
    if (plVar5 != (long *)0x0) goto LAB_00356c1c;
    local_50 = (long *)0x0;
    plVar5 = *(long **)(this + 0xe0);
    if (plVar5 == (long *)0x0) goto LAB_00356c48;
LAB_00356c74:
    local_58 = (long *)(**(code **)(*plVar5 + 0x108))();
    if (local_58 != (long *)0x0) {
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    }
  }
  else {
LAB_00356c1c:
    local_50 = (long *)(**(code **)(*plVar5 + 0x108))(plVar5);
    if (local_50 != (long *)0x0) {
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    }
    plVar5 = *(long **)(this + 0xe0);
    if (plVar5 != (long *)0x0) goto LAB_00356c74;
LAB_00356c48:
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar5 = *(long **)(this + 0xe0);
    if (plVar5 != (long *)0x0) goto LAB_00356c74;
    local_58 = (long *)0x0;
  }
  fVar3 = _DAT_00684434;
  AnimBlendNode::AnimBlendNode
            (pAVar4,(intrusive_ptr *)&local_50,(intrusive_ptr *)&local_58,_DAT_00684434,
             _DAT_00684434);
  *(int *)(pAVar4 + 8) = *(int *)(pAVar4 + 8) + 1;
  plVar5 = *(long **)(this + 0x148);
  *(AnimBlendNode **)(this + 0x148) = pAVar4;
  if ((plVar5 != (long *)0x0) &&
     (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  if ((local_58 != (long *)0x0) &&
     (iVar1 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if ((local_50 != (long *)0x0) &&
     (iVar1 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  pAVar4 = operator_new(0x30);
  plVar5 = *(long **)(this + 0xf8);
  if (plVar5 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
    plVar5 = *(long **)(this + 0xf8);
    if (plVar5 != (long *)0x0) goto LAB_00356d68;
    local_50 = (long *)0x0;
    plVar5 = *(long **)(this + 0x128);
  }
  else {
LAB_00356d68:
    local_50 = (long *)(**(code **)(*plVar5 + 0x108))(plVar5);
    if (local_50 != (long *)0x0) {
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    }
    plVar5 = *(long **)(this + 0x128);
  }
  if (plVar5 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x118),(Component *)this);
    plVar5 = *(long **)(this + 0x128);
    if (plVar5 == (long *)0x0) {
      local_58 = (long *)0x0;
      goto LAB_00356de4;
    }
  }
  local_58 = (long *)(**(code **)(*plVar5 + 0x108))();
  if (local_58 != (long *)0x0) {
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
  }
LAB_00356de4:
  AnimBlendNode::AnimBlendNode
            (pAVar4,(intrusive_ptr *)&local_50,(intrusive_ptr *)&local_58,DAT_00687824,DAT_00687824)
  ;
  *(int *)(pAVar4 + 8) = *(int *)(pAVar4 + 8) + 1;
  plVar5 = *(long **)(this + 0x150);
  *(AnimBlendNode **)(this + 0x150) = pAVar4;
  if ((plVar5 != (long *)0x0) &&
     (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  if ((local_58 != (long *)0x0) &&
     (iVar1 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if ((local_50 != (long *)0x0) &&
     (iVar1 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  pAVar4 = operator_new(0x30);
  local_50 = *(long **)(this + 0x148);
  if (local_50 != (long *)0x0) {
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
  }
  local_58 = *(long **)(this + 0x150);
  if (local_58 != (long *)0x0) {
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
  }
  AnimBlendNode::AnimBlendNode
            (pAVar4,(intrusive_ptr *)&local_50,(intrusive_ptr *)&local_58,fVar3,fVar3);
  *(int *)(pAVar4 + 8) = *(int *)(pAVar4 + 8) + 1;
  plVar5 = *(long **)(this + 0x158);
  *(AnimBlendNode **)(this + 0x158) = pAVar4;
  if ((plVar5 != (long *)0x0) &&
     (iVar1 = (int)plVar5[1] + -1, *(int *)(plVar5 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar5 + 8))();
  }
  if ((local_58 != (long *)0x0) &&
     (iVar1 = (int)local_58[1] + -1, *(int *)(local_58 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_58 + 8))();
  }
  if ((local_50 != (long *)0x0) &&
     (iVar1 = (int)local_50[1] + -1, *(int *)(local_50 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_50 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


