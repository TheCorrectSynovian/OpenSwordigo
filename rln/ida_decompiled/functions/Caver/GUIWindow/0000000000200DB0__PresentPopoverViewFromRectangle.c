/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200DB0
 * Mangled: ._ZN5Caver9GUIWindow31PresentPopoverViewFromRectangleERKN5boost10shared_ptrINS_7GUIViewEEERKNS_9RectangleEj
 * Demangled: Caver::GUIWindow::PresentPopoverViewFromRectangle(boost::shared_ptr<Caver::GUIView> const&,Caver::Rectangle const&,uint)
 *
 * Callers: 1
 *   0x000000000049FF3C  Caver::GUIView::AddPopupAnimation(void)
 *
 * Callees: 1
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200DB8 string=0x0000000000200DBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIWindow::PresentPopoverViewFromRectangle()
{
  JUMPOUT(0x4A2DD0);
}

