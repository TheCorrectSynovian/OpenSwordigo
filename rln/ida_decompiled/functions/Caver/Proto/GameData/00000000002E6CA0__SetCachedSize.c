/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002E6CA0
 * Mangled: _ZNK5Caver5Proto8GameData13SetCachedSizeEi
 * Demangled: Caver::Proto::GameData::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002E6C68  Caver::Proto::GameData::~GameData()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::GameData::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

