/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F80D0
 * Mangled: ._ZN5Caver9GUIButtonD2Ev
 * Demangled: Caver::GUIButton::~GUIButton()
 *
 * Callers: 7
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *   0x00000000003CA1B8  Caver::ConsumableItemView::SetItem(boost::shared_ptr<Caver::Item> const&)
 *   0x00000000003E04B4  Caver::OverlayButton::OverlayButton(void)
 *   0x00000000003E08FC  Caver::OverlayButton::~OverlayButton()
 *   0x00000000003E0A34  Caver::OverlayMenuButton::OverlayMenuButton(void)
 *   0x00000000003E267C  Caver::OverlayMenuButton::~OverlayMenuButton()
 *   0x00000000004964D8  Caver::GUIButton::~GUIButton()
 *
 * Callees: 1
 *   0x00000000003C9400  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableOverlayItem,Caver::DraggableOverlayItem>(boost::shared_ptr<Caver::DraggableOverlayItem> const*,Caver::DraggableOverlayItem *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F80D8 string=0x00000000001F80DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::GUIButton::~GUIButton(Caver::GUIButton *this)
{
  JUMPOUT(0x3C9CC0);
}

