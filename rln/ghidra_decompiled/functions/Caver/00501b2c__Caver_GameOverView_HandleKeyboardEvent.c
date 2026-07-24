/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00501b2c
 * Function: Caver::GameOverView::HandleKeyboardEvent
 * Signature: undefined __thiscall HandleKeyboardEvent(GameOverView * this, GUIKeyboardEvent * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GameOverView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&) */

void __thiscall
Caver::GameOverView::HandleKeyboardEvent(GameOverView *this,GUIKeyboardEvent *param_1)

{
  undefined8 *puVar1;
  
                    /* try { // try from 00501b2c to 00601f37 has its CatchHandler @ 00501b2c
                       catch() { ... } // from try @ 00501b2c with catch @ 00501b2c
                       catch() { ... } // from try @ 00501f3c with catch @ 00501b2c
                       catch() { ... } // from try @ 00502164 with catch @ 00501b2c */
  if ((((*(int *)(param_1 + 0xc) == 1) && (*(uint *)(param_1 + 0x10) < 0x27)) &&
      ((1L << ((ulong)*(uint *)(param_1 + 0x10) & 0x3f) & 0x4008020000U) != 0)) &&
     (puVar1 = *(undefined8 **)(this + 0xf0), puVar1 != (undefined8 *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00501b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*puVar1)(puVar1,this);
    return;
  }
  GUIResponder::HandleKeyboardEvent((GUIResponder *)this,param_1);
  return;
}


