/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE2A0
 * Mangled: _ZNK5Caver5Proto7Vector213SetCachedSizeEi
 * Demangled: Caver::Proto::Vector2::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002CE258  Caver::Proto::Vector2::~Vector2()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector2::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

