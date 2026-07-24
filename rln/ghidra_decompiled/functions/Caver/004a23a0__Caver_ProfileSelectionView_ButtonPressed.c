/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004a23a0
 * Function: Caver::ProfileSelectionView::ButtonPressed
 * Signature: undefined __cdecl ButtonPressed(void * param_1, GUIEvent * param_2)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::ProfileSelectionView::ButtonPressed(void*, Caver::GUIEvent*) */

void Caver::ProfileSelectionView::ButtonPressed(void *param_1,GUIEvent *param_2)

{
  long *plVar1;
  
                    /* try { // try from 004a23a0 to 005a23ab has its CatchHandler @ 004a28a0 */
  plVar1 = *(long **)((long)param_1 + 0xf8);
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004a23b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))(plVar1,param_1);
    return;
  }
  return;
}


