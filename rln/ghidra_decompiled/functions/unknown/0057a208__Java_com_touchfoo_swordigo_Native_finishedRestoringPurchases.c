/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057a208
 * Function: Java_com_touchfoo_swordigo_Native_finishedRestoringPurchases
 * Signature: undefined Java_com_touchfoo_swordigo_Native_finishedRestoringPurchases(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_finishedRestoringPurchases(void)

{
  if (DAT_007e9c50 != (StoreController_Android *)0x0) {
    Caver::StoreController_Android::FinishedRestoringPurchases(DAT_007e9c50);
    return;
  }
  return;
}


