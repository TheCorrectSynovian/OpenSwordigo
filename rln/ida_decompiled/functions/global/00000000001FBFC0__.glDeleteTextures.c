/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001FBFC0
 * Mangled: .glDeleteTextures
 * Demangled: .glDeleteTextures
 *
 * Callers: 2
 *   0x00000000004C8884  Caver::Texture::~Texture()
 *   0x00000000004CBFD8  Caver::Texture::Unload(void)
 *
 * Callees: 1
 *   0x00000000006FE948  glDeleteTextures
 *
 * Referenced strings: 1
 *   insn=0x00000000001FBFC8 string=0x00000000001FBFCC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
__int64 glDeleteTextures()
{
  return glDeleteTextures();
}

