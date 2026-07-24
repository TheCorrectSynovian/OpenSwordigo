/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005beab4
 * Function: Caver::StoreController_Android::FinishedRestoringPurchases
 * Signature: undefined __thiscall FinishedRestoringPurchases(StoreController_Android * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::StoreController_Android::FinishedRestoringPurchases() */

void __thiscall
Caver::StoreController_Android::FinishedRestoringPurchases(StoreController_Android *this)

{
  this[0xa0] = (StoreController_Android)0x1;
  StoreController::ResetProductUnlocksToPurchases((StoreController *)this);
  return;
}


