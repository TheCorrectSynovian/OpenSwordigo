/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7470
 * Mangled: ._ZN5Caver7TextureC2Ev
 * Demangled: Caver::Texture::Texture(void)
 *
 * Callers: 3
 *   0x00000000004A28BC  Caver::GUIWindow::DrawRect(Caver::RenderingContext *,Caver::Rectangle const&,Caver::Matrix4 const&)
 *   0x00000000004CC494  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000004C881C  Caver::Texture::Texture(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7478 string=0x00000000001F747C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Texture::Texture(Caver::Texture *this)
{
  return _ZN5Caver7TextureC2Ev(this);
}

