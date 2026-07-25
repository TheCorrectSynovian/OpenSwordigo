/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD180
 * Mangled: ._ZN5Caver13GUIBubbleViewC2Ev
 * Demangled: Caver::GUIBubbleView::GUIBubbleView(void)
 *
 * Callers: 1
 *   0x0000000000341FAC  Caver::GameInterfaceBuilder::InfoBubble(std::string const&,float)
 *
 * Callees: 1
 *   0x0000000000494468  Caver::GUIBubbleView::GUIBubbleView(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD188 string=0x00000000001FD18C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIBubbleView::GUIBubbleView(Caver::GUIBubbleView *this)
{
  return _ZN5Caver13GUIBubbleViewC2Ev(this);
}

