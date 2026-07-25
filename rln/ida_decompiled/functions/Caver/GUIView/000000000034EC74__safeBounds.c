/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000034EC74
 * Mangled: _ZNK5Caver7GUIView10safeBoundsEv
 * Demangled: Caver::GUIView::safeBounds(void)
 *
 * Callers: 1
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *
 * Callees: 4
 *   0x00000000001F5CB0  Caver::GUIView::safeBounds(void)
 *   0x00000000001F62D0  .__stack_chk_fail
 *   0x0000000000200200  Caver::Rectangle::Intersection(Caver::Rectangle const&)
 *   0x00000000002003B0  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *
 * Referenced strings: 10
 *   insn=0x000000000034EC84 string=0x000000000034EC88 "U"
 *   insn=0x000000000034EC9C string=0x000000000034ECA0 "`"
 *   insn=0x000000000034ECB0 string=0x00000000001F5CB0 "P'"
 *   insn=0x000000000034ECD0 string=0x000000000034ECD4 "K"
 *   insn=0x000000000034ECD8 string=0x000000000034ECDC "`"
 *   insn=0x000000000034ECE0 string=0x000000000034ECE4 "  "
 *   insn=0x000000000034ECF4 string=0x000000000034ECF8 "B"
 *   insn=0x000000000034ECFC string=0x000000000034ED00 "`"
 *   insn=0x000000000034ED10 string=0x000000000034ED28 "j"
 *   insn=0x000000000034ED28 string=0x00000000001F62D0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

long double __usercall Caver::GUIView::safeBounds@<Q0>(Caver::GUIView *this@<X0>, Caver::Rectangle *a2@<X8>)
{
  long double result; // q0
  Caver::GUIView *v5; // x0
  _BYTE v6[16]; // [xsp+8h] [xbp-58h] BYREF
  __int64 v7[2]; // [xsp+18h] [xbp-48h] BYREF
  long double v8; // [xsp+28h] [xbp-38h] BYREF
  __int64 v9; // [xsp+38h] [xbp-28h]

  v9 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  result = *(long double *)((char *)this + 132);
  *(long double *)a2 = result;
  v5 = (Caver::GUIView *)*((_QWORD *)this + 11);
  if ( v5 )
  {
    Caver::GUIView::safeBounds(v5);
    Caver::GUIView::ConvertRectFromView(v7, this, (const Caver::Rectangle *)v6, *((Caver::GUIView **)this + 11));
    Caver::Rectangle::Intersection((__int64 *)&v8, a2, (const Caver::Rectangle *)v7);
    result = v8;
    *(long double *)a2 = v8;
  }
  LODWORD(result) = *((_DWORD *)this + 14);
  if ( *(float *)&result > 0.0 )
  {
    Caver::Rectangle::Intersection((__int64 *)&v8, a2, (Caver::GUIView *)((char *)this + 48));
    result = v8;
    *(long double *)a2 = v8;
  }
  return result;
}

