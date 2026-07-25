/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ABA5C
 * Mangled: _ZNK5Caver7FWTouch14LocationInViewEPKNS_7GUIViewE
 * Demangled: Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *
 * Callers: 1
 *   0x0000000000200140  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *
 * Callees: 1
 *   0x00000000001F3B80  Caver::GUIView::ConvertPointFromView(Caver::Vector2 const&,Caver::GUIView*)
 *
 * Referenced strings: 2
 *   insn=0x00000000004ABA68 string=0x00000000004ABA6C "E "
 *   insn=0x00000000004ABA6C string=0x00000000001F3B80 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FWTouch::LocationInView(Caver::FWTouch *this, const Caver::GUIView *a2)
{
  Caver::GUIView::ConvertPointFromView();
}

