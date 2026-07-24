/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00395e40
 * Function: Caver::ChargingMonsterControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(ChargingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::ChargingMonsterControllerComponent::Prepare() */

void __thiscall
Caver::ChargingMonsterControllerComponent::Prepare(ChargingMonsterControllerComponent *this)

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
  MonsterControllerComponent::Prepare((MonsterControllerComponent *)this);
  pAVar4 = operator_new(0x30);
  plVar5 = *(long **)(this + 0xf8);
  if (plVar5 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
    plVar5 = *(long **)(this + 0xf8);
    if (plVar5 != (long *)0x0) goto LAB_00395e94;
    local_50 = (long *)0x0;
    plVar5 = *(long **)(this + 0x110);
    if (plVar5 == (long *)0x0) goto LAB_00395ec0;
LAB_00395eec:
    local_58 = (long *)(**(code **)(*plVar5 + 0x108))();
    if (local_58 != (long *)0x0) {
      *(int *)(local_58 + 1) = (int)local_58[1] + 1;
    }
  }
  else {
LAB_00395e94:
    local_50 = (long *)(**(code **)(*plVar5 + 0x108))(plVar5);
    if (local_50 != (long *)0x0) {
      *(int *)(local_50 + 1) = (int)local_50[1] + 1;
    }
    plVar5 = *(long **)(this + 0x110);
    if (plVar5 != (long *)0x0) goto LAB_00395eec;
LAB_00395ec0:
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x100),(Component *)this);
    plVar5 = *(long **)(this + 0x110);
    if (plVar5 != (long *)0x0) goto LAB_00395eec;
    local_58 = (long *)0x0;
  }
  fVar3 = _DAT_00684434;
  AnimBlendNode::AnimBlendNode
            (pAVar4,(intrusive_ptr *)&local_50,(intrusive_ptr *)&local_58,_DAT_00684434,-1.0);
  *(int *)(pAVar4 + 8) = *(int *)(pAVar4 + 8) + 1;
  plVar5 = *(long **)(this + 0x120);
  *(AnimBlendNode **)(this + 0x120) = pAVar4;
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
  plVar5 = *(long **)(this + 0xe0);
  if (plVar5 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar5 = *(long **)(this + 0xe0);
    if (plVar5 == (long *)0x0) {
      local_50 = (long *)0x0;
      goto LAB_0039600c;
    }
  }
  local_50 = (long *)(**(code **)(*plVar5 + 0x108))(plVar5);
  if (local_50 != (long *)0x0) {
    *(int *)(local_50 + 1) = (int)local_50[1] + 1;
  }
LAB_0039600c:
  local_58 = *(long **)(this + 0x120);
  if (local_58 != (long *)0x0) {
    *(int *)(local_58 + 1) = (int)local_58[1] + 1;
  }
  AnimBlendNode::AnimBlendNode
            (pAVar4,(intrusive_ptr *)&local_50,(intrusive_ptr *)&local_58,fVar3,fVar3);
  *(int *)(pAVar4 + 8) = *(int *)(pAVar4 + 8) + 1;
  plVar5 = *(long **)(this + 0x118);
  *(AnimBlendNode **)(this + 0x118) = pAVar4;
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
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


