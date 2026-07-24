/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a2d70
 * Function: Caver::ProfileSelectionView::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(ProfileSelectionView * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall
Caver::ProfileSelectionView::HandleKeyboardEvent
          (ProfileSelectionView *this,GUIKeyboardEvent *param_1)

{
  long *plVar1;
  
  if ((*(int *)(param_1 + 0xc) == 1) &&
     (((*(int *)(param_1 + 0x10) == 0x21 || (*(int *)(param_1 + 0x10) == 0x1b)) &&
      (plVar1 = *(long **)(this + 0xf8), plVar1 != (long *)0x0)))) {
                    /* WARNING: Could not recover jumptable at 0x004a2da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,this);
    return;
  }
  GUIResponder::HandleKeyboardEvent((GUIResponder *)this,param_1);
  return;
}


