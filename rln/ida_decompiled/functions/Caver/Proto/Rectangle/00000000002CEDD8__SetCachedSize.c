/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CEDD8
 * Mangled: _ZNK5Caver5Proto9Rectangle13SetCachedSizeEi
 * Demangled: Caver::Proto::Rectangle::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002CED90  Caver::Proto::Rectangle::~Rectangle()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Rectangle::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

