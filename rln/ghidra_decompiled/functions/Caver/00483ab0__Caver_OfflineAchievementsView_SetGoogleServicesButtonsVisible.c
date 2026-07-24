/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00483ab0
 * Function: Caver::OfflineAchievementsView::SetGoogleServicesButtonsVisible
 * Signature: undefined __thiscall SetGoogleServicesButtonsVisible(OfflineAchievementsView * this, bool param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsView::SetGoogleServicesButtonsVisible(bool) */

void __thiscall
Caver::OfflineAchievementsView::SetGoogleServicesButtonsVisible
          (OfflineAchievementsView *this,bool param_1)

{
                    /* try { // try from 00483ab4 to 00583acb has its CatchHandler @ 00483cd0 */
  if (*(long *)(this + 0x148) != 0) {
    *(byte *)(*(long *)(this + 0x148) + 0xe4) = ~param_1 & 1;
  }
  if (*(long *)(this + 0x158) != 0) {
    *(byte *)(*(long *)(this + 0x158) + 0xe4) = ~param_1 & 1;
  }
  return;
}


