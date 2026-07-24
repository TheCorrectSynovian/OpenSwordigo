/*
 * OpenSwordigo reverse-engineering evidence
 * Ghidra program: libswordigo.so
 * Address: 00472b84
 * Function: Caver::SkillPickerViewController::SkillPickerViewDidDismiss
 * Signature: undefined __thiscall SkillPickerViewDidDismiss(SkillPickerViewController * this, SkillPickerView * param_1)
 * Thunk: false
 * External: false
 *
 * GENERATED EVIDENCE. NOT CLEAN SOURCE.
 */


/* Caver::SkillPickerViewController::SkillPickerViewDidDismiss(Caver::SkillPickerView*) */

void __thiscall
Caver::SkillPickerViewController::SkillPickerViewDidDismiss
          (SkillPickerViewController *this,SkillPickerView *param_1)

{
  *(undefined8 *)(param_1 + 0xf8) = 0;
  GUIViewController::DismissModalViewController(*(GUIViewController **)(this + 0x28));
  return;
}


