/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002022D0
 * Mangled: ._ZN5boost10scoped_ptrIN5Caver14GUIRoundedRectEED2Ev
 * Demangled: boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr()
 *
 * Callers: 3
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *   0x00000000004950A4  Caver::GUIButton::GUIButton(Caver::GUIButtonType)
 *   0x0000000000495E34  Caver::GUIButton::SetFrameTextureForState(Caver::GUIControl::State,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000003CAA00  boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr()
 *
 * Referenced strings: 1
 *   insn=0x00000000002022D8 string=0x00000000002022DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::scoped_ptr<Caver::GUIRoundedRect>::~scoped_ptr()
{
  return _ZN5boost10scoped_ptrIN5Caver14GUIRoundedRectEED2Ev();
}

