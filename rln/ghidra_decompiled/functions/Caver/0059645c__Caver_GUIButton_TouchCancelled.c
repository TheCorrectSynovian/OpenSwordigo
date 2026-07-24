/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059645c
 * Function: Caver::GUIButton::TouchCancelled
 * Signature: undefined __thiscall TouchCancelled(GUIButton * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::TouchCancelled(Caver::FWTouch const&) */

void __thiscall Caver::GUIButton::TouchCancelled(GUIButton *this,FWTouch *param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (*(long *)(this + 0x1c8) == *(long *)param_1) {
    if (((byte)this[0x120] & 1) != 0) {
      GUIControl::SendActionsForControlEvent((GUIControl *)this,0x20,0);
      uVar2 = *(uint *)(this + 0x120);
      uVar1 = uVar2 & 0xfffffffe;
                    /* try { // try from 0059649c to 006964c3 has its CatchHandler @ 00596f70 */
      *(uint *)(this + 0x120) = uVar1;
      if (uVar1 != uVar2) {
        (**(code **)(*(long *)this + 0x130))(this);
      }
      GUIControl::SendActionsForControlEvent((GUIControl *)this,0x200000,0);
    }
    *(undefined8 *)(this + 0x1c8) = 0;
  }
  return;
}


