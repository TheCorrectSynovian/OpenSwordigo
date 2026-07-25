/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3580
 * Mangled: ._ZN5Caver13GUIViewLayout20FrameForViewInBoundsERKNS_9RectangleE
 * Demangled: Caver::GUIViewLayout::FrameForViewInBounds(Caver::Rectangle const&)
 *
 * Callers: 2
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003D72E4  Caver::GameOverlayView::SetSubviewLayout(Caver::GUIView *,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callees: 1
 *   0x00000000004A8198  Caver::GUIViewLayout::FrameForViewInBounds(Caver::Rectangle const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3588 string=0x00000000001F358C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIViewLayout::FrameForViewInBounds(Caver::GUIViewLayout *this, const Caver::Rectangle *a2)
{
  return _ZN5Caver13GUIViewLayout20FrameForViewInBoundsERKNS_9RectangleE(this, a2);
}

