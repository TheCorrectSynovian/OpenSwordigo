/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059920c
 * Function: Caver::GUINavigationController::ResumeView
 * Signature: undefined __thiscall ResumeView(GUINavigationController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUINavigationController::ResumeView() */

void __thiscall Caver::GUINavigationController::ResumeView(GUINavigationController *this)

{
  if (*(long **)(this + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0059921c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x50) + 0x28))();
    return;
  }
  return;
}


