/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200B90
 * Mangled: ._ZN5Caver6Sprite12AddRectangleERKNS_9RectangleES3_RKNS_5ColorE
 * Demangled: Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *
 * Callers: 17
 *   0x000000000022BAFC  Caver::OverlayTargetArrowComponent::Prepare(void)
 *   0x0000000000271378  Caver::HealthComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x00000000003C4A54  Caver::CoinBar::CreateIconSprite(void)
 *   0x00000000003DAA78  Caver::HealthBar::UpdateSprite(void)
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000003F8BE4  Caver::AttributePointsView::UpdateSprite(void)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x000000000041538C  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *   0x00000000004201CC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>(boost::shared_ptr<Caver::MapView> const*,Caver::MapView *)
 *   0x0000000000424D10  Caver::MapView::UpdateNodesSprite(void)
 *   0x0000000000425FB4  Caver::MapView::AddNodeIconsToSprite(Caver::MapViewNode *,Caver::Rectangle const&,float)
 *   0x000000000042647C  Caver::MapView::AddPathToSprite(Caver::Sprite *,boost::shared_ptr<Caver::MapPath> const&,Caver::Color,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000004431AC  Caver::TabView::UpdateSprite(void)
 *   0x000000000049CF4C  Caver::GUISlider::UpdateSprite(void)
 *   0x000000000049D1B8  Caver::AddCappedRectToSprite(Caver::Sprite *,boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&,float)
 *   0x00000000004AA054  Caver::GUITextBubble::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004C733C  Caver::Sprite::AddRectangle(Caver::Rectangle const&,Caver::Rectangle const&,Caver::Color const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200B98 string=0x0000000000200B9C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::AddRectangle(
        Caver::Sprite *this,
        const Caver::Rectangle *a2,
        const Caver::Rectangle *a3,
        const Caver::Color *a4)
{
  return _ZN5Caver6Sprite12AddRectangleERKNS_9RectangleES3_RKNS_5ColorE(this, a2, a3, a4);
}

