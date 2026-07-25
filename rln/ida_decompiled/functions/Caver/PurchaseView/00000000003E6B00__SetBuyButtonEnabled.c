/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003E6B00
 * Mangled: _ZN5Caver12PurchaseView19SetBuyButtonEnabledEb
 * Demangled: Caver::PurchaseView::SetBuyButtonEnabled(bool)
 *
 * Callers: 1
 *   0x00000000001FD2E0  Caver::PurchaseView::SetBuyButtonEnabled(bool)
 *
 * Callees: 2
 *   0x00000000001F5960  Caver::GUIButton::SetTintColor(Caver::Color)
 *   0x00000000001F62D0  .__stack_chk_fail
 *
 * Referenced strings: 22
 *   insn=0x00000000003E6B0C string=0x00000000003E6B10 "T"
 *   insn=0x00000000003E6B1C string=0x00000000003E6B20 "`"
 *   insn=0x00000000003E6B20 string=0x00000000003E6B24 " A"
 *   insn=0x00000000003E6B28 string=0x00000000003E6B2C "\ty"
 *   insn=0x00000000003E6B28 string=0x00000000003E6B60 "\t"
 *   insn=0x00000000003E6B2C string=0x00000000003E6B30 "?"
 *   insn=0x00000000003E6B30 string=0x00000000003E6B34 "\t "
 *   insn=0x00000000003E6B38 string=0x00000000003E6B3C "\t"
 *   insn=0x00000000003E6B38 string=0x00000000003E6B50 ""
 *   insn=0x00000000003E6B40 string=0x00000000003E6B44 ")"
 *   insn=0x00000000003E6B44 string=0x00000000003E6B48 " "
 *   insn=0x00000000003E6B48 string=0x00000000003E6B4C "`"
 *   insn=0x00000000003E6B58 string=0x00000000003E6B5C ""
 *   insn=0x00000000003E6B5C string=0x00000000003E6B90 "t;"
 *   insn=0x00000000003E6B60 string=0x00000000003E6B64 "?"
 *   insn=0x00000000003E6B64 string=0x00000000003E6B68 "\t "
 *   insn=0x00000000003E6B6C string=0x00000000003E6B70 "\t"
 *   insn=0x00000000003E6B74 string=0x00000000003E6B78 ")"
 *   insn=0x00000000003E6B78 string=0x00000000003E6B7C " "
 *   insn=0x00000000003E6B7C string=0x00000000003E6B80 "`"
 *   insn=0x00000000003E6B90 string=0x00000000001F5960 "P'"
 *   insn=0x00000000003E6BB4 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::PurchaseView::SetBuyButtonEnabled(Caver::PurchaseView *this, char a2)
{
  _DWORD *v2; // x0
  unsigned int v3; // w8

  _ReadStatusReg(TPIDR_EL0);
  v2 = (_DWORD *)*((_QWORD *)this + 37);
  v3 = v2[72];
  if ( (a2 & 1) != 0 )
  {
    v2[72] = v3 & 0xFFFFFFFD;
    if ( (v3 & 0xFFFFFFFD) != v3 )
      (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v2 + 304LL))(v2, v3);
  }
  else
  {
    v2[72] = v3 | 2;
    if ( (v3 | 2) != v3 )
      (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v2 + 304LL))(v2, v3);
  }
  return Caver::GUIButton::SetTintColor();
}

