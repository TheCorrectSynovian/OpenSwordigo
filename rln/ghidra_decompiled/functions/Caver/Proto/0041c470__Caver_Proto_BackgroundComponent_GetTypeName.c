/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0041c470
 * Function: Caver::Proto::BackgroundComponent::GetTypeName
 * Signature: undefined __thiscall GetTypeName(BackgroundComponent * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::Proto::BackgroundComponent::GetTypeName() const */

void __thiscall Caver::Proto::BackgroundComponent::GetTypeName(BackgroundComponent *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
                    /* try { // try from 0041c4ac to 0051c4b7 has its CatchHandler @ 0041c154 */
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch() { ... } // from try @ 0041c424 with catch @ 0041c4b4 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


