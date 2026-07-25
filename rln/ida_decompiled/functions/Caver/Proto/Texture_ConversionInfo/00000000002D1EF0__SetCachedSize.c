/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D1EF0
 * Mangled: _ZNK5Caver5Proto22Texture_ConversionInfo13SetCachedSizeEi
 * Demangled: Caver::Proto::Texture_ConversionInfo::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002D1EA8  Caver::Proto::Texture_ConversionInfo::~Texture_ConversionInfo()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Texture_ConversionInfo::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

