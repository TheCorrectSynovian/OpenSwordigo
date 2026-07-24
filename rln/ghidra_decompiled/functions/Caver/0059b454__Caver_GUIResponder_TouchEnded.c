/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b454
 * Function: Caver::GUIResponder::TouchEnded
 * Signature: undefined __thiscall TouchEnded(GUIResponder * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIResponder::TouchEnded(Caver::FWTouch const&) */

void __thiscall Caver::GUIResponder::TouchEnded(GUIResponder *this,FWTouch *param_1)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 0059b454 to 0069b45b has its CatchHandler @ 0059c310 */
                    /* try { // try from 0059b460 to 0069b467 has its CatchHandler @ 0059c2a4 */
  lVar1 = (**(code **)(*(long *)this + 0x30))();
  if (lVar1 != 0) {
                    /* try { // try from 0059b47c to 0069b48b has its CatchHandler @ 0059c294 */
    plVar2 = (long *)(**(code **)(*(long *)this + 0x30))(this);
                    /* try { // try from 0059b48c to 0069b49b has its CatchHandler @ 0059c290 */
                    /* WARNING: Could not recover jumptable at 0x0059b49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 0059b49c to 0069b4a7 has its CatchHandler @ 0059c258 */
    (**(code **)(*plVar2 + 0x10))(plVar2,param_1);
    return;
  }
  return;
}


