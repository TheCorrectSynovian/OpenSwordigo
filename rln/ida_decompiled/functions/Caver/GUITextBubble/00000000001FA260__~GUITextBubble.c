/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FA260
 * Mangled: ._ZN5Caver13GUITextBubbleD2Ev
 * Demangled: Caver::GUITextBubble::~GUITextBubble()
 *
 * Callers: 3
 *   0x000000000023DD54  boost::detail::shared_count::shared_count<Caver::GUITextBubble>(Caver::GUITextBubble *)
 *   0x000000000023DDE8  boost::detail::sp_counted_impl_p<Caver::GUITextBubble>::dispose(void)
 *   0x000000000042C798  Caver::NotificationView::~NotificationView()
 *
 * Callees: 1
 *   0x000000000023DE3C  Caver::GUITextBubble::~GUITextBubble()
 *
 * Referenced strings: 1
 *   insn=0x00000000001FA268 string=0x00000000001FA26C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUITextBubble::~GUITextBubble(Caver::GUITextBubble *this)
{
  _ZN5Caver13GUITextBubbleD2Ev(this);
}

