/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041456c
 * Function: Caver::Proto::CharControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(CharControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::CharControllerComponent::GetTypeName() const */

void __thiscall Caver::Proto::CharControllerComponent::GetTypeName(CharControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00414590 to 005145b7 has its CatchHandler @ 004145c0 */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 004145b8 to 005145ef has its CatchHandler @ 00414220 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


