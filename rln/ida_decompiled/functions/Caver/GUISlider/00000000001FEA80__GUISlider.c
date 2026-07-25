/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FEA80
 * Mangled: ._ZN5Caver9GUISliderC2Ev
 * Demangled: Caver::GUISlider::GUISlider(void)
 *
 * Callers: 4
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000003CDB58  Caver::ExperienceBar::ExperienceBar(void)
 *   0x00000000003DFD28  Caver::ManaBar::ManaBar(void)
 *   0x00000000003E2B10  Caver::TargetFrame::TargetFrame(void)
 *
 * Callees: 1
 *   0x000000000049CB2C  Caver::GUISlider::GUISlider(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FEA88 string=0x00000000001FEA8C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::GUISlider::GUISlider(Caver::GUISlider *this)
{
  return _ZN5Caver9GUISliderC2Ev(this);
}

