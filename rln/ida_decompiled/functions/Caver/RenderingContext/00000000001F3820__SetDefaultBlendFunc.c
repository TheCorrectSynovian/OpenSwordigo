/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3820
 * Mangled: ._ZN5Caver16RenderingContext19SetDefaultBlendFuncEv
 * Demangled: Caver::RenderingContext::SetDefaultBlendFunc(void)
 *
 * Callers: 19
 *   0x000000000022C47C  Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x000000000022E5C8  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x0000000000288320  Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *   0x000000000037226C  Caver::SceneView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000003C5390  Caver::CoinBar::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000003F8B58  Caver::AttributePointsView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000041CEE8  Caver::MapAnnotation::Draw(Caver::RenderingContext *)
 *   0x000000000041F064  Caver::MapMenuPage::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000425ABC  Caver::MapView::Update(float)
 *   0x000000000045A84C  Caver::LightOverlay::Draw(Caver::RenderingContext *)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000049CD40  Caver::GUISlider::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004A735C  Caver::GUIEffect::Draw(Caver::RenderingContext *)
 *   0x00000000004A9C2C  Caver::GUIRoundedRect::Draw(Caver::RenderingContext *)
 *   0x00000000004AA868  Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *   0x00000000004AB308  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048B8A0  Caver::RenderingContext::SetDefaultBlendFunc(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3828 string=0x00000000001F382C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetDefaultBlendFunc(Caver::RenderingContext *this)
{
  return _ZN5Caver16RenderingContext19SetDefaultBlendFuncEv(this);
}

