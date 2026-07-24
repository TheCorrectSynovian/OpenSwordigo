/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 004ff59c
 * Function: Caver::CharacterView::Dismiss
 * Signature: undefined __thiscall Dismiss(CharacterView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::CharacterView::Dismiss() */

void __thiscall Caver::CharacterView::Dismiss(CharacterView *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0x100);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,this);
    *(undefined8 *)(this + 0x100) = 0;
  }
  AddAnimations(this,true);
  return;
}


