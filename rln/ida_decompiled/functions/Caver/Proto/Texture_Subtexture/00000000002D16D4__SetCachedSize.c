/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D16D4
 * Mangled: _ZNK5Caver5Proto18Texture_Subtexture13SetCachedSizeEi
 * Demangled: Caver::Proto::Texture_Subtexture::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002D169C  Caver::Proto::Texture_Subtexture::~Texture_Subtexture()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_Subtexture::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

