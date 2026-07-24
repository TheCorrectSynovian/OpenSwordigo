/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00357d14
 * Function: Caver::CharAnimControllerComponent::FinishCasting
 * Signature: undefined __thiscall FinishCasting(CharAnimControllerComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharAnimControllerComponent::FinishCasting(boost::intrusive_ptr<Caver::AnimKeysNode>
   const&) */

void __thiscall
Caver::CharAnimControllerComponent::FinishCasting
          (CharAnimControllerComponent *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar5 = *(long *)param_1;
  if (lVar5 != 0) {
    *(int *)(lVar5 + 8) = *(int *)(lVar5 + 8) + 1;
    plVar3 = *(long **)(this + 0x168);
    *(long *)(this + 0x168) = lVar5;
    if ((plVar3 != (long *)0x0) &&
       (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
      (**(code **)(*plVar3 + 8))();
    }
    this[0x160] = (CharAnimControllerComponent)0x0;
    local_40 = *(long **)param_1;
    *(undefined4 *)((long)local_40 + 0xc) = 0;
    pcVar6 = *(code **)(*(long *)this + 0x108);
    if (local_40 != (long *)0x0) {
      *(int *)(local_40 + 1) = (int)local_40[1] + 1;
    }
    (*pcVar6)(_DAT_00683c38,this,&local_40);
    goto LAB_00357e8c;
  }
  plVar3 = *(long **)(this + 0xe0);
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
    plVar3 = *(long **)(this + 0xe0);
    if (plVar3 != (long *)0x0) goto LAB_00357dd4;
  }
  else {
LAB_00357dd4:
    lVar5 = (**(code **)(*plVar3 + 0x108))();
    if (lVar5 != 0) {
      plVar3 = *(long **)(this + 0xe0);
      if (plVar3 == (long *)0x0) {
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
        plVar3 = *(long **)(this + 0xe0);
        if (plVar3 != (long *)0x0) goto LAB_00357e04;
        lVar5 = 0;
LAB_00357e28:
        ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0xd0),(Component *)this);
        plVar3 = *(long **)(this + 0xe0);
      }
      else {
LAB_00357e04:
        lVar5 = (**(code **)(*plVar3 + 0x108))();
        plVar3 = *(long **)(this + 0xe0);
        if (plVar3 == (long *)0x0) goto LAB_00357e28;
      }
      lVar4 = (**(code **)(*plVar3 + 0x108))(plVar3);
      *(float *)(lVar5 + 0xc) = *(float *)(lVar4 + 0x28) * 0.5;
    }
  }
  local_40 = *(long **)(this + 0x158);
  pcVar6 = *(code **)(*(long *)this + 0x108);
  if (local_40 != (long *)0x0) {
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
  }
  (*pcVar6)(_DAT_00683c38,this,&local_40);
LAB_00357e8c:
  if ((local_40 != (long *)0x0) &&
     (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_40 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


