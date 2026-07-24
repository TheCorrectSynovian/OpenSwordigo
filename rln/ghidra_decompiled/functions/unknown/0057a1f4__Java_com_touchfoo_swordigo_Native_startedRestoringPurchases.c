/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0057a1f4
 * Function: Java_com_touchfoo_swordigo_Native_startedRestoringPurchases
 * Signature: undefined Java_com_touchfoo_swordigo_Native_startedRestoringPurchases(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


void Java_com_touchfoo_swordigo_Native_startedRestoringPurchases(void)

{
  if (DAT_007e9c50 != (StoreController_Android *)0x0) {
    Caver::StoreController_Android::StartedRestoringPurchases(DAT_007e9c50);
    return;
  }
  return;
}


