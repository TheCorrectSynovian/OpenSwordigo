/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000043E028
 * Mangled: _ZN5Caver15SkillPickerView10TouchBeganERKNS_7FWTouchE
 * Demangled: Caver::SkillPickerView::TouchBegan(Caver::FWTouch const&)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F37F0  Caver::SkillPickerView::AddAnimations(bool)
 *
 * Referenced strings: 4
 *   insn=0x000000000043E03C string=0x000000000043E040 "`~@"
 *   insn=0x000000000043E03C string=0x00000000001F37F0 "P'"
 *   insn=0x000000000043E048 string=0x000000000043E04C ""
 *   insn=0x000000000043E05C string=0x000000000043E060 "@"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::SkillPickerView::TouchBegan(Caver::SkillPickerView *this, const Caver::FWTouch *a2)
{
  __int64 result; // x0

  Caver::SkillPickerView::AddAnimations(this, 1);
  result = *((_QWORD *)this + 31);
  *((_BYTE *)this + 229) = 0;
  if ( result )
    return (*(__int64 (__fastcall **)(__int64, Caver::SkillPickerView *))(*(_QWORD *)result + 8LL))(result, this);
  return result;
}

