/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000202CD0
 * Mangled: ._ZN5Caver9GUISlider13SetBarTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUISlider::SetBarTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 4
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000003CDB58  Caver::ExperienceBar::ExperienceBar(void)
 *   0x00000000003DFD28  Caver::ManaBar::ManaBar(void)
 *   0x00000000003E2B10  Caver::TargetFrame::TargetFrame(void)
 *
 * Callees: 1
 *   0x000000000049CC18  Caver::GUISlider::SetBarTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000202CD8 string=0x0000000000202CDC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUISlider::SetBarTexture()
{
  return _ZN5Caver9GUISlider13SetBarTextureERKN5boost13intrusive_ptrINS_7TextureEEE();
}

