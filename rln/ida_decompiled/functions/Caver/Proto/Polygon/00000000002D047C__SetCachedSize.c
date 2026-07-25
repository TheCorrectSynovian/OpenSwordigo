/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002D047C
 * Mangled: _ZNK5Caver5Proto7Polygon13SetCachedSizeEi
 * Demangled: Caver::Proto::Polygon::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002D0444  Caver::Proto::Polygon::~Polygon()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Polygon::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

