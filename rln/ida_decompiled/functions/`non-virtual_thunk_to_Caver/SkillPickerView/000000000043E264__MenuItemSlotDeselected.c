/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043E264
 * Mangled: _ZThn240_N5Caver15SkillPickerView22MenuItemSlotDeselectedEPNS_12MenuItemSlotE
 * Demangled: `non-virtual thunk to'Caver::SkillPickerView::MenuItemSlotDeselected(Caver::MenuItemSlot *)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F5920  Caver::MenuItemSlot::SetSelected(bool)
 *
 * Referenced strings: 2
 *   insn=0x000000000043E280 string=0x00000000001F5920 "P'"
 *   insn=0x000000000043E298 string=0x000000000043E29C "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall `non-virtual thunk to'Caver::SkillPickerView::MenuItemSlotDeselected(
        Caver::SkillPickerView *this,
        Caver::MenuItemSlot *a2)
{
  Caver::MenuItemSlot::SetSelected(a2, 1);
  return (*(__int64 (__fastcall **)(char *, Caver::MenuItemSlot *))(*((_QWORD *)this - 30) + 304LL))(
           (char *)this - 240,
           a2);
}

