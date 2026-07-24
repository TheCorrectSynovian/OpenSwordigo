/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00416bcc
 * Function: Caver::Proto::DoorControllerComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(DoorControllerComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::DoorControllerComponent::GetTypeName() const */

void __thiscall Caver::Proto::DoorControllerComponent::GetTypeName(DoorControllerComponent *this)

{
  long lVar1;
  long lVar2;
  
                    /* try { // try from 00416bdc to 00516be3 has its CatchHandler @ 00416be8 */
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 00416bdc with catch @ 00416be8 */
                    /* catch() { ... } // from try @ 00416af4 with catch @ 00416bec */
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* try { // try from 00416c0c to 00516c13 has its CatchHandler @ 00416c18 */
                    /* catch() { ... } // from try @ 00416c0c with catch @ 00416c18 */
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 00416b3c with catch @ 00416c1c */
  __stack_chk_fail();
}


