/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002006E0
 * Mangled: ._ZN5Caver5Proto7TextureD2Ev_0
 * Demangled: Caver::Proto::Texture::~Texture()
 *
 * Callers: 1
 *   0x00000000002D2AEC  Caver::Proto::Texture::~Texture()
 *
 * Callees: 1
 *   0x00000000002D25A0  Caver::Proto::Texture::Texture(Caver::Proto::Texture const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000002006E8 string=0x00000000002006EC " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Texture::~Texture(Caver::Proto::Texture *this)
{
  JUMPOUT(0x2D2828);
}

