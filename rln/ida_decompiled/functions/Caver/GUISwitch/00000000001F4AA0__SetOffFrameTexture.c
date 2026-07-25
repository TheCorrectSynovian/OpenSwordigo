/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F4AA0
 * Mangled: ._ZN5Caver9GUISwitch18SetOffFrameTextureERKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::GUISwitch::SetOffFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 1
 *   0x000000000033FBF4  Caver::GameInterfaceBuilder::IconButton(boost::intrusive_ptr<Caver::Texture> const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x000000000049DC98  Caver::GUISwitch::SetOffFrameTexture(boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F4AA8 string=0x00000000001F4AAC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUISwitch::SetOffFrameTexture()
{
  return _ZN5Caver9GUISwitch18SetOffFrameTextureERKN5boost13intrusive_ptrINS_7TextureEEE();
}

