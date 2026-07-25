/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000003F8914
 * Mangled: _ZN5Caver19AttributePointsView12SetNumPointsEi
 * Demangled: Caver::AttributePointsView::SetNumPoints(int)
 *
 * Callers: 1
 *   0x00000000002019B0  Caver::AttributePointsView::SetNumPoints(int)
 *
 * Callees: 1
 *   0x00000000001F8600  Caver::GUIView::AddPopupAnimation(void)
 *
 * Referenced strings: 11
 *   insn=0x00000000003F894C string=0x00000000003F8950 "\t"
 *   insn=0x00000000003F8958 string=0x00000000003F895C "?"
 *   insn=0x00000000003F8960 string=0x00000000003F8964 "_"
 *   insn=0x00000000003F8970 string=0x00000000003F8974 ""
 *   insn=0x00000000003F8974 string=0x00000000003F8978 "@"
 *   insn=0x00000000003F8978 string=0x00000000003F897C "!"
 *   insn=0x00000000003F897C string=0x00000000001F8600 "0'"
 *   insn=0x00000000003F8988 string=0x00000000003F898C ""
 *   insn=0x00000000003F8994 string=0x00000000003F8998 "?"
 *   insn=0x00000000003F89A4 string=0x00000000003F89A8 ""
 *   insn=0x00000000003F89C8 string=0x00000000003F89CC ""
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

Caver::GUIView *__fastcall Caver::AttributePointsView::SetNumPoints(Caver::AttributePointsView *this, int a2)
{
  int v3; // w8
  Caver::GUIView *v5; // x0
  int v6; // w8
  int v7; // w21
  Caver::GUIView *result; // x0

  v3 = *((_DWORD *)this + 96);
  *((_DWORD *)this + 65) = a2;
  if ( v3 != a2 )
  {
    *((_DWORD *)this + 96) = a2;
    *((_BYTE *)this + 1344) = 1;
  }
  v5 = (Caver::GUIView *)*((_QWORD *)this + 37);
  v7 = *((_DWORD *)this + 63);
  v6 = *((_DWORD *)this + 64);
  if ( (v6 == a2) != (*((_BYTE *)v5 + 228) != 0) )
  {
    *((_BYTE *)v5 + 228) = v6 == a2;
    if ( v6 != a2 )
      Caver::GUIView::AddPopupAnimation(v5);
  }
  result = (Caver::GUIView *)*((_QWORD *)this + 39);
  if ( v7 >= a2 != (*((_BYTE *)result + 228) != 0) )
  {
    *((_BYTE *)result + 228) = v7 >= a2;
    if ( v7 < a2 )
      return (Caver::GUIView *)Caver::GUIView::AddPopupAnimation(result);
  }
  return result;
}

