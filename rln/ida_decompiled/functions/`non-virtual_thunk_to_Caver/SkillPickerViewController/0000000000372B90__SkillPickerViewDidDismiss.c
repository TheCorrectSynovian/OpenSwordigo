/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000372B90
 * Mangled: _ZThn72_N5Caver25SkillPickerViewController25SkillPickerViewDidDismissEPNS_15SkillPickerViewE
 * Demangled: `non-virtual thunk to'Caver::SkillPickerViewController::SkillPickerViewDidDismiss(Caver::SkillPickerView *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F7010  Caver::GUIViewController::DismissModalViewController(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000372B98 string=0x00000000001F7010 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SkillPickerViewController::SkillPickerViewDidDismiss(
        Caver::GUIViewController **this,
        Caver::SkillPickerView *a2)
{
  *((_QWORD *)a2 + 31) = 0;
  return Caver::GUIViewController::DismissModalViewController(*(this - 4));
}

