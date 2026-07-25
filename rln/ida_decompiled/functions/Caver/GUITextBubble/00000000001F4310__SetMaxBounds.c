/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4310
 * Mangled: ._ZN5Caver13GUITextBubble12SetMaxBoundsERKNS_9RectangleE
 * Demangled: Caver::GUITextBubble::SetMaxBounds(Caver::Rectangle const&)
 *
 * Callers: 2
 *   0x000000000023D32C  Caver::TextBubbleComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004A9EA0  Caver::GUITextBubble::SetMaxBounds(Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F4314 string=0x00000000004A9EA0 " "
 *   insn=0x00000000001F4318 string=0x00000000001F431C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITextBubble::SetMaxBounds(Caver::GUITextBubble *this, const Caver::Rectangle *a2)
{
  return _ZN5Caver13GUITextBubble12SetMaxBoundsERKNS_9RectangleE(this, a2);
}

