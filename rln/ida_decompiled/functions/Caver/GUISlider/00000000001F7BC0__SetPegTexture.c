/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7BC0
 * Mangled: ._ZN5Caver9GUISlider13SetPegTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUISlider::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x000000000049CC78  Caver::GUISlider::SetPegTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7BC8 string=0x00000000001F7BCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUISlider::SetPegTexture()
{
  return _ZN5Caver9GUISlider13SetPegTextureERKN5boost13intrusive_ptrINS_7TextureEEE();
}

