/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8650
 * Mangled: ._ZN5Caver7GUIView15DrawSubviewRectEPS0_PNS_16RenderingContextERKNS_9RectangleERKNS_7Matrix4E
 * Demangled: Caver::GUIView::DrawSubviewRect(Caver::GUIView*,Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callers: 3
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x000000000049E954  Caver::GUIView::PurgeRemovedSubviews(void)
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x000000000049E954  Caver::GUIView::PurgeRemovedSubviews(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8658 string=0x00000000001F865C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIView::DrawSubviewRect()
{
  JUMPOUT(0x49EAC0);
}

