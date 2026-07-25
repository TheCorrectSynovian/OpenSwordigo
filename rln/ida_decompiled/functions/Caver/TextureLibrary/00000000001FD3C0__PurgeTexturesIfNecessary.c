/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FD3C0
 * Mangled: ._ZN5Caver14TextureLibrary24PurgeTexturesIfNecessaryEv
 * Demangled: Caver::TextureLibrary::PurgeTexturesIfNecessary(void)
 *
 * Callers: 2
 *   0x00000000004CCB7C  Caver::TextureLibrary::SetTextureForName(std::string const&,boost::intrusive_ptr<Caver::Texture> const&)
 *   0x00000000004CD608  Caver::TextureLibrary::PurgeTexturesIfNecessary(void)
 *
 * Callees: 1
 *   0x00000000004CD608  Caver::TextureLibrary::PurgeTexturesIfNecessary(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FD3C8 string=0x00000000001FD3CC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextureLibrary::PurgeTexturesIfNecessary(Caver::TextureLibrary *this)
{
  return _ZN5Caver14TextureLibrary24PurgeTexturesIfNecessaryEv(this);
}

