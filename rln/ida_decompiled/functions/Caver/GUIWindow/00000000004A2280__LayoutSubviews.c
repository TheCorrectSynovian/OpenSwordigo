/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004A2280
 * Mangled: _ZN5Caver9GUIWindow14LayoutSubviewsEv
 * Demangled: Caver::GUIWindow::LayoutSubviews(void)
 *
 * Callers: 0
 *
 * Callees: 2
 *   0x00000000001F94B0  Caver::GUIView::LayoutSubviews(void)
 *   0x00000000001FC500  Caver::GUIEffect::SetFrame(Caver::Rectangle const&)
 *
 * Referenced strings: 5
 *   insn=0x00000000004A228C string=0x00000000004A2290 "`"
 *   insn=0x00000000004A2290 string=0x00000000004A2294 "`"
 *   insn=0x00000000004A2294 string=0x00000000004A2298 "a"
 *   insn=0x00000000004A229C string=0x00000000001FC500 "0'"
 *   insn=0x00000000004A22AC string=0x00000000001F94B0 "0'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::GUIWindow::LayoutSubviews(Caver::GUIWindow *this)
{
  Caver::GUIEffect *v2; // x0

  v2 = (Caver::GUIEffect *)*((_QWORD *)this + 61);
  if ( v2 )
    Caver::GUIEffect::SetFrame(v2, (Caver::GUIWindow *)((char *)this + 132));
  return Caver::GUIView::LayoutSubviews(this);
}

