/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CFD18
 * Mangled: _ZNK5Caver5Proto6Circle13SetCachedSizeEi
 * Demangled: Caver::Proto::Circle::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002CFC90  Caver::Proto::Circle::~Circle()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Circle::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

