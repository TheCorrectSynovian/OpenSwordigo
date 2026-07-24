/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004891f4
 * Function: Caver::OnlineController::GetAnalyticsId
 * Signature: undefined __thiscall GetAnalyticsId(OnlineController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineController::GetAnalyticsId() */

void __thiscall Caver::OnlineController::GetAnalyticsId(OnlineController *this)

{
  long lVar1;
  long lVar2;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  FUN_00666bb8();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
                    /* catch() { ... } // from try @ 00488ee0 with catch @ 00489238 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


