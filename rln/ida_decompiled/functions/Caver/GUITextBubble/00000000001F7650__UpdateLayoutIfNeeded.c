/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7650
 * Mangled: ._ZN5Caver13GUITextBubble20UpdateLayoutIfNeededEv
 * Demangled: Caver::GUITextBubble::UpdateLayoutIfNeeded(void)
 *
 * Callers: 1
 *   0x000000000042BD20  Caver::NotificationView::NotificationView(void)
 *
 * Callees: 1
 *   0x00000000004AA978  Caver::GUITextBubble::UpdateLayoutIfNeeded(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7658 string=0x00000000001F765C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUITextBubble::UpdateLayoutIfNeeded(Caver::GUITextBubble *this)
{
  return _ZN5Caver13GUITextBubble20UpdateLayoutIfNeededEv(this);
}

