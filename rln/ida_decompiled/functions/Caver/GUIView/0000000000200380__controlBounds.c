/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200380
 * Mangled: ._ZNK5Caver7GUIView13controlBoundsEv
 * Demangled: Caver::GUIView::controlBounds(void)
 *
 * Callers: 2
 *   0x00000000003D6A38  Caver::GameOverlayView::LayoutSubviews(void)
 *   0x00000000003D74B4  Caver::GameOverlayView::LayoutBoundsForSubview(std::string const&)
 *
 * Callees: 1
 *   0x00000000003D6A38  Caver::GameOverlayView::LayoutSubviews(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200388 string=0x000000000020038C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIView::controlBounds(Caver::GUIView *this)
{
  JUMPOUT(0x3D722C);
}

