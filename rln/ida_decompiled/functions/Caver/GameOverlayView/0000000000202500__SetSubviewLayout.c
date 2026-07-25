/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202500
 * Mangled: ._ZN5Caver15GameOverlayView16SetSubviewLayoutEPNS_7GUIViewERKN5boost10shared_ptrINS_13GUIViewLayoutEEE
 * Demangled: Caver::GameOverlayView::SetSubviewLayout(Caver::GUIView *,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Callers: 1
 *   0x00000000003D6A38  Caver::GameOverlayView::LayoutSubviews(void)
 *
 * Callees: 1
 *   0x00000000003D72E4  Caver::GameOverlayView::SetSubviewLayout(Caver::GUIView *,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202508 string=0x000000000020250C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GameOverlayView::SetSubviewLayout()
{
  return _ZN5Caver15GameOverlayView16SetSubviewLayoutEPNS_7GUIViewERKN5boost10shared_ptrINS_13GUIViewLayoutEEE();
}

