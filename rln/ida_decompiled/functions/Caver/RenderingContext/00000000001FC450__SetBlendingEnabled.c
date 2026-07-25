/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FC450
 * Mangled: ._ZN5Caver16RenderingContext18SetBlendingEnabledEb
 * Demangled: Caver::RenderingContext::SetBlendingEnabled(bool)
 *
 * Callers: 20
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
 *   0x00000000004C6704  Caver::FontText::DrawSubstring(Caver::RenderingContext *,ulong,ulong)
 *
 * Callees: 1
 *   0x000000000048B8D8  Caver::RenderingContext::SetBlendingEnabled(bool)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FC454 string=0x000000000048B8D8 "\t"
 *   insn=0x00000000001FC458 string=0x00000000001FC45C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetBlendingEnabled(Caver::RenderingContext *this, bool a2)
{
  return _ZN5Caver16RenderingContext18SetBlendingEnabledEb(this, a2);
}

