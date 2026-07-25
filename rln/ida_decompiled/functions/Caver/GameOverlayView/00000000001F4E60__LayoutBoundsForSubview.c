/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4E60
 * Mangled: ._ZN5Caver15GameOverlayView22LayoutBoundsForSubviewERKSs
 * Demangled: Caver::GameOverlayView::LayoutBoundsForSubview(std::string const&)
 *
 * Callers: 3
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003D72E4  Caver::GameOverlayView::SetSubviewLayout(Caver::GUIView *,boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x00000000003D7578  Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *
 * Callees: 1
 *   0x00000000003D74B4  Caver::GameOverlayView::LayoutBoundsForSubview(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4E68 string=0x00000000001F4E6C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GameOverlayView::LayoutBoundsForSubview(int a1, int a2)
{
  return _ZN5Caver15GameOverlayView22LayoutBoundsForSubviewERKSs(a1, a2);
}

