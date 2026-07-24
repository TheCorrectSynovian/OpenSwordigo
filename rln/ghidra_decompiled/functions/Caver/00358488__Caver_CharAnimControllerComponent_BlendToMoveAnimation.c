/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00358488
 * Function: Caver::CharAnimControllerComponent::BlendToMoveAnimation
 * Signature: undefined __cdecl BlendToMoveAnimation(float param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharAnimControllerComponent::BlendToMoveAnimation(float) */

void Caver::CharAnimControllerComponent::BlendToMoveAnimation(float param_1)

{
  int iVar1;
  long lVar2;
  long *in_x0;
  code *pcVar3;
  long *local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  local_30 = (long *)in_x0[0x2b];
  pcVar3 = *(code **)(*in_x0 + 0x108);
  if (local_30 != (long *)0x0) {
    *(int *)(local_30 + 1) = (int)local_30[1] + 1;
  }
  (*pcVar3)(in_x0,&local_30);
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


