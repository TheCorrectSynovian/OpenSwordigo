/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005963d8
 * Function: Caver::GUIButton::TouchEnded
 * Signature: undefined __thiscall TouchEnded(GUIButton * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::TouchEnded(Caver::FWTouch const&) */

void __thiscall Caver::GUIButton::TouchEnded(GUIButton *this,FWTouch *param_1)

{
  uint uVar1;
  
  if (*(long *)(this + 0x1c8) != *(long *)param_1) {
    return;
  }
  uVar1 = *(uint *)(this + 0x120);
                    /* try { // try from 005963fc to 0069640f has its CatchHandler @ 00596c30 */
  if ((uVar1 & 1) != 0) {
    if ((uVar1 >> 1 & 1) == 0) {
                    /* try { // try from 00596410 to 0069641b has its CatchHandler @ 00596f70 */
      GUIControl::SendActionsForControlEvent((GUIControl *)this,0x40,0);
      uVar1 = *(uint *)(this + 0x120);
      if ((uVar1 & 1) == 0) goto LAB_0059644c;
    }
    *(uint *)(this + 0x120) = uVar1 & 0xfffffffe;
    if ((uVar1 & 0xfffffffe) != uVar1) {
      (**(code **)(*(long *)this + 0x130))(this);
    }
    GUIControl::SendActionsForControlEvent((GUIControl *)this,0x200000,0);
  }
LAB_0059644c:
  *(undefined8 *)(this + 0x1c8) = 0;
                    /* try { // try from 00596454 to 0069647b has its CatchHandler @ 00596a3c */
  return;
}


