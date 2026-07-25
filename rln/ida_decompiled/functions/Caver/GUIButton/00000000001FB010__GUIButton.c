/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB010
 * Mangled: ._ZN5Caver9GUIButtonC2ENS_13GUIButtonTypeE
 * Demangled: Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *
 * Callers: 2
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *   0x00000000003E04B4  Caver::OverlayButton::OverlayButton(void)
 *
 * Callees: 1
 *   0x00000000004950A4  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB018 string=0x00000000001FB01C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUIButton::GUIButton()
{
  return _ZN5Caver9GUIButtonC2ENS_13GUIButtonTypeE();
}

