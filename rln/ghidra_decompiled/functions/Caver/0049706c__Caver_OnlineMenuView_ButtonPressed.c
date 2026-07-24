/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0049706c
 * Function: Caver::OnlineMenuView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::OnlineMenuView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::OnlineMenuView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  long *plVar1;
  
  if (*(GUIEvent **)((long)param_1 + 0x108) == param_2) {
    plVar1 = (long *)OnlineController::SharedController();
                    /* WARNING: Could not recover jumptable at 0x004970a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x28))();
    return;
  }
  if (*(GUIEvent **)((long)param_1 + 0x118) != param_2) {
    return;
  }
  plVar1 = (long *)OnlineController::SharedController();
                    /* catch() { ... } // from try @ 0049700c with catch @ 004970b0 */
                    /* WARNING: Could not recover jumptable at 0x004970b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x30))();
  return;
}


