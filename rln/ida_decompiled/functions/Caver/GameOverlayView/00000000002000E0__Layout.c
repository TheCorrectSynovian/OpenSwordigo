/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002000E0
 * Mangled: ._ZN5Caver15GameOverlayView6LayoutEv
 * Demangled: Caver::GameOverlayView::Layout(void)
 *
 * Callers: 2
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Callees: 1
 *   0x00000000003D7578  Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *
 * Referenced strings: 1
 *   insn=0x00000000002000E8 string=0x00000000002000EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GameOverlayView::Layout(Caver::GameOverlayView *this)
{
  JUMPOUT(0x3D7714);
}

