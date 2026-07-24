/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a2f40
 * Function: Caver::ProfileSelectionView::DidMoveToWindow
 * Signature: undefined __thiscall DidMoveToWindow(ProfileSelectionView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionView::DidMoveToWindow() */

void __thiscall Caver::ProfileSelectionView::DidMoveToWindow(ProfileSelectionView *this)

{
  long lVar1;
  
  lVar1 = (**(code **)(*(long *)this + 0xf0))();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x004a2f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 200))(this);
    return;
  }
  return;
}


