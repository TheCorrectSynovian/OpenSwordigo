/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b3a4
 * Function: Caver::GUIResponder::TouchBegan
 * Signature: undefined __thiscall TouchBegan(GUIResponder * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIResponder::TouchBegan(Caver::FWTouch const&) */

void __thiscall Caver::GUIResponder::TouchBegan(GUIResponder *this,FWTouch *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  lVar1 = (**(code **)(*(long *)this + 0x30))();
  if (lVar1 != 0) {
                    /* try { // try from 0059b3c8 to 0069b3ef has its CatchHandler @ 0059bedc */
    puVar2 = (undefined8 *)(**(code **)(*(long *)this + 0x30))(this);
                    /* WARNING: Could not recover jumptable at 0x0059b3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar2)(puVar2,param_1);
    return;
  }
                    /* try { // try from 0059b3f4 to 0069b3fb has its CatchHandler @ 0059c8b8 */
  return;
}


