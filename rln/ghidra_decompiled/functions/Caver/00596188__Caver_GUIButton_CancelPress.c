/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00596188
 * Function: Caver::GUIButton::CancelPress
 * Signature: undefined __thiscall CancelPress(GUIButton * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUIButton::CancelPress() */

void __thiscall Caver::GUIButton::CancelPress(GUIButton *this)

{
  uint uVar1;
  uint uVar2;
  
                    /* try { // try from 00596190 to 0069619b has its CatchHandler @ 00596a34 */
  if (((byte)this[0x120] & 1) != 0) {
    GUIControl::SendActionsForControlEvent((GUIControl *)this,0x20,0);
    uVar2 = *(uint *)(this + 0x120);
    uVar1 = uVar2 & 0xfffffffe;
    *(uint *)(this + 0x120) = uVar1;
    if (uVar1 != uVar2) {
                    /* try { // try from 005961c8 to 006961d3 has its CatchHandler @ 00596cbc */
      (**(code **)(*(long *)this + 0x130))(this);
    }
    GUIControl::SendActionsForControlEvent((GUIControl *)this,0x200000,0);
  }
  *(undefined8 *)(this + 0x1c8) = 0;
  return;
}


