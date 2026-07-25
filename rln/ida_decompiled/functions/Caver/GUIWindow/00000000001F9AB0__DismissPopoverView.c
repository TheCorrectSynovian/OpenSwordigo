/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9AB0
 * Mangled: ._ZN5Caver9GUIWindow18DismissPopoverViewEPNS_14GUIPopoverViewE
 * Demangled: Caver::GUIWindow::DismissPopoverView(Caver::GUIPopoverView *)
 *
 * Callers: 1
 *   0x00000000004D460C  Caver::GUIPopoverView::DismissPopoverView(void)
 *
 * Callees: 1
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9AB8 string=0x00000000001F9ABC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIWindow::DismissPopoverView(Caver::GUIWindow *this, Caver::GUIPopoverView *a2)
{
  JUMPOUT(0x4A3104);
}

