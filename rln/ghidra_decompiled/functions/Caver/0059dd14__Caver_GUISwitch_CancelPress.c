/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0059dd14
 * Function: Caver::GUISwitch::CancelPress
 * Signature: undefined __thiscall CancelPress(GUISwitch * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUISwitch::CancelPress() */

void __thiscall Caver::GUISwitch::CancelPress(GUISwitch *this)

{
  uint uVar1;
  uint uVar2;
  
  if (((byte)this[0x120] & 1) != 0) {
    GUIControl::SendActionsForControlEvent((GUIControl *)this,0x20,0);
    uVar2 = *(uint *)(this + 0x120);
    uVar1 = uVar2 & 0xfffffffe;
    *(uint *)(this + 0x120) = uVar1;
    if (uVar1 != uVar2) {
      (**(code **)(*(long *)this + 0x130))(this);
    }
    GUIControl::SendActionsForControlEvent((GUIControl *)this,0x200000,0);
  }
  *(undefined8 *)(this + 0x158) = 0;
  return;
}


