/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005991f4
 * Function: Caver::GUINavigationController::SuspendView
 * Signature: undefined __thiscall SuspendView(GUINavigationController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUINavigationController::SuspendView() */

void __thiscall Caver::GUINavigationController::SuspendView(GUINavigationController *this)

{
  if (*(long **)(this + 0x50) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00599204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x50) + 0x20))();
    return;
  }
  return;
}


