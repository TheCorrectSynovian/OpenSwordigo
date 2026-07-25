/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002EA084
 * Mangled: _ZNK5Caver5Proto13PlayerProfile13SetCachedSizeEi
 * Demangled: Caver::Proto::PlayerProfile::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002EA04C  Caver::Proto::PlayerProfile::~PlayerProfile()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::PlayerProfile::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

