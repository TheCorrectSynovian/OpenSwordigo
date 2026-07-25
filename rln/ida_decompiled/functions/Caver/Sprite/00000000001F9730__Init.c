/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9730
 * Mangled: ._ZN5Caver6Sprite4InitERKN5boost13intrusive_ptrINS_7TextureEEEiib
 * Demangled: Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *
 * Callers: 16
 *   0x000000000022BAFC  Caver::OverlayTargetArrowComponent::Prepare(void)
 *   0x0000000000271378  Caver::HealthComponent::Draw(Caver::RenderingContext *,Caver::Matrix4 const&)
 *   0x00000000003C4A54  Caver::CoinBar::CreateIconSprite(void)
 *   0x00000000003DA000  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>> const&)
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000003F8BE4  Caver::AttributePointsView::UpdateSprite(void)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x000000000041538C  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *   0x00000000004201CC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>(boost::shared_ptr<Caver::MapView> const*,Caver::MapView *)
 *   0x000000000042080C  Caver::MapView::MapView(void)
 *   0x0000000000442974  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::TabView,Caver::TabView>(boost::shared_ptr<Caver::TabView> const*,Caver::TabView *)
 *   0x000000000049CF4C  Caver::GUISlider::UpdateSprite(void)
 *   0x00000000004A99F4  Caver::GUIRoundedRect::CreateSprite(void)
 *   0x00000000004AA054  Caver::GUITextBubble::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *   0x00000000004C53E4  Caver::FontText::AddText(std::string const&,float,Caver::Vector2 const&)
 *   0x00000000004C7324  Caver::Sprite::InitWithMaxRectangles(boost::intrusive_ptr<Caver::Texture> const&,int,bool)
 *
 * Callees: 1
 *   0x00000000004C7038  Caver::Sprite::Init(boost::intrusive_ptr<Caver::Texture> const&,int,int,bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9738 string=0x00000000001F973C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::Sprite::Init()
{
  return _ZN5Caver6Sprite4InitERKN5boost13intrusive_ptrINS_7TextureEEEiib();
}

