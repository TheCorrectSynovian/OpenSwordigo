/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00357a28
 * Function: Caver::CharAnimControllerComponent::SwingWithAnimation
 * Signature: undefined __thiscall SwingWithAnimation(CharAnimControllerComponent * this, intrusive_ptr * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Caver::CharAnimControllerComponent::SwingWithAnimation(boost::intrusive_ptr<Caver::AnimKeysNode>
   const&) */

void __thiscall
Caver::CharAnimControllerComponent::SwingWithAnimation
          (CharAnimControllerComponent *this,intrusive_ptr *param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  code *pcVar4;
  long *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = *(long **)param_1;
  if (local_30 != (long *)0x0) {
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
  }
  plVar3 = *(long **)(this + 0x170);
  *(long **)(this + 0x170) = local_30;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
    local_30 = *(long **)(this + 0x170);
  }
  if (local_30 != (long *)0x0) {
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
  }
  plVar3 = *(long **)(this + 0x168);
  *(long **)(this + 0x168) = local_30;
  if ((plVar3 != (long *)0x0) &&
     (iVar1 = (int)plVar3[1] + -1, *(int *)(plVar3 + 1) = iVar1, iVar1 == 0)) {
    (**(code **)(*plVar3 + 8))();
    local_30 = *(long **)(this + 0x170);
  }
  this[0x160] = (CharAnimControllerComponent)0x1;
  *(undefined4 *)((long)local_30 + 0xc) = 0;
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


