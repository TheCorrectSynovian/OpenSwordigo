/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F38F0
 * Mangled: ._ZN5Caver14TextureLibrary25RefreshUnusedTexturesListEv
 * Demangled: Caver::TextureLibrary::RefreshUnusedTexturesList(void)
 *
 * Callers: 2
 *   0x000000000035299C  Caver::GameViewController::SaveGameState(bool)
 *   0x00000000004CD608  Caver::TextureLibrary::PurgeTexturesIfNecessary(void)
 *
 * Callees: 1
 *   0x00000000004CD7DC  Caver::TextureLibrary::RefreshUnusedTexturesList(void)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F38F8 string=0x00000000001F38FC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::TextureLibrary::RefreshUnusedTexturesList(Caver::TextureLibrary *this)
{
  return _ZN5Caver14TextureLibrary25RefreshUnusedTexturesListEv(this);
}

