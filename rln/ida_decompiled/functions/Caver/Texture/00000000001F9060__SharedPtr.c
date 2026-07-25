/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F9060
 * Mangled: ._ZN5Caver7Texture9SharedPtrEv
 * Demangled: Caver::Texture::SharedPtr(void)
 *
 * Callers: 6
 *   0x00000000003DA000  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<Caver::GUIView>>>>::_M_create_node(std::pair<std::string const,boost::shared_ptr<Caver::GUIView>> const&)
 *   0x00000000003DE41C  Caver::ItemOverlay::UpdateSprites(void)
 *   0x00000000003F8BE4  Caver::AttributePointsView::UpdateSprite(void)
 *   0x000000000042080C  Caver::MapView::MapView(void)
 *   0x0000000000453C94  Caver::ParticleSystem::AddParticleType(boost::intrusive_ptr<Caver::Texture> const&,Caver::Rectangle const&)
 *   0x000000000049CF4C  Caver::GUISlider::UpdateSprite(void)
 *
 * Callees: 1
 *   0x00000000004C8B90  Caver::Texture::SharedPtr(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F9068 string=0x00000000001F906C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Texture::SharedPtr(Caver::Texture *this)
{
  return _ZN5Caver7Texture9SharedPtrEv(this);
}

