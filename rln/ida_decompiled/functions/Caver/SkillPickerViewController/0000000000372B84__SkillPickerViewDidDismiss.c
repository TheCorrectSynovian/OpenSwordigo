/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000372B84
 * Mangled: _ZN5Caver25SkillPickerViewController25SkillPickerViewDidDismissEPNS_15SkillPickerViewE
 * Demangled: Caver::SkillPickerViewController::SkillPickerViewDidDismiss(Caver::SkillPickerView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 2
 *   insn=0x0000000000372B88 string=0x0000000000372B8C "!"
 *   insn=0x0000000000372B8C string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillPickerViewController::SkillPickerViewDidDismiss(
        Caver::GUIViewController **this,
        Caver::SkillPickerView *a2)
{
  *((_QWORD *)a2 + 31) = 0;
  return Caver::GUIViewController::DismissModalViewController(this[5]);
}

