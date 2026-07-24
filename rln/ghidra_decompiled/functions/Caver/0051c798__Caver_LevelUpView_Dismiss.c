/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051c798
 * Function: Caver::LevelUpView::Dismiss
 * Signature: undefined __thiscall Dismiss(LevelUpView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LevelUpView::Dismiss() */

void __thiscall Caver::LevelUpView::Dismiss(LevelUpView *this)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(this + 0xf0);
  if (puVar1 != (undefined8 *)0x0) {
    (**(code **)*puVar1)(puVar1,this);
  }
  GUIView::DismissModalView((GUIView *)this,(GUIView *)0x0);
  return;
}


