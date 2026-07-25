/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3E00
 * Mangled: ._ZN5Caver13GUITextBubble6UpdateEf
 * Demangled: Caver::GUITextBubble::Update(float)
 *
 * Callers: 4
 *   0x000000000023D2B4  Caver::TextBubbleComponent::Update(float)
 *   0x000000000023D2F0  `non-virtual thunk to'Caver::TextBubbleComponent::Update(float)
 *   0x000000000042C2F0  Caver::NotificationView::Update(float)
 *   0x0000000000494468  Caver::GUIBubbleView::GUIBubbleView(void)
 *
 * Callees: 1
 *   0x00000000004AA758  Caver::GUITextBubble::Update(float)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3E08 string=0x00000000001F3E0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITextBubble::Update(Caver::GUITextBubble *this, float a2)
{
  return _ZN5Caver13GUITextBubble6UpdateEf(this, a2);
}

