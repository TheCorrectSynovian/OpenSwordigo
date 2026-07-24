/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0043567c
 * Function: Caver::Proto::FireBreathComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(FireBreathComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::FireBreathComponent::GetTypeName() const */

void __thiscall Caver::Proto::FireBreathComponent::GetTypeName(FireBreathComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* catch() { ... } // from try @ 004355e8 with catch @ 0043567c */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 004356a0 to 005356a7 has its CatchHandler @ 004356ac */
                    /* try { // try from 004356a8 to 0053571f has its CatchHandler @ 004354e4 */
  FUN_00666bb8();
                    /* catch() { ... } // from try @ 004356a0 with catch @ 004356ac */
                    /* catch() { ... } // from try @ 00435564 with catch @ 004356b0 */
                    /* catch() { ... } // from try @ 00435578 with catch @ 004356b4 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


