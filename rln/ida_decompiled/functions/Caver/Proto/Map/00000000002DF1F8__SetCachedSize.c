/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DF1F8
 * Mangled: _ZNK5Caver5Proto3Map13SetCachedSizeEi
 * Demangled: Caver::Proto::Map::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002DF1C0  Caver::Proto::Map::~Map()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::Map::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

