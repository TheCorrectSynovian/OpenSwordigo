/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200C10
 * Mangled: ._ZN5Caver20ConfigureOverlayView23AddTransitionAnimationsEb
 * Demangled: Caver::ConfigureOverlayView::AddTransitionAnimations(bool)
 *
 * Callers: 1
 *   0x000000000033E140  Caver::ConfigureOverlayViewController::ViewWillDisappear(void)
 *
 * Callees: 1
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200C18 string=0x0000000000200C1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ConfigureOverlayView::AddTransitionAnimations(Caver::ConfigureOverlayView *this)
{
  JUMPOUT(0x3C7DBC);
}

