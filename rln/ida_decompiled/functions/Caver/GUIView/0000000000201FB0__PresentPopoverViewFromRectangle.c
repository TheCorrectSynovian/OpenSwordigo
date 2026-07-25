/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201FB0
 * Mangled: ._ZN5Caver7GUIView31PresentPopoverViewFromRectangleERKN5boost10shared_ptrIS0_EERKNS_9RectangleEj
 * Demangled: Caver::GUIView::PresentPopoverViewFromRectangle(boost::shared_ptr<Caver::GUIView> const&,Caver::Rectangle const&,uint)
 *
 * Callers: 1
 *   0x000000000041F0FC  Caver::MapMenuPage::ShowTravelToButtonFromNode(Caver::MapViewNode *)
 *
 * Callees: 1
 *   0x000000000049FF3C  Caver::GUIView::AddPopupAnimation(void)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201FB8 string=0x0000000000201FBC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIView::PresentPopoverViewFromRectangle()
{
  JUMPOUT(0x4A03B8);
}

