/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC260
 * Mangled: ._ZN5Caver13GUIViewLayout21SubviewWithIdentifierERKSs
 * Demangled: Caver::GUIViewLayout::SubviewWithIdentifier(std::string const&)
 *
 * Callers: 4
 *   0x00000000003C6574  Caver::ConfigureOverlayView::InitWithGameState(boost::shared_ptr<Caver::GameState> const&)
 *   0x00000000003D4C10  Caver::GameOverlayView::SetLayout(boost::shared_ptr<Caver::GUIViewLayout> const&)
 *   0x00000000003D6A38  Caver::GameOverlayView::LayoutSubviews(void)
 *   0x00000000003D7578  Caver::GameOverlayView::LayoutForSubview(std::string const&,Caver::GUIView *)
 *
 * Callees: 1
 *   0x00000000004A8894  Caver::GUIViewLayout::SubviewWithIdentifier(std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FC268 string=0x00000000001FC26C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIViewLayout::SubviewWithIdentifier()
{
  return _ZN5Caver13GUIViewLayout21SubviewWithIdentifierERKSs();
}

