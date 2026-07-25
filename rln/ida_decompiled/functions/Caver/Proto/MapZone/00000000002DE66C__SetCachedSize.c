/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x00000000002DE66C
 * Mangled: _ZNK5Caver5Proto7MapZone13SetCachedSizeEi
 * Demangled: Caver::Proto::MapZone::SetCachedSize(int)
 *
 * Callers: 1
 *   0x00000000002DE634  Caver::Proto::MapZone::~MapZone()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::MapZone::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

