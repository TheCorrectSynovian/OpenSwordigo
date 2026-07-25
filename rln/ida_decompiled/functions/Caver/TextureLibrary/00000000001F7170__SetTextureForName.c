/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F7170
 * Mangled: ._ZN5Caver14TextureLibrary17SetTextureForNameERKSsRKN5boost13intrusive_ptrINS_7TextureEEE
 * Demangled: Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Callers: 3
 *   0x00000000004CC494  Caver::TextureLibrary::TextureForName(std::string const&,bool)
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000004CD608  Caver::TextureLibrary::PurgeTexturesIfNecessary(void)
 *
 * Callees: 1
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F7178 string=0x00000000001F717C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 Caver::TextureLibrary::SetTextureForName()
{
  return _ZN5Caver14TextureLibrary17SetTextureForNameERKSsRKN5boost13intrusive_ptrINS_7TextureEEE();
}

