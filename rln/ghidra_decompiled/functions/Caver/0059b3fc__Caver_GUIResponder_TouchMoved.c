/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b3fc
 * Function: Caver::GUIResponder::TouchMoved
 * Signature: undefined __thiscall TouchMoved(GUIResponder * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIResponder::TouchMoved(Caver::FWTouch const&) */

void __thiscall Caver::GUIResponder::TouchMoved(GUIResponder *this,FWTouch *param_1)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 0059b414 to 0069b41f has its CatchHandler @ 0059c604 */
  lVar1 = (**(code **)(*(long *)this + 0x30))();
  if (lVar1 != 0) {
                    /* try { // try from 0059b420 to 0069b427 has its CatchHandler @ 0059c360 */
    plVar2 = (long *)(**(code **)(*(long *)this + 0x30))(this);
                    /* try { // try from 0059b434 to 0069b43b has its CatchHandler @ 0059c604 */
                    /* WARNING: Could not recover jumptable at 0x0059b444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 8))(plVar2,param_1);
    return;
  }
  return;
}


