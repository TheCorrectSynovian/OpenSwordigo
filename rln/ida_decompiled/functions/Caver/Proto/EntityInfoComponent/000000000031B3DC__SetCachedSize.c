/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000031B3DC
 * Mangled: _ZNK5Caver5Proto19EntityInfoComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::EntityInfoComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000031B2E0  Caver::Proto::EntityInfoComponent::~EntityInfoComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::EntityInfoComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

