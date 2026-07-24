/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00394798
 * Function: Caver::BouncingMonsterControllerComponent::Prepare
 * Signature: undefined __thiscall Prepare(BouncingMonsterControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::BouncingMonsterControllerComponent::Prepare() */

void __thiscall
Caver::BouncingMonsterControllerComponent::Prepare(BouncingMonsterControllerComponent *this)

{
  int iVar1;
  long lVar2;
  AnimBlendNode *this_00;
  long *plVar3;
  long *local_48;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  MonsterControllerComponent::Prepare((MonsterControllerComponent *)this);
  plVar3 = *(long **)(this + 0xe0);
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar3 = *(long **)(this + 0xe0);
    if (plVar3 == (long *)0x0) goto LAB_00394924;
  }
  if (*(long *)(this + 0xf8) == 0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
    if (*(long *)(this + 0xf8) == 0) goto LAB_00394924;
    plVar3 = *(long **)(this + 0xe0);
  }
  this_00 = operator_new(0x30);
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar3 = *(long **)(this + 0xe0);
  }
  local_40 = (long *)(**(code **)(*plVar3 + 0x108))(plVar3);
  if (local_40 != (long *)0x0) {
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
  }
  plVar3 = *(long **)(this + 0xf8);
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xe8),(Component *)this);
    plVar3 = *(long **)(this + 0xf8);
  }
  local_48 = (long *)(**(code **)(*plVar3 + 0x108))();
  if (local_48 != (long *)0x0) {
    *(int *)(local_48 + 1) = (int)local_48[1] + 1;
  }
  AnimBlendNode::AnimBlendNode
            (this_00,(intrusive_ptr *)&local_40,(intrusive_ptr *)&local_48,_DAT_00684434,
             _DAT_00684434);
  *(int *)(this_00 + 8) = *(int *)(this_00 + 8) + 1;
  plVar3 = *(long **)(this + 0x100);
  *(AnimBlendNode **)(this + 0x100) = this_00;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  if ((local_48 != (long *)0x0) &&
     (iVar1 = (int)local_48[1] + -1, *(int *)(local_48 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_48 + 8))();
  }
  if ((local_40 != (long *)0x0) &&
     (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_40 + 8))();
  }
LAB_00394924:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


