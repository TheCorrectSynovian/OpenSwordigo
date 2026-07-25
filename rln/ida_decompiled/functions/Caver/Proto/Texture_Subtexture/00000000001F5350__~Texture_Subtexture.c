/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000001F5350
 * Mangled: ._ZN5Caver5Proto18Texture_SubtextureD2Ev
 * Demangled: Caver::Proto::Texture_Subtexture::~Texture_Subtexture()
 *
 * Callers: 1
 *   0x00000000002D169C  Caver::Proto::Texture_Subtexture::~Texture_Subtexture()
 *
 * Callees: 1
 *   0x00000000002D12AC  Caver::Proto::Texture_Subtexture::Texture_Subtexture(Caver::Proto::Texture_Subtexture const&)
 *
 * Referenced strings: 1
 *   insn=0x00000000001F5358 string=0x00000000001F535C " "
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

// attributes: thunk
void __fastcall Caver::Proto::Texture_Subtexture::~Texture_Subtexture(Caver::Proto::Texture_Subtexture *this)
{
  JUMPOUT(0x2D148C);
}

