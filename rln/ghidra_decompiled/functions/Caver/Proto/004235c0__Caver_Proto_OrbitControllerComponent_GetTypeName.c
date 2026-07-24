/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004235c0
 * Function: Caver::Proto::OrbitControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(OrbitControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::OrbitControllerComponent::GetTypeName() const */

void __thiscall Caver::Proto::OrbitControllerComponent::GetTypeName(OrbitControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 004235ec with catch @ 004235d8 */
                    /* try { // try from 004235e8 to 005235eb has its CatchHandler @ 004235fc */
                    /* try { // try from 004235ec to 0052360f has its CatchHandler @ 004235d8 */
  FUN_00666bb8();
                    /* catch() { ... } // from try @ 004235e8 with catch @ 004235fc */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


