/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x0000000000200E20
 * Mangled: ._ZN5Caver9GUISlider15SetFrameTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUISlider::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 4
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000003CDB58  Caver::ExperienceBar::ExperienceBar(void)
 *   0x00000000003DFD28  Caver::ManaBar::ManaBar(void)
 *   0x00000000003E2B10  Caver::TargetFrame::TargetFrame(void)
 *
 * Callees: 1
 *   0x000000000049CBB8  Caver::GUISlider::SetFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x0000000000200E28 string=0x0000000000200E2C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUISlider::SetFrameTexture()
{
  return _ZN5Caver9GUISlider15SetFrameTextureERKN5boost13intrusive_ptrINS_7TextureEEE();
}

