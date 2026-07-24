/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 0053ba78
 * Function: Caver::SkillPickerView::SkillPickerView
 * Signature: undefined __thiscall SkillPickerView(SkillPickerView * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerView::SkillPickerView() */

void __thiscall Caver::SkillPickerView::SkillPickerView(SkillPickerView *this)

{
  undefined *puVar1;
  
  GUIView::GUIView((GUIView *)this);
  puVar1 = PTR_vtable_007e5e38;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined **)(this + 0xf0) = puVar1 + 0x160;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x140) = 0xffffffff;
  return;
}


