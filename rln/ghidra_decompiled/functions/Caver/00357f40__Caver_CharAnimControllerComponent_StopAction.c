/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00357f40
 * Function: Caver::CharAnimControllerComponent::StopAction
 * Signature: undefined __thiscall StopAction(CharAnimControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharAnimControllerComponent::StopAction() */

void __thiscall Caver::CharAnimControllerComponent::StopAction(CharAnimControllerComponent *this)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  plVar3 = *(long **)(this + 0x168);
  *(undefined8 *)(this + 0x168) = 0;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = *(long **)(this + 0x170);
  *(undefined8 *)(this + 0x170) = 0;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
  }
  local_30 = *(long **)(this + 0x158);
  pcVar4 = *(code **)(*(long *)this + 0x108);
  if (local_30 != (long *)0x0) {
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
  }
  (*pcVar4)(_DAT_00683c38,this,&local_30);
  if ((local_30 != (long *)0x0) &&
     (iVar1 = (int)local_30[1] + -1, *(int *)(local_30 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*local_30 + 8))();
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


