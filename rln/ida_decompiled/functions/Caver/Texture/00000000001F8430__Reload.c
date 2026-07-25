/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F8430
 * Mangled: ._ZN5Caver7Texture6ReloadEb
 * Demangled: Caver::Texture::Reload(bool)
 *
 * Callers: 1
 *   0x00000000004CD51C  Caver::TextureLibrary::ReloadTextures(bool)
 *
 * Callees: 1
 *   0x00000000004CC06C  Caver::Texture::Reload(bool)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F8438 string=0x00000000001F843C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 __fastcall Caver::Texture::Reload(Caver::Texture *this, bool a2)
{
  return _ZN5Caver7Texture6ReloadEb(this, a2);
}

