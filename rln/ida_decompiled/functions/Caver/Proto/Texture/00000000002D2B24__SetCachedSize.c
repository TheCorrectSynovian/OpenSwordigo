/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D2B24
 * Mangled: _ZNK5Caver5Proto7Texture13SetCachedSizeEi
 * Demangled: Caver::Proto::Texture::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002D2AEC  Caver::Proto::Texture::~Texture()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

