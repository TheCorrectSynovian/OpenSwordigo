/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FABA0
 * Mangled: ._ZN5Caver7GUIView16IsSubviewRemovedERKN5boost10shared_ptrIS0_EE
 * Demangled: Caver::GUIView::IsSubviewRemoved(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callers: 2
 *   0x00000000003C8890  Caver::ConfigureOverlayView::HitTest(Caver::Vector2 const&)
 *   0x00000000003D7C60  Caver::GameOverlayView::HandleKeyboardEvent(Caver::GUIKeyboardEvent const&)
 *
 * Callees: 1
 *   0x000000000049E940  Caver::GUIView::IsSubviewRemoved(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FABA4 string=0x000000000049E940 "("
 *   insn=0x00000000001FABA8 string=0x00000000001FABAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIView::IsSubviewRemoved()
{
  return _ZN5Caver7GUIView16IsSubviewRemovedERKN5boost10shared_ptrIS0_EE();
}

