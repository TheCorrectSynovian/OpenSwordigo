/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8990
 * Mangled: ._ZN5Caver8FontTextD2Ev
 * Demangled: Caver::FontText::~FontText()
 *
 * Callers: 11
 *   0x000000000022E30C  Caver::OverlayTextComponent::UpdateText(void)
 *   0x000000000022EE70  Caver::OverlayTextComponent::~OverlayTextComponent()
 *   0x00000000003CDB58  Caver::ExperienceBar::ExperienceBar(void)
 *   0x00000000003D029C  Caver::ExperienceBar::~ExperienceBar()
 *   0x00000000003DCAC0  std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>::_M_fill_insert(__gnu_cxx::__normal_iterator<boost::shared_ptr<Caver::GUIAnimation>*,std::vector<boost::shared_ptr<Caver::GUIAnimation>,std::allocator<boost::shared_ptr<Caver::GUIAnimation>>>>,ulong,boost::shared_ptr<Caver::GUIAnimation> const&)
 *   0x00000000003DEB84  Caver::ItemOverlay::~ItemOverlay()
 *   0x00000000003E2B10  Caver::TargetFrame::TargetFrame(void)
 *   0x00000000003E4C7C  Caver::TargetFrame::~TargetFrame()
 *   0x0000000000415118  boost::detail::shared_count::shared_count<Caver::FontText>(Caver::FontText *)
 *   0x00000000004151AC  boost::detail::sp_counted_impl_p<Caver::FontText>::dispose(void)
 *   0x000000000046D734  Caver::SceneGridLayer::~SceneGridLayer()
 *
 * Callees: 1
 *   0x000000000022F3C8  Caver::FontText::~FontText()
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8998 string=0x00000000001F899C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::FontText::~FontText(Caver::FontText *this)
{
  _ZN5Caver8FontTextD2Ev(this);
}

