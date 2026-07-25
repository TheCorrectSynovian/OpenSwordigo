/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6120
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver13GUITextBubbleEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::GUITextBubble>(Caver::GUITextBubble *)
 *
 * Callers: 2
 *   0x000000000023CD60  Caver::TextBubbleComponent::RegisterLibrary(void)
 *   0x0000000000494468  Caver::GUIBubbleView::GUIBubbleView(void)
 *
 * Callees: 1
 *   0x000000000023DD54  boost::detail::shared_count::shared_count<Caver::GUITextBubble>(Caver::GUITextBubble *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6128 string=0x00000000001F612C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::GUITextBubble>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver13GUITextBubbleEEEPT_();
}

