/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FF780
 * Mangled: ._ZN5Caver13GUITextBubble17FinishShowingTextEv
 * Demangled: Caver::GUITextBubble::FinishShowingText(void)
 *
 * Callers: 2
 *   0x000000000023D568  Caver::TextBubbleComponent::HandleMessage(int,void *)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FF784 string=0x00000000004AA748 ""
 *   insn=0x00000000001FF788 string=0x00000000001FF78C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUITextBubble::FinishShowingText(Caver::GUITextBubble *this)
{
  JUMPOUT(0x4AA748);
}

