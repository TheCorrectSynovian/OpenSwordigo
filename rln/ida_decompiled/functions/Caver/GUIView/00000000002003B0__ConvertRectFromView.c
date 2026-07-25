/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002003B0
 * Mangled: ._ZNK5Caver7GUIView19ConvertRectFromViewERKNS_9RectangleEPS0_
 * Demangled: Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *
 * Callers: 13
 *   0x000000000034EC74  Caver::GUIView::safeBounds(void)
 *   0x00000000003D6A38  Caver::GameOverlayView::LayoutSubviews(void)
 *   0x00000000003F8230  Caver::AttributePointsView::LayoutSubviews(void)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x000000000041E2F8  Caver::MapMenuPage::UpdateTitle(void)
 *   0x000000000041EF8C  Caver::MapMenuPage::CenterAtNode(Caver::MapViewNode *,bool)
 *   0x000000000041F0FC  Caver::MapMenuPage::ShowTravelToButtonFromNode(Caver::MapViewNode *)
 *   0x000000000041F7D4  Caver::MapMenuPage::MapViewDidSelectionDidChange(Caver::MapView *)
 *   0x000000000042F014  Caver::PortalView::LayoutSubviews(void)
 *   0x000000000042F388  Caver::PortalView::CenterAtNode(Caver::MapViewNode *,bool)
 *   0x000000000042F460  Caver::PortalView::AnimateIn(void)
 *   0x000000000043D058  Caver::SkillPickerView::SetSlotSelected(int,bool)
 *   0x00000000004B9CB0  Caver::GUITextFieldImpl::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *
 * Callees: 1
 *   0x00000000004A0E58  Caver::GUIView::ConvertRectFromView(Caver::Rectangle const&,Caver::GUIView*)
 *
 * Referenced strings: 1
 *   insn=0x00000000002003B8 string=0x00000000002003BC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUIView::ConvertRectFromView(
        Caver::GUIView *this,
        const Caver::Rectangle *a2,
        Caver::GUIView *a3)
{
  return _ZNK5Caver7GUIView19ConvertRectFromViewERKNS_9RectangleEPS0_(this, a2, a3);
}

