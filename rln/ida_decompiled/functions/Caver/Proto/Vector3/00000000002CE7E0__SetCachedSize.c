/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002CE7E0
 * Mangled: _ZNK5Caver5Proto7Vector313SetCachedSizeEi
 * Demangled: Caver::Proto::Vector3::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002CE798  Caver::Proto::Vector3::~Vector3()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Vector3::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

