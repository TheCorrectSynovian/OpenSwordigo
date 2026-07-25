/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043E228
 * Mangled: _ZN5Caver15SkillPickerView22MenuItemSlotDeselectedEPNS_12MenuItemSlotE
 * Demangled: Caver::SkillPickerView::MenuItemSlotDeselected(Caver::MenuItemSlot *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5920  Caver::MenuItemSlot::SetSelected(bool)
 *
 * Referenced strings: 2
 *   insn=0x000000000043E244 string=0x00000000001F5920 "P'"
 *   insn=0x000000000043E25C string=0x000000000043E260 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillPickerView::MenuItemSlotDeselected(
        Caver::SkillPickerView *this,
        Caver::MenuItemSlot *a2)
{
  Caver::MenuItemSlot::SetSelected(a2, 1);
  return (*(__int64 (__fastcall **)(Caver::SkillPickerView *, Caver::MenuItemSlot *))(*(_QWORD *)this + 304LL))(
           this,
           a2);
}

