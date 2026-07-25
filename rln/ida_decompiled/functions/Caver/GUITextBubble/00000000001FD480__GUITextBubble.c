/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD480
 * Mangled: ._ZN5Caver13GUITextBubbleC2Ev
 * Demangled: Caver::GUITextBubble::GUITextBubble(void)
 *
 * Callers: 3
 *   0x000000000023CD60  Caver::TextBubbleComponent::RegisterLibrary(void)
 *   0x000000000042BD20  Caver::NotificationView::NotificationView(void)
 *   0x0000000000494468  Caver::GUIBubbleView::GUIBubbleView(void)
 *
 * Callees: 1
 *   0x00000000004A9E3C  Caver::GUITextBubble::GUITextBubble(void)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FD484 string=0x00000000004A9E3C "h"
 *   insn=0x00000000001FD488 string=0x00000000001FD48C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITextBubble::GUITextBubble(Caver::GUITextBubble *this)
{
  return _ZN5Caver13GUITextBubbleC2Ev(this);
}

