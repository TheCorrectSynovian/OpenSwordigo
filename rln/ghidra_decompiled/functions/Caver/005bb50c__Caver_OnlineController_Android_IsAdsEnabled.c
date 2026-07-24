/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005bb50c
 * Function: Caver::OnlineController_Android::IsAdsEnabled
 * Signature: undefined __cdecl IsAdsEnabled(void)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineController_Android::IsAdsEnabled() */

uint Caver::OnlineController_Android::IsAdsEnabled(void)

{
  uint uVar1;
  StoreController *pSVar2;
  ulong uVar3;
  
  pSVar2 = (StoreController *)StoreController::SharedController();
  uVar3 = StoreController::IsGuideUnlockedCheck(pSVar2);
  if ((uVar3 & 1) == 0) {
    pSVar2 = (StoreController *)StoreController::SharedController();
    uVar3 = StoreController::IsCoinDoublerUnlockedCheck(pSVar2);
    if ((uVar3 & 1) == 0) {
      pSVar2 = (StoreController *)StoreController::SharedController();
      uVar1 = StoreController::IsNoAdsUnlockedCheck(pSVar2);
      uVar1 = uVar1 ^ 1;
      goto LAB_005bb540;
    }
  }
  uVar1 = 0;
LAB_005bb540:
                    /* catch() { ... } // from try @ 005baf4c with catch @ 005bb548 */
  return uVar1 & 1;
}


