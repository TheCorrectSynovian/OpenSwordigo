/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043E714
 * Mangled: _ZN5Caver15SkillPickerView15DidMoveToWindowEv
 * Demangled: Caver::SkillPickerView::DidMoveToWindow(void)
 *
 * Callers: 1
 *   0x000000000043E2A0  Caver::SkillPickerView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 0
 *
 * Referenced strings: 4
 *   insn=0x000000000043E720 string=0x000000000043E724 "h"
 *   insn=0x000000000043E724 string=0x000000000043E728 "y@"
 *   insn=0x000000000043E730 string=0x000000000043E734 "h"
 *   insn=0x000000000043E744 string=0x000000000043E748 " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillPickerView::DidMoveToWindow(Caver::SkillPickerView *this)
{
  __int64 result; // x0

  result = (*(__int64 (__fastcall **)(Caver::SkillPickerView *))(*(_QWORD *)this + 240LL))(this);
  if ( result )
    return (*(__int64 (__fastcall **)(Caver::SkillPickerView *))(*(_QWORD *)this + 200LL))(this);
  return result;
}

