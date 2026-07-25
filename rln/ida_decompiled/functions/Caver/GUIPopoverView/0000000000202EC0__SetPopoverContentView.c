/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202EC0
 * Mangled: ._ZN5Caver14GUIPopoverView21SetPopoverContentViewERKN5boost10shared_ptrINS_7GUIViewEEE
 * Demangled: Caver::GUIPopoverView::SetPopoverContentView(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Callers: 1
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004D3F6C  Caver::GUIPopoverView::SetPopoverContentView(boost::shared_ptr<Caver::GUIView> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202EC8 string=0x0000000000202ECC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIPopoverView::SetPopoverContentView()
{
  return _ZN5Caver14GUIPopoverView21SetPopoverContentViewERKN5boost10shared_ptrINS_7GUIViewEEE();
}

