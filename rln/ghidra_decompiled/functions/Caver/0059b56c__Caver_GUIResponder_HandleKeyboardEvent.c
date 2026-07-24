/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b56c
 * Function: Caver::GUIResponder::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(GUIResponder * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIResponder::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall
Caver::GUIResponder::HandleKeyboardEvent(GUIResponder *this,GUIKeyboardEvent *param_1)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 0059b570 to 0069b577 has its CatchHandler @ 0059c190 */
                    /* try { // try from 0059b588 to 0069b593 has its CatchHandler @ 0059c180 */
  lVar1 = (**(code **)(*(long *)this + 0x30))();
  if (lVar1 != 0) {
    plVar2 = (long *)(**(code **)(*(long *)this + 0x30))(this);
                    /* WARNING: Could not recover jumptable at 0x0059b5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 0059b5b4 to 0069b5db has its CatchHandler @ 0059c600 */
    (**(code **)(*plVar2 + 0x28))(plVar2,param_1);
    return;
  }
  return;
}


