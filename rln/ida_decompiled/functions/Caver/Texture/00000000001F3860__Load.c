/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F3860
 * Mangled: ._ZN5Caver7Texture4LoadEv
 * Demangled: Caver::Texture::Load(void)
 *
 * Callers: 4
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *   0x00000000004CC06C  Caver::Texture::Reload(bool)
 *   0x00000000004CC494  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callees: 1
 *   0x00000000004C9900  Caver::Texture::GetBindings(std::vector<Caver::Binding,std::allocator<Caver::Binding>> *)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F3868 string=0x00000000001F386C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Texture::Load(Caver::Texture *this)
{
  JUMPOUT(0x4CAA74);
}

