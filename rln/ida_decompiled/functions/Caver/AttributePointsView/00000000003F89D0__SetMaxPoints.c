/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F89D0
 * Mangled: _ZN5Caver19AttributePointsView12SetMaxPointsEi
 * Demangled: Caver::AttributePointsView::SetMaxPoints(int)
 *
 * Callers: 1
 *   0x00000000002024C0  Caver::AttributePointsView::SetMaxPoints(int)
 *
 * Callees: 1
 *   0x00000000001F8600  Caver::GUIView::AddPopupAnimation(void)
 *
 * Referenced strings: 13
 *   insn=0x00000000003F89E0 string=0x00000000003F89E4 "`"
 *   insn=0x00000000003F89E4 string=0x00000000003F89E8 "t"
 *   insn=0x00000000003F89E8 string=0x00000000003F89EC "a"
 *   insn=0x00000000003F89EC string=0x00000000003F89F0 "u"
 *   insn=0x00000000003F89F0 string=0x00000000003F89F4 ""
 *   insn=0x00000000003F8A04 string=0x00000000003F8A08 "?"
 *   insn=0x00000000003F8A0C string=0x00000000003F8A24 "`"
 *   insn=0x00000000003F8A14 string=0x00000000003F8A18 ""
 *   insn=0x00000000003F8A18 string=0x00000000003F8A1C "@"
 *   insn=0x00000000003F8A20 string=0x00000000001F8600 "0'"
 *   insn=0x00000000003F8A2C string=0x00000000003F8A30 ""
 *   insn=0x00000000003F8A38 string=0x00000000003F8A3C "?"
 *   insn=0x00000000003F8A48 string=0x00000000003F8A4C ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUIView *__fastcall Caver::AttributePointsView::SetMaxPoints(Caver::AttributePointsView *this, int a2)
{
  Caver::GUIView *v3; // x0
  int v4; // w20
  int v5; // w21
  Caver::GUIView *result; // x0

  v3 = (Caver::GUIView *)*((_QWORD *)this + 37);
  v4 = *((_DWORD *)this + 65);
  *((_DWORD *)this + 64) = a2;
  v5 = *((_DWORD *)this + 63);
  if ( (v4 == a2) != (*((_BYTE *)v3 + 228) != 0) )
  {
    *((_BYTE *)v3 + 228) = v4 == a2;
    if ( v4 != a2 )
      Caver::GUIView::AddPopupAnimation(v3);
  }
  result = (Caver::GUIView *)*((_QWORD *)this + 39);
  if ( v4 <= v5 != (*((_BYTE *)result + 228) != 0) )
  {
    *((_BYTE *)result + 228) = v4 <= v5;
    if ( v4 > v5 )
      return (Caver::GUIView *)Caver::GUIView::AddPopupAnimation(result);
  }
  return result;
}

