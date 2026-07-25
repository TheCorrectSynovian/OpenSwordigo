/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200140
 * Mangled: ._ZNK5Caver7FWTouch14LocationInViewEPKNS_7GUIViewE
 * Demangled: Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *
 * Callers: 16
 *   0x00000000003CD734  Caver::DraggableOverlayItem::TouchBegan(Caver::FWTouch const&)
 *   0x00000000003CD798  Caver::DraggableOverlayItem::TouchMoved(Caver::FWTouch const&)
 *   0x000000000040E298  Caver::InventoryTrinketSlot::TouchBegan(Caver::FWTouch const&)
 *   0x000000000040E4D0  Caver::InventoryTrinketSlot::TouchMoved(Caver::FWTouch const&)
 *   0x0000000000427B9C  Caver::MapView::TouchEnded(Caver::FWTouch const&)
 *   0x00000000004435B8  Caver::TabView::TouchBegan(Caver::FWTouch const&)
 *   0x00000000004962DC  Caver::GUIButton::TouchMoved(Caver::FWTouch const&)
 *   0x0000000000496DE0  Caver::GUIDraggableItem::TouchMoved(Caver::FWTouch const&)
 *   0x000000000049BDEC  Caver::GUIScrollView::DragWithTouch(Caver::FWTouch const&)
 *   0x000000000049BFA8  Caver::GUIScrollView::TouchBegan(Caver::FWTouch const&)
 *   0x000000000049D434  Caver::GUISlider::TouchBegan(Caver::FWTouch const&)
 *   0x000000000049D580  Caver::GUISlider::TouchMoved(Caver::FWTouch const&)
 *   0x000000000049DE68  Caver::GUISwitch::TouchMoved(Caver::FWTouch const&)
 *   0x00000000004A35D8  Caver::GUIWindow::DragAndDropItemWithTouch(Caver::FWTouch const&,boost::shared_ptr<Caver::GUIDraggableItem> const&)
 *   0x00000000004A3E0C  Caver::GUIWindow::BeginTouch(Caver::FWTouch const&)
 *   0x00000000004D4658  Caver::GUIPopoverView::TouchEnded(Caver::FWTouch const&)
 *
 * Callees: 1
 *   0x00000000004ABA5C  Caver::FWTouch::LocationInView(Caver::GUIView const*)
 *
 * Referenced strings: 2
 *   insn=0x0000000000200144 string=0x00000000004ABA5C "\t "
 *   insn=0x0000000000200148 string=0x000000000020014C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FWTouch::LocationInView(Caver::FWTouch *this, const Caver::GUIView *a2)
{
  return _ZNK5Caver7FWTouch14LocationInViewEPKNS_7GUIViewE(this, a2);
}

