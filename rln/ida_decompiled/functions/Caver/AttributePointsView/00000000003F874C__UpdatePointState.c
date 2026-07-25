/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F874C
 * Mangled: _ZN5Caver19AttributePointsView16UpdatePointStateEv
 * Demangled: Caver::AttributePointsView::UpdatePointState(void)
 *
 * Callers: 0
 *
 * Callees: 1
 *   0x00000000001F8600  Caver::GUIView::AddPopupAnimation(void)
 *
 * Referenced strings: 13
 *   insn=0x00000000003F875C string=0x00000000003F8760 "`"
 *   insn=0x00000000003F8760 string=0x00000000003F8764 "t"
 *   insn=0x00000000003F8764 string=0x00000000003F8768 "u"
 *   insn=0x00000000003F8768 string=0x00000000003F876C "\t"
 *   insn=0x00000000003F8774 string=0x00000000003F8778 "?"
 *   insn=0x00000000003F877C string=0x00000000003F8780 "_"
 *   insn=0x00000000003F8784 string=0x00000000003F879C "`"
 *   insn=0x00000000003F878C string=0x00000000003F8790 ""
 *   insn=0x00000000003F8790 string=0x00000000003F8794 "@"
 *   insn=0x00000000003F8798 string=0x00000000001F8600 "0'"
 *   insn=0x00000000003F87A4 string=0x00000000003F87A8 ""
 *   insn=0x00000000003F87B0 string=0x00000000003F87B4 "?"
 *   insn=0x00000000003F87C0 string=0x00000000003F87C4 ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUIView *__fastcall Caver::AttributePointsView::UpdatePointState(Caver::AttributePointsView *this)
{
  Caver::GUIView *v2; // x0
  int v3; // w20
  int v4; // w8
  int v5; // w21
  Caver::GUIView *result; // x0

  v2 = (Caver::GUIView *)*((_QWORD *)this + 37);
  v3 = *((_DWORD *)this + 65);
  v5 = *((_DWORD *)this + 63);
  v4 = *((_DWORD *)this + 64);
  if ( (v3 == v4) != (*((_BYTE *)v2 + 228) != 0) )
  {
    *((_BYTE *)v2 + 228) = v3 == v4;
    if ( v3 != v4 )
      Caver::GUIView::AddPopupAnimation(v2);
  }
  result = (Caver::GUIView *)*((_QWORD *)this + 39);
  if ( v3 <= v5 != (*((_BYTE *)result + 228) != 0) )
  {
    *((_BYTE *)result + 228) = v3 <= v5;
    if ( v3 > v5 )
      return (Caver::GUIView *)Caver::GUIView::AddPopupAnimation(result);
  }
  return result;
}

