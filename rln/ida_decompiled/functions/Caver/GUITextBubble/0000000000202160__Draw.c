/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202160
 * Mangled: ._ZN5Caver13GUITextBubble4DrawEPNS_16RenderingContextE
 * Demangled: Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *
 * Callers: 3
 *   0x000000000023D32C  Caver::TextBubbleComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x000000000042C2F0  Caver::NotificationView::Update(float)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004AA868  Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202168 string=0x000000000020216C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITextBubble::Draw(Caver::GUITextBubble *this, Caver::RenderingContext *a2)
{
  return _ZN5Caver13GUITextBubble4DrawEPNS_16RenderingContextE(this, a2);
}

