/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F35A0
 * Mangled: ._ZN5Caver15SkillPickerView20MenuItemSlotSelectedEPNS_12MenuItemSlotE
 * Demangled: Caver::SkillPickerView::MenuItemSlotSelected(Caver::MenuItemSlot *)
 *
 * Callers: 1
 *   0x000000000043E070  Caver::SkillPickerView::MenuItemSlotSelected(Caver::MenuItemSlot *)
 *
 * Callees: 1
 *   0x000000000043E070  Caver::SkillPickerView::MenuItemSlotSelected(Caver::MenuItemSlot *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F35A8 string=0x00000000001F35AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::SkillPickerView::MenuItemSlotSelected(Caver::SkillPickerView *this, Caver::MenuItemSlot *a2)
{
  return _ZN5Caver15SkillPickerView20MenuItemSlotSelectedEPNS_12MenuItemSlotE(this, a2);
}

