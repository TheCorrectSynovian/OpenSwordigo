/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F6270
 * Mangled: ._ZN5Caver5Proto7TextureD2Ev
 * Demangled: Caver::Proto::Texture::~Texture()
 *
 * Callers: 1
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000002D25A0  Caver::Proto::Texture::Texture(Caver::Proto::Texture const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F6278 string=0x00000000001F627C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Texture::~Texture(Caver::Proto::Texture *this)
{
  JUMPOUT(0x2D2828);
}

