/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D169C
 * Mangled: _ZN5Caver5Proto18Texture_SubtextureD0Ev
 * Demangled: Caver::Proto::Texture_Subtexture::~Texture_Subtexture()
 *
 * Callers: 0
 *
 * Callees: 4
 *   0x00000000001F5350  Caver::Proto::Texture_Subtexture::~Texture_Subtexture()
 *   0x00000000001F72B0  operator delete(void *)
 *   0x00000000002D16D4  Caver::Proto::Texture_Subtexture::SetCachedSize(int)
 *   0x00000000005818C4  sub_5818C4
 *
 * Referenced strings: 4
 *   insn=0x00000000002D16A8 string=0x00000000002D16AC ")"
 *   insn=0x00000000002D16AC string=0x00000000001F5350 "P'"
 *   insn=0x00000000002D16BC string=0x00000000001F72B0 "0'"
 *   insn=0x00000000002D16CC string=0x00000000002D16D0 "}"
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

void __fastcall Caver::Proto::Texture_Subtexture::~Texture_Subtexture(Caver::Proto::Texture_Subtexture *this)
{
  Caver::Proto::Texture_Subtexture::~Texture_Subtexture(this);
  operator delete(this);
}

