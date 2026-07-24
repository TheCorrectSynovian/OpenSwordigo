/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b4ac
 * Function: Caver::GUIResponder::TouchCancelled
 * Signature: undefined __thiscall TouchCancelled(GUIResponder * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIResponder::TouchCancelled(Caver::FWTouch const&) */

void __thiscall Caver::GUIResponder::TouchCancelled(GUIResponder *this,FWTouch *param_1)

{
  long lVar1;
  long *plVar2;
  
  lVar1 = (**(code **)(*(long *)this + 0x30))();
  if (lVar1 != 0) {
                    /* try { // try from 0059b4d8 to 0069b4ff has its CatchHandler @ 0059c604 */
    plVar2 = (long *)(**(code **)(*(long *)this + 0x30))(this);
                    /* WARNING: Could not recover jumptable at 0x0059b4f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x18))(plVar2,param_1);
    return;
  }
  return;
}


