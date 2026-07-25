/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9740
 * Mangled: ._ZN5Caver7GUIView31FindAndSetSubviewFirstResponderEv
 * Demangled: Caver::GUIView::FindAndSetSubviewFirstResponder(void)
 *
 * Callers: 2
 *   0x0000000000499288  Caver::GUINavigationController::ViewControllerViewLoaded(Caver::GUIViewController *)
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004A1224  Caver::GUIView::FindAndSetSubviewFirstResponder(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9748 string=0x00000000001F974C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::FindAndSetSubviewFirstResponder(Caver::GUIView *this)
{
  return _ZN5Caver7GUIView31FindAndSetSubviewFirstResponderEv(this);
}

