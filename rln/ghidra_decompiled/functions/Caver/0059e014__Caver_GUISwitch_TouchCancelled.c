/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059e014
 * Function: Caver::GUISwitch::TouchCancelled
 * Signature: undefined __thiscall TouchCancelled(GUISwitch * this, FWTouch * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISwitch::TouchCancelled(Caver::FWTouch const&) */

void __thiscall Caver::GUISwitch::TouchCancelled(GUISwitch *this,FWTouch *param_1)

{
  uint uVar1;
  uint uVar2;
  
                    /* catch() { ... } // from try @ 0059dda8 with catch @ 0059e02c */
  if (*(long *)(this + 0x158) == *(long *)param_1) {
    if (((byte)this[0x120] & 1) != 0) {
      GUIControl::SendActionsForControlEvent((GUIControl *)this,0x20,0);
      uVar2 = *(uint *)(this + 0x120);
      uVar1 = uVar2 & 0xfffffffe;
      *(uint *)(this + 0x120) = uVar1;
      if (uVar1 != uVar2) {
                    /* catch() { ... } // from try @ 0059dd9c with catch @ 0059e06c */
        (**(code **)(*(long *)this + 0x130))(this);
      }
                    /* catch() { ... } // from try @ 0059dd88 with catch @ 0059e074 */
                    /* catch() { ... } // from try @ 0059dde8 with catch @ 0059e07c */
      GUIControl::SendActionsForControlEvent((GUIControl *)this,0x200000,0);
    }
    *(undefined8 *)(this + 0x158) = 0;
  }
  return;
}


