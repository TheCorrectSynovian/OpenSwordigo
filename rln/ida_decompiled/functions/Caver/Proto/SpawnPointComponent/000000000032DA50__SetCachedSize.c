/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000032DA50
 * Mangled: _ZNK5Caver5Proto19SpawnPointComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::SpawnPointComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000032D9C8  Caver::Proto::SpawnPointComponent::~SpawnPointComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::SpawnPointComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

