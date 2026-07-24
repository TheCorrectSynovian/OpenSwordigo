/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00411dfc
 * Function: Caver::Proto::AnimationControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(AnimationControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::AnimationControllerComponent::GetTypeName() const */

void __thiscall
Caver::Proto::AnimationControllerComponent::GetTypeName(AnimationControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch() { ... } // from try @ 00411ddc with catch @ 00411e3c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


