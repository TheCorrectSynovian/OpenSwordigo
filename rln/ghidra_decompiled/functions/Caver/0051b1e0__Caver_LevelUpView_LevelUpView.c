/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0051b1e0
 * Function: Caver::LevelUpView::LevelUpView
 * Signature: undefined __thiscall LevelUpView(LevelUpView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::LevelUpView::LevelUpView() */

void __thiscall Caver::LevelUpView::LevelUpView(LevelUpView *this)

{
  undefined *puVar1;
  
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e6d88;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0xf0) = 0;
  return;
}


