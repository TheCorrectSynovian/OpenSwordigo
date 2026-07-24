/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00472488
 * Function: Caver::SkillPickerViewController::SkillPickerViewController
 * Signature: undefined __thiscall SkillPickerViewController(SkillPickerViewController * this)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerViewController::SkillPickerViewController() */

void __thiscall
Caver::SkillPickerViewController::SkillPickerViewController(SkillPickerViewController *this)

{
  undefined *puVar1;
  
  GUIViewController::GUIViewController((GUIViewController *)this);
  puVar1 = PTR_vtable_007e7a30;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined **)this = puVar1 + 0x10;
  *(undefined **)(this + 0x48) = puVar1 + 0x88;
  return;
}


