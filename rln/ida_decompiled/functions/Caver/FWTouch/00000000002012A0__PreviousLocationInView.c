/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002012A0
 * Mangled: ._ZNK5Caver7FWTouch22PreviousLocationInViewEPKNS_7GUIViewE
 * Demangled: Caver::FWTouch::PreviousLocationInView(Caver::GUIView const*)
 *
 * Callers: 1
 *   0x000000000049BFA8  Caver::GUIScrollView::TouchBegan(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004ABA70  Caver::FWTouch::PreviousLocationInView(Caver::GUIView const*)
 *
 * Referenced strings: 2
 *   insn=0x00000000002012A4 string=0x00000000004ABA70 "\t@"
 *   insn=0x00000000002012A8 string=0x00000000002012AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWTouch::PreviousLocationInView(Caver::FWTouch *this, const Caver::GUIView *a2)
{
  return _ZNK5Caver7FWTouch22PreviousLocationInViewEPKNS_7GUIViewE(this, a2);
}

