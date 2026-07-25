/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D2AEC
 * Mangled: _ZN5Caver5Proto7TextureD0Ev
 * Demangled: Caver::Proto::Texture::~Texture()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002006E0  Caver::Proto::Texture::~Texture()
 *   0x00000000002D2B24  Caver::Proto::Texture::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 2
 *   insn=0x00000000002D2B0C string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D2B1C string=0x00000000002D2B20 "i"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Texture::~Texture(Caver::Proto::Texture *this)
{
  Caver::Proto::Texture::~Texture(this);
  operator delete(this);
}

