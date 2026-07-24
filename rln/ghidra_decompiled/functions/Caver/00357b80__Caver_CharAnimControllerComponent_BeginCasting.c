/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00357b80
 * Function: Caver::CharAnimControllerComponent::BeginCasting
 * Signature: undefined __thiscall BeginCasting(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharAnimControllerComponent::BeginCasting() */

void __thiscall Caver::CharAnimControllerComponent::BeginCasting(CharAnimControllerComponent *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  long *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(this + 0x140);
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x130),(Component *)this);
    plVar3 = *(long **)(this + 0x140);
  }
  lVar4 = (**(code **)(*plVar3 + 0x108))();
  *(undefined4 *)(lVar4 + 0xc) = 0;
  plVar3 = *(long **)(this + 0x140);
  pcVar5 = *(code **)(*(long *)this + 0x108);
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x130),(Component *)this);
    plVar3 = *(long **)(this + 0x140);
  }
  local_40 = (long *)(**(code **)(*plVar3 + 0x108))();
  if (local_40 != (long *)0x0) {
    *(int *)(local_40 + 1) = (int)local_40[1] + 1;
  }
  (*pcVar5)(_DAT_00683c38,this,&local_40);
  if ((local_40 == (long *)0x0) ||
     (iVar1 = (int)local_40[1] + -1, *(int *)(local_40 + 1) = iVar1, iVar1 != 0)) {
    plVar3 = *(long **)(this + 0x140);
  }
  else {
    (**(code **)(*local_40 + 8))();
    plVar3 = *(long **)(this + 0x140);
  }
  if (plVar3 == (long *)0x0) {
    ComponentOutletBase::Connect((ComponentOutletBase *)(this + 0x130),(Component *)this);
    plVar3 = *(long **)(this + 0x140);
  }
  lVar4 = (**(code **)(*plVar3 + 0x108))();
  if (lVar4 != 0) {
    *(int *)(lVar4 + 8) = *(int *)(lVar4 + 8) + 1;
  }
  plVar3 = *(long **)(this + 0x168);
  *(long *)(this + 0x168) = lVar4;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  this[0x160] = (CharAnimControllerComponent)0x0;
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


