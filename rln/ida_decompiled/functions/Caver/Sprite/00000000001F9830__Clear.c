/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9830
 * Mangled: ._ZN5Caver6Sprite5ClearEv
 * Demangled: Caver::Sprite::Clear(void)
 *
 * Callers: 10
 *   0x00000000003DAA78  Caver::HealthBar::UpdateSprite(void)
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000003F8BE4  Caver::AttributePointsView::UpdateSprite(void)
 *   0x0000000000424008  Caver::MapView::UpdateTargetPath(void)
 *   0x0000000000424D10  Caver::MapView::UpdateNodesSprite(void)
 *   0x0000000000425FB4  Caver::MapView::AddNodeIconsToSprite(Caver::MapViewNode *,Caver::Rectangle const&,float)
 *   0x00000000004431AC  Caver::TabView::UpdateSprite(void)
 *   0x000000000049CF4C  Caver::GUISlider::UpdateSprite(void)
 *   0x00000000004A99F4  Caver::GUIRoundedRect::CreateSprite(void)
 *   0x00000000004C50A8  std::_Rb_tree<std::string,std::pair<std::string const,boost::weak_ptr<Caver::Font>>,std::_Select1st<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::weak_ptr<Caver::Font>>>>::_M_create_node(std::pair<std::string const,boost::weak_ptr<Caver::Font>> const&)
 *
 * Callees: 1
 *   0x00000000004C81B0  Caver::Sprite::Clear(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9838 string=0x00000000001F983C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Sprite::Clear(Caver::Sprite *this)
{
  return _ZN5Caver6Sprite5ClearEv(this);
}

