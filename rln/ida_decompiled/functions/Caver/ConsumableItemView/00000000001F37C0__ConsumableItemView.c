/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F37C0
 * Mangled: ._ZN5Caver18ConsumableItemViewC2Ev
 * Demangled: Caver::ConsumableItemView::ConsumableItemView(void)
 *
 * Callers: 1
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *
 * Callees: 1
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F37C8 string=0x00000000001F37CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::ConsumableItemView::ConsumableItemView(Caver::ConsumableItemView *this)
{
  JUMPOUT(0x3C98FC);
}

