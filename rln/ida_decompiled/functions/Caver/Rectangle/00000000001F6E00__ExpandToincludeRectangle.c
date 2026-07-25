/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6E00
 * Mangled: ._ZN5Caver9Rectangle24ExpandToincludeRectangleERKS0_
 * Demangled: Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *
 * Callers: 17
 *   0x000000000021AC6C  Caver::CollisionShapeComponent::SetUpdatedShape(Caver::Shape const&)
 *   0x00000000002C5F98  Caver::SwingableWeaponComponent::Update(float)
 *   0x00000000003A1538  Caver::ProfileSelectionView::ProfileSelectionView(void)
 *   0x00000000003D04F4  Caver::GameOverlayView::GameOverlayView(void)
 *   0x00000000003F8230  Caver::AttributePointsView::LayoutSubviews(void)
 *   0x000000000040EBEC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::DraggableMenuItem,Caver::DraggableMenuItem>(boost::shared_ptr<Caver::DraggableMenuItem> const*,Caver::DraggableMenuItem *)
 *   0x0000000000411444  Caver::InventoryView::ButtonPressed(void *,Caver::GUIEvent *)
 *   0x0000000000424ACC  Caver::MapView::UpdateNodes(void)
 *   0x0000000000432A08  Caver::QuestsView::LayoutSubviews(void)
 *   0x00000000004737D8  Caver::SceneObject::UpdateBounds(void)
 *   0x0000000000473948  Caver::SceneObject::setLocalAABB(Caver::Rectangle const&)
 *   0x00000000004A129C  Caver::GUIView::SetTouchBoundsToIncludeSubviewTouchBounds(void)
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000004C6280  Caver::FontText::AlignHorizontally(Caver::GUITextAlignment)
 *   0x00000000004C647C  Caver::FontText::BoundsForLine(int)
 *   0x00000000004C733C  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *   0x00000000004C78A4  Caver::Sprite::AddGradientRectangle(Caver::Rectangle const&,Caver::Rectangle const&,boost::shared_ptr<Caver::GradientColor> const&)
 *
 * Callees: 1
 *   0x00000000004B23E4  Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001F6E04 string=0x00000000004B23E4 "!"
 *   insn=0x00000000001F6E08 string=0x00000000001F6E0C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Rectangle::ExpandToincludeRectangle(Caver::Rectangle *this, const Caver::Rectangle *a2)
{
  return _ZN5Caver9Rectangle24ExpandToincludeRectangleERKS0_(this, a2);
}

