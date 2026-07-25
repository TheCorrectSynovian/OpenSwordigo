/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003D6974
 * Mangled: _ZN5Caver15GameOverlayView22SetSkillButtonDisabledEb
 * Demangled: Caver::GameOverlayView::SetSkillButtonDisabled(bool)
 *
 * Callers: 1
 *   0x00000000001F7580  Caver::GameOverlayView::SetSkillButtonDisabled(bool)
 *
 * Callees: 2
 *   0x00000000001F5960  Caver::GUIButton::SetTintColor(Caver::Color)
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 23
 *   insn=0x00000000003D6980 string=0x00000000003D6984 "T"
 *   insn=0x00000000003D6990 string=0x00000000003D6994 "`"
 *   insn=0x00000000003D6994 string=0x00000000003D6998 " A"
 *   insn=0x00000000003D6998 string=0x00000000003D699C ")"
 *   insn=0x00000000003D69A4 string=0x00000000003D69A8 "\t"
 *   insn=0x00000000003D69A4 string=0x00000000003D69E0 "\ty"
 *   insn=0x00000000003D69A8 string=0x00000000003D69AC "?"
 *   insn=0x00000000003D69AC string=0x00000000003D69B0 "\t "
 *   insn=0x00000000003D69B4 string=0x00000000003D69B8 "\t"
 *   insn=0x00000000003D69BC string=0x00000000003D69C0 ")"
 *   insn=0x00000000003D69C0 string=0x00000000003D69C4 " "
 *   insn=0x00000000003D69C4 string=0x00000000003D69C8 "`"
 *   insn=0x00000000003D69D8 string=0x00000000003D69DC ""
 *   insn=0x00000000003D69E0 string=0x00000000003D69E4 "?"
 *   insn=0x00000000003D69E4 string=0x00000000003D69E8 "\t "
 *   insn=0x00000000003D69EC string=0x00000000003D69F0 "\t"
 *   insn=0x00000000003D69EC string=0x00000000003D6A04 ""
 *   insn=0x00000000003D69F4 string=0x00000000003D69F8 ")"
 *   insn=0x00000000003D69F8 string=0x00000000003D69FC " "
 *   insn=0x00000000003D69FC string=0x00000000003D6A00 "`"
 *   insn=0x00000000003D6A10 string=0x00000000001F5960 "P'"
 *   insn=0x00000000003D6A20 string=0x00000000003D6A34 "'~"
 *   insn=0x00000000003D6A34 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

_DWORD *__fastcall Caver::GameOverlayView::SetSkillButtonDisabled(Caver::GameOverlayView *this, int a2)
{
  _DWORD *result; // x0
  unsigned int v3; // w8

  _ReadStatusReg(TPIDR_EL0);
  result = (_DWORD *)*((_QWORD *)this + 50);
  v3 = result[72];
  if ( ((a2 ^ (v3 >> 1)) & 1) != 0 )
  {
    if ( (a2 & 1) != 0 )
    {
      result[72] = v3 | 2;
      if ( (v3 | 2) != v3 )
        (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)result + 304LL))(result, v3);
    }
    else
    {
      result[72] = v3 & 0xFFFFFFFD;
      if ( (v3 & 0xFFFFFFFD) != v3 )
        (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)result + 304LL))(result, v3);
    }
    return (_DWORD *)Caver::GUIButton::SetTintColor();
  }
  return result;
}

