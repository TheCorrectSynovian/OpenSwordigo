/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000201880
 * Mangled: ._ZN5boost10shared_ptrIN5Caver9GUISliderEEC2IS2_EEPT_
 * Demangled: boost::shared_ptr<Caver::GUISlider>::shared_ptr<Caver::GUISlider>(Caver::GUISlider *)
 *
 * Callers: 4
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000003CDB58  Caver::ExperienceBar::ExperienceBar(void)
 *   0x00000000003DFD28  Caver::ManaBar::ManaBar(void)
 *   0x00000000003E2B10  Caver::TargetFrame::TargetFrame(void)
 *
 * Callees: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000201888 string=0x000000000020188C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void boost::shared_ptr<Caver::GUISlider>::shared_ptr<Caver::GUISlider>()
{
  JUMPOUT(0x3417A4);
}

