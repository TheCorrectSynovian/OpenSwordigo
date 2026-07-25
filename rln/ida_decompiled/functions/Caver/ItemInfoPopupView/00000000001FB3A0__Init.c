/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FB3A0
 * Mangled: ._ZN5Caver17ItemInfoPopupView4InitERKN5boost13intrusive_ptrINS_7TextureEEERKSsS8_
 * Demangled: Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *
 * Callers: 2
 *   0x000000000041538C  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *   0x0000000000416238  Caver::ItemInfoPopupView::InitWithSkill(boost::shared_ptr<Caver::Skill> const&)
 *
 * Callees: 1
 *   0x000000000041538C  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FB3A8 string=0x00000000001FB3AC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::ItemInfoPopupView::Init()
{
  return _ZN5Caver17ItemInfoPopupView4InitERKN5boost13intrusive_ptrINS_7TextureEEERKSsS8_();
}

