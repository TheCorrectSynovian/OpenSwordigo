/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB1A0
 * Mangled: ._ZN5Caver16RenderingContext8SetColorERKNS_5ColorE
 * Demangled: Caver::RenderingContext::SetColor(Caver::Color const&)
 *
 * Callers: 22
 *   0x000000000022C47C  Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x000000000022E5C8  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x000000000023C854  Caver::SpriteComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000271378  Caver::HealthComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000288320  Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *   0x00000000002B6760  Caver::RotatingBackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x00000000002C2DF4  Caver::WaterMeshComponent::Draw(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000002CB828  Caver::WeaponGlowComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&,Caver::Vector3 const&,Caver::Vector3 const&)
 *   0x00000000003C5390  Caver::CoinBar::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x0000000000414A00  Caver::ItemBuyPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000041675C  Caver::ItemInfoPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000042061C  Caver::MapPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000425ABC  Caver::MapView::Update(float)
 *   0x000000000044B14C  Caver::ModelInstance::Draw(Caver::RenderingContext *)
 *   0x0000000000451590  Caver::SkeletonInstance::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000461E60  Caver::PointLightManager::DrawDebugShapes(Caver::RenderingContext *)
 *   0x00000000004667AC  Caver::Scene::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x000000000047DAA8  Caver::FWShell::DrawTouches(Caver::RenderingContext *)
 *   0x00000000004A735C  Caver::GUIEffect::Draw(Caver::RenderingContext *)
 *   0x00000000004AA868  Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *   0x00000000004AB308  Caver::GUITexturedRect::Draw(Caver::RenderingContext *)
 *
 * Callees: 1
 *   0x000000000048B468  Caver::RenderingContext::SetColor(Caver::Color const&)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FB1A4 string=0x000000000048B468 "("
 *   insn=0x00000000001FB1A8 string=0x00000000001FB1AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::RenderingContext::SetColor(Caver::RenderingContext *this, const Caver::Color *a2)
{
  return _ZN5Caver16RenderingContext8SetColorERKNS_5ColorE(this, a2);
}

