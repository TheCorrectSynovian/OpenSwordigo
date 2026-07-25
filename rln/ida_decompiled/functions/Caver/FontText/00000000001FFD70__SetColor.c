/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FFD70
 * Mangled: ._ZN5Caver8FontText8SetColorERKNS_5ColorE
 * Demangled: Caver::FontText::SetColor(Caver::Color const&)
 *
 * Callers: 11
 *   0x000000000022E30C  Caver::OverlayTextComponent::UpdateText(void)
 *   0x00000000003CDB58  Caver::ExperienceBar::ExperienceBar(void)
 *   0x00000000003CE554  Caver::ExperienceBar::UpdateText(void)
 *   0x00000000003DCAC0  std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIAnimation>*,std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>>,ulong,boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000003E2B10  Caver::TargetFrame::TargetFrame(void)
 *   0x00000000003E3474  Caver::TargetFrame::UpdateInfo(void)
 *   0x0000000000412D28  Caver::ItemBuyPopupView::Init(boost::shared_ptr<Caver::Item> const&,int)
 *   0x000000000041538C  Caver::ItemInfoPopupView::Init(boost::intrusive_ptr<Caver::Texture> const&,std::string const&,std::string const&)
 *   0x0000000000497B54  Caver::GUILabel::UpdateText(void)
 *   0x00000000004980FC  Caver::GUILabel::AddText(std::string const&,Caver::Color)
 *   0x00000000004AA1EC  Caver::GUITextBubble::SetText(std::string const&,Caver::Color const&,float)
 *
 * Callees: 1
 *   0x00000000004C5170  Caver::FontText::SetColor(Caver::Color const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FFD78 string=0x00000000001FFD7C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::FontText::SetColor(Caver::FontText *this, const Caver::Color *a2)
{
  return _ZN5Caver8FontText8SetColorERKNS_5ColorE(this, a2);
}

