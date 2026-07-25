/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000203420
 * Mangled: ._ZN5Caver13GUIViewLayout30LayoutForViewWithFrameInBoundsERKNS_9RectangleES3_f
 * Demangled: Caver::GUIViewLayout::LayoutForViewWithFrameInBounds(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *
 * Callers: 1
 *   0x00000000003D7578  Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *
 * Callees: 1
 *   0x00000000004A82FC  Caver::GUIViewLayout::LayoutForViewWithFrameInBounds(Caver::Rectangle const&,Caver::Rectangle const&,float)
 *
 * Referenced strings: 1
 *   insn=0x0000000000203428 string=0x000000000020342C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIViewLayout::LayoutForViewWithFrameInBounds(
        Caver::GUIViewLayout *this,
        const Caver::Rectangle *a2,
        const Caver::Rectangle *a3,
        float a4)
{
  return _ZN5Caver13GUIViewLayout30LayoutForViewWithFrameInBoundsERKNS_9RectangleES3_f(this, a2, a3, a4);
}

