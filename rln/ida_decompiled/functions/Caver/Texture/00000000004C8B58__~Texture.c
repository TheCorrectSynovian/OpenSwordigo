/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000004C8B58
 * Mangled: _ZN5Caver7TextureD0Ev
 * Demangled: Caver::Texture::~Texture()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000001F8500  Caver::Texture::~Texture()
 *   0x00000000004C8B90  Caver::Texture::SharedPtr(void)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000004C8B64 string=0x00000000004C8B68 "f"
 *   insn=0x00000000004C8B68 string=0x00000000001F8500 "0'"
 *   insn=0x00000000004C8B78 string=0x00000000001F72B0 "0'"
 *   insn=0x00000000004C8B88 string=0x00000000004C8B8C "N"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Texture::~Texture(Caver::Texture *this)
{
  Caver::Texture::~Texture(this);
  operator delete(this);
}

