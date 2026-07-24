/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00599224
 * Function: Caver::GUINavigationController::UnloadView
 * Signature: undefined __thiscall UnloadView(GUINavigationController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUINavigationController::UnloadView() */

void __thiscall Caver::GUINavigationController::UnloadView(GUINavigationController *this)

{
  if (*(long **)(this + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00599234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x50) + 0x30))();
    return;
  }
  return;
}


