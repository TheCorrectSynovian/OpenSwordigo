/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002029D0
 * Mangled: ._ZN5Caver15GUITexturedRect15InitWithTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_7Vector2E
 * Demangled: Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Vector2 const&)
 *
 * Callers: 3
 *   0x0000000000495B00  Caver::GUIButton::SetImage(std::string const&)
 *   0x0000000000495D00  Caver::GUIButton::SetHighlightedImage(boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000004AB048  Caver::GUITexturedRect::InitWithTextureName(std::string const&,Caver::Vector2 const&)
 *
 * Callees: 1
 *   0x00000000004AAE88  Caver::GUITexturedRect::InitWithTexture(boost::intrusive_ptr<Caver::Texture> const&,Caver::Vector2 const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002029D8 string=0x00000000002029DC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::GUITexturedRect::InitWithTexture()
{
  return _ZN5Caver15GUITexturedRect15InitWithTextureERKN5boost13intrusive_ptrINS_7TextureEEERKNS_7Vector2E();
}

