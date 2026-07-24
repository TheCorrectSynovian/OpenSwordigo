/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00484e10
 * Function: Caver::OfflineAchievementsView::DidMoveToWindow
 * Signature: undefined __thiscall DidMoveToWindow(OfflineAchievementsView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OfflineAchievementsView::DidMoveToWindow() */

void __thiscall Caver::OfflineAchievementsView::DidMoveToWindow(OfflineAchievementsView *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00484e44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 200))(this);
    return;
  }
  return;
}


