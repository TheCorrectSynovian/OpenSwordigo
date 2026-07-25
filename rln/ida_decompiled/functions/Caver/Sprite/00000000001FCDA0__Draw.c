/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCDA0
 * Mangled: ._ZNK5Caver6Sprite4DrawEPNS_16RenderingContextE
 * Demangled: Caver::Sprite::Draw(Caver::RenderingContext *)
 *
 * Callers: 21
 *   0x000000000021DED4  Caver::BackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x000000000022C47C  Caver::OverlayTargetArrowComponent::Draw(Caver::RenderingContext *,Caver::Camera const*,Caver::Rectangle const&)
 *   0x000000000022E5C8  Caver::OverlayTextComponent::UpdateSprite(void)
 *   0x000000000023C854  Caver::SpriteComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000271378  Caver::HealthComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x0000000000288320  Caver::MagicExplosionComponent::HandleMessage(int,void *)
 *   0x00000000002B6760  Caver::RotatingBackgroundComponent::Draw(Caver::RenderingContext *,Caver::Camera *)
 *   0x00000000003C5390  Caver::CoinBar::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000003DAD60  Caver::HealthBar::Update(float)
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000003F8B58  Caver::AttributePointsView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000414A00  Caver::ItemBuyPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000041675C  Caver::ItemInfoPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000041CEE8  Caver::MapAnnotation::Draw(Caver::RenderingContext *)
 *   0x000000000042061C  Caver::MapPopupView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x0000000000425ABC  Caver::MapView::Update(float)
 *   0x0000000000443540  Caver::TabView::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x000000000049CD40  Caver::GUISlider::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004A9C2C  Caver::GUIRoundedRect::Draw(Caver::RenderingContext *)
 *   0x00000000004AA868  Caver::GUITextBubble::Draw(Caver::RenderingContext *)
 *   0x00000000004C6704  Caver::FontText::DrawSubstring(Caver::RenderingContext *,ulong,ulong)
 *
 * Callees: 1
 *   0x00000000004C8584  Caver::Sprite::Draw(Caver::RenderingContext *)
 *
 * Referenced strings: 2
 *   insn=0x00000000001FCDA4 string=0x00000000004C8584 ""
 *   insn=0x00000000001FCDA8 string=0x00000000001FCDAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::Draw(Caver::Sprite *this, Caver::RenderingContext *a2)
{
  return _ZNK5Caver6Sprite4DrawEPNS_16RenderingContextE(this, a2);
}

