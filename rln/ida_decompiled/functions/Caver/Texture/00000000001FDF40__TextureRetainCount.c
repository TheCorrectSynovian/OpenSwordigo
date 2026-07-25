/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FDF40
 * Mangled: ._ZNK5Caver7Texture18TextureRetainCountEv
 * Demangled: Caver::Texture::TextureRetainCount(void)
 *
 * Callers: 2
 *   0x00000000004CD608  Caver::TextureLibrary::PurgeTexturesIfNecessary(void)
 *   0x00000000004CD7DC  Caver::TextureLibrary::RefreshUnusedTexturesList(void)
 *
 * Callees: 1
 *   0x00000000004C8BA8  Caver::Texture::TextureRetainCount(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001FDF48 string=0x00000000001FDF4C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Texture::TextureRetainCount(Caver::Texture *this)
{
  return _ZNK5Caver7Texture18TextureRetainCountEv(this);
}

