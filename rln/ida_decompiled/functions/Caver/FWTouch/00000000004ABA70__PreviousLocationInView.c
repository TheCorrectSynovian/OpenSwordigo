/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004ABA70
 * Mangled: _ZNK5Caver7FWTouch22PreviousLocationInViewEPKNS_7GUIViewE
 * Demangled: Caver::FWTouch::PreviousLocationInView(Caver::GUIView const*)
 *
 * Callers: 1
 *   0x00000000002012A0  Caver::FWTouch::PreviousLocationInView(Caver::GUIView const*)
 *
 * Callees: 1
 *   0x00000000001F3B80  Caver::GUIView::ConvertPointFromView(Caver::Vector2 const&,Caver::GUIView*)
 *
 * Referenced strings: 2
 *   insn=0x00000000004ABA7C string=0x00000000004ABA80 "@ "
 *   insn=0x00000000004ABA80 string=0x00000000001F3B80 "P'"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::FWTouch::PreviousLocationInView(Caver::FWTouch *this, const Caver::GUIView *a2)
{
  Caver::GUIView::ConvertPointFromView();
}

