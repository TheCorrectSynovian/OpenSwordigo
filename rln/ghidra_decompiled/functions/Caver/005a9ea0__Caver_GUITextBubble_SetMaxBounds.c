/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 005a9ea0
 * Function: Caver::GUITextBubble::SetMaxBounds
 * Signature: undefined __thiscall SetMaxBounds(GUITextBubble * this, Rectangle * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::GUITextBubble::SetMaxBounds(Caver::Rectangle const&) */

void __thiscall Caver::GUITextBubble::SetMaxBounds(GUITextBubble *this,Rectangle *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)param_1;
  this[0x20] = (GUITextBubble)0x1;
  *(undefined8 *)(this + 8) = uVar2;
  *(undefined8 *)this = uVar1;
  return;
}


