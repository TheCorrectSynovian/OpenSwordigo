/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FCB10
 * Mangled: ._ZN5boost6detail12shared_countC2IN5Caver6SpriteEEEPT_
 * Demangled: boost::detail::shared_count::shared_count<Caver::Sprite>(Caver::Sprite *)
 *
 * Callers: 8
 *   0x000000000021D4A8  Caver::BackgroundComponent::BackgroundComponent(void)
 *   0x000000000023BB70  Caver::SpriteComponent::SpriteComponent(void)
 *   0x000000000023BDC4  Caver::SpriteComponent::SpriteComponent(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x000000000041538C  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *   0x00000000004201CC  boost::enable_shared_from_this<Caver::GUIResponder>::_internal_accept_owner<Caver::MapView,Caver::MapView>(boost::shared_ptr<Caver::MapView> const*,Caver::MapView *)
 *   0x00000000004AA054  Caver::GUITextBubble::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Color const&)
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Callees: 1
 *   0x000000000021E33C  boost::detail::shared_count::shared_count<Caver::Sprite>(Caver::Sprite *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FCB18 string=0x00000000001FCB1C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 boost::detail::shared_count::shared_count<Caver::Sprite>()
{
  return _ZN5boost6detail12shared_countC2IN5Caver6SpriteEEEPT_();
}

