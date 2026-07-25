/*
 * OpenSwordigo reverse-engineering evidence
 *
 * Source: IDA Pro / Hex-Rays
 * Address: 0x000000000030A350
 * Mangled: _ZNK5Caver5Proto18WaterMeshComponent13SetCachedSizeEi
 * Demangled: Caver::Proto::WaterMeshComponent::SetCachedSize(int)
 *
 * Callers: 1
 *   0x000000000030A2B4  Caver::Proto::WaterMeshComponent::~WaterMeshComponent()
 *
 * Callees: 0
 *
 * Referenced strings: 0
 *
 * GENERATED EVIDENCE — NOT ORIGINAL SOURCE.
 */

__int64 __fastcall Caver::Proto::WaterMeshComponent::SetCachedSize(__int64 this, int a2)
{
  *(_DWORD *)(this + 8) = a2;
  return this;
}

