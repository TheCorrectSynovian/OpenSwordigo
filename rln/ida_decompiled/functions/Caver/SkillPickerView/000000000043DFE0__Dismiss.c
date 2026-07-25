/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043DFE0
 * Mangled: _ZN5Caver15SkillPickerView7DismissEv
 * Demangled: Caver::SkillPickerView::Dismiss(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F37F0  Caver::SkillPickerView::AddAnimations(bool)
 *
 * Referenced strings: 4
 *   insn=0x000000000043DFF4 string=0x000000000043DFF8 "`~@"
 *   insn=0x000000000043DFF4 string=0x00000000001F37F0 "P'"
 *   insn=0x000000000043E000 string=0x000000000043E004 ""
 *   insn=0x000000000043E014 string=0x000000000043E018 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillPickerView::Dismiss(Caver::SkillPickerView *this)
{
  __int64 result; // x0

  Caver::SkillPickerView::AddAnimations(this, 1);
  result = *((_QWORD *)this + 31);
  *((_BYTE *)this + 229) = 0;
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, Caver::SkillPickerView *))(*(_QWORD *)result + 8LL))(result, this);
  return result;
}

