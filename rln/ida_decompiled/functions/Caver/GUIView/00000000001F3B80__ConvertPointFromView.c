/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3B80
 * Mangled: ._ZNK5Caver7GUIView20ConvertPointFromViewERKNS_7Vector2EPS0_
 * Demangled: Caver::GUIView::ConvertPointFromView(Caver::Vector2 const&,Caver::GUIView*)
 *
 * Callers: 6
 *   0x000000000038BA14  Caver::ChooseAgeView::UpdateArrowFrames(void)
 *   0x0000000000491C84  Caver::GUIAlertView::TouchBegan(Caver::FWTouch const&)
 *   0x0000000000491D10  Caver::GUIAlertView::TouchEnded(Caver::FWTouch const&)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004ABA5C  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *   0x00000000004ABA70  Caver::FWTouch::PreviousLocationInView(Caver::GUIView const*)
 *
 * Callees: 1
 *   0x00000000004A0964  Caver::GUIView::HitTest(Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3B88 string=0x00000000001F3B8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void Caver::GUIView::ConvertPointFromView()
{
  JUMPOUT(0x4A0C24);
}

