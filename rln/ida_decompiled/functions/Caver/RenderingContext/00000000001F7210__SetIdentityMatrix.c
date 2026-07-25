/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7210
 * Mangled: ._ZN5Caver16RenderingContext17SetIdentityMatrixEv
 * Demangled: Caver::RenderingContext::SetIdentityMatrix(void)
 *
 * Callers: 33
 *   0x000000000034ED2C  Caver::GameSceneView::Update(float)
 *   0x000000000037226C  Caver::SceneView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000003C5390  Caver::CoinBar::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000003CD540  Caver::DraggableOverlayItem::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000003D022C  Caver::ExperienceBar::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000003E1638  Caver::OverlayMenuButton::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000003F8B58  Caver::AttributePointsView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000400A80  Caver::DraggableMenuItem::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000404A8C  Caver::GuidePurchaseView::AnimateIn(void)
 *   0x000000000040AD04  Caver::InventoryItemPanel::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000040E0F4  Caver::InventoryTrinketSlot::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000414A00  Caver::ItemBuyPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000041675C  Caver::ItemInfoPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000041CEE8  Caver::MapAnnotation::Draw(Caver::RenderingContext *)
 *   0x000000000041F064  Caver::MapMenuPage::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000042061C  Caver::MapPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000425ABC  Caver::MapView::Update(float)
 *   0x000000000042A45C  Caver::MenuItemSlot::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000042C2F0  Caver::NotificationView::Update(float)
 *   0x0000000000436A08  Caver::SceneLoadingView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000441D3C  Caver::TabbedMenuView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000443540  Caver::TabView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000494670  Caver::GUIBubbleView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000497658  Caver::GUIFrameView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004987E8  Caver::GUILoadingView::GUILoadingView(void)
 *   0x000000000049CD40  Caver::GUISlider::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004A7768  Caver::GUIEffectView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004B9CB0  Caver::GUITextFieldImpl::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004D3868  std::__uninitialized_copy<false>::__uninit_copy<Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *>(Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *,Caver::RenderingProgramShader::UniformVariable *)
 *
 * Callees: 1
 *   0x000000000048B36C  Caver::RenderingContext::SetIdentityMatrix(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7218 string=0x00000000001F721C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetIdentityMatrix(Caver::RenderingContext *this)
{
  return _ZN5Caver16RenderingContext17SetIdentityMatrixEv(this);
}

