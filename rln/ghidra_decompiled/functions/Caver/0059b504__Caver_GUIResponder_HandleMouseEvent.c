/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059b504
 * Function: Caver::GUIResponder::HandleMouseEvent
 * Signature: undefined __thiscall HandleMouseEvent(GUIResponder * this, GUIMouseEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIResponder::HandleMouseEvent(Caver::GUIMouseEvent const&) */

void __thiscall Caver::GUIResponder::HandleMouseEvent(GUIResponder *this,GUIMouseEvent *param_1)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 0059b504 to 0069b50b has its CatchHandler @ 0059c8b8 */
  lVar1 = (**(code **)(*(long *)this + 0x30))();
                    /* try { // try from 0059b524 to 0069b52f has its CatchHandler @ 0059c600 */
                    /* try { // try from 0059b530 to 0069b537 has its CatchHandler @ 0059c24c */
  if ((lVar1 != 0) && ((*(uint *)(param_1 + 0xc) & 0xfffffffe) != 2)) {
                    /* try { // try from 0059b544 to 0069b54b has its CatchHandler @ 0059c600 */
    plVar2 = (long *)(**(code **)(*(long *)this + 0x30))(this);
                    /* try { // try from 0059b564 to 0069b56b has its CatchHandler @ 0059c1fc */
                    /* WARNING: Could not recover jumptable at 0x0059b568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x20))(plVar2,param_1);
    return;
  }
  return;
}


